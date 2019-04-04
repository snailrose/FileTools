/*
-------------------------------------------------------------------------------
    Copyright (c) 2010 Charlie C & Erwin Coumans.

 This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#ifndef _ftStreams_h_
#define _ftStreams_h_

#include "ftTypes.h"

class ftStream
{
public:
	enum StreamMode
	{
		SM_READ = 1,
		SM_WRITE = 2,
	};

public:
	ftStream() {}
	virtual ~ftStream() {}

	virtual void open(const char* path, ftStream::StreamMode mode) {}
	virtual void clear(void) {};


	virtual bool isOpen(void) const = 0;
	virtual bool eof(void) const = 0;

	virtual FBTsize  read(void* dest, FBTsize nr) const = 0;
	virtual FBTsize  write(const void* src, FBTsize nr) = 0;
	virtual FBTsize  writef(const char* fmt, ...) {return 0;};

	virtual FBTsize  position(void) const = 0;
	virtual FBTsize  size(void) const = 0;

	virtual FBTsize seek(FBTint32 off, FBTint32 way) {return 0;}

protected:
	virtual void reserve(FBTsize nr) {}
};

class           ftMemoryStream;
typedef void*   ftFileHandle;

class ftFileStream : public ftStream
{
public:
	ftFileStream();
	~ftFileStream();

	void open(const char* path, ftStream::StreamMode mode);
	void close(void);
	bool eof(void) const;

    FBTsize     read(void* dest, FBTsize nr) const;
    void        write(ftMemoryStream &ms) const;
    FBTsize     write(const void* src, FBTsize nr);
	
    FBTsize     writef(const char* buf, ...);
	FBTsize     position(void) const;
	FBTsize     size(void)     const;
	FBTsize     seek(FBTint32 off, FBTint32 way);


    ftINLINE bool isOpen(void) const { return m_handle != 0; }

protected:
	ftFileHandle        m_handle;
	int                 m_mode;
	int					m_size;
};

#if ftUSE_GZ_FILE == 1

class ftGzStream : public ftStream
{
public:
	ftGzStream();
	~ftGzStream();

	void open(const char* path, ftStream::StreamMode mode);
	void close(void);

	bool isOpen(void)   const {return m_handle != 0;}
	bool eof(void)      const;

	FBTsize  read(void* dest, FBTsize nr) const;
	FBTsize  write(const void* src, FBTsize nr);
	FBTsize  writef(const char* buf, ...);


	FBTsize  position(void) const;
	FBTsize size(void) const;

	// no size / seek
protected:
	ftFixedString<272> m_file;
	ftFileHandle       m_handle;
	int                 m_mode;
};


#endif


class ftMemoryStream : public ftStream
{
public:
	ftMemoryStream();
	~ftMemoryStream();

	void clear(void);

	void open(ftStream::StreamMode mode);
	void open(const char* path, ftStream::StreamMode mode);
	void open(const ftFileStream& fs, ftStream::StreamMode mode);
	void open(const void* buffer, FBTsize size, ftStream::StreamMode mode,bool compressed=false);


	ftINLINE bool     isOpen(void)    const   {return m_buffer != 0;}
    ftINLINE bool     eof(void)       const   {return !m_buffer || m_pos >= m_size;}
    ftINLINE FBTsize  position(void)  const   {return m_pos;}
    ftINLINE FBTsize  size(void)      const   {return m_size;}

	FBTsize  read(void* dest, FBTsize nr) const;
	FBTsize  write(const void* src, FBTsize nr);
	FBTsize  writef(const char* buf, ...);
#if ftUSE_GZ_FILE == 1
	bool gzipInflate( char* inBuf, int inSize);
#endif
	void*            ptr(void)          {return m_buffer;}
	const void*      ptr(void) const    {return m_buffer;}

	FBTsize seek(FBTint32 off, FBTint32 way);


	void reserve(FBTsize nr);
protected:
	friend class ftFileStream;

	char*            m_buffer;
	mutable FBTsize  m_pos;
	FBTsize          m_size, m_capacity;
	int              m_mode;
};


#endif//_ftStreams_h_
