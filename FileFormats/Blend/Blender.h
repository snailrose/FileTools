/*

    This file was automatically generated.
    https://github.com/CharlesCarley/FileTools

    By    : TableDecompiler.exe
    From  : Test/Test.blend(BLENDER-v282)
    On    : Tue Dec 31 11:38:48 AM

*/
#ifndef _Blender_
#define _Blender_


#include <stdint.h>

namespace Blender
{
#pragma region Forward
    struct Link;
    struct LinkData;
    struct ListBase;
    struct vec2s;
    struct vec2f;
    struct vec3f;
    struct rcti;
    struct rctf;
    struct DualQuat;
    struct DrawDataList;
    struct IDPropertyData;
    struct IDProperty;
    struct IDOverrideLibraryPropertyOperation;
    struct IDOverrideLibraryProperty;
    struct IDOverrideLibrary;
    struct ID;
    struct Library;
    struct PreviewImage;
    struct IpoDriver;
    struct IpoCurve;
    struct Ipo;
    struct KeyBlock;
    struct Key;
    struct TextLine;
    struct Text;
    struct PackedFile;
    struct GPUDOFSettings;
    struct CameraStereoSettings;
    struct CameraBGImage;
    struct CameraDOFSettings;
    struct Camera_Runtime;
    struct Camera;
    struct ImageUser;
    struct ImageAnim;
    struct ImageView;
    struct ImagePackedFile;
    struct RenderSlot;
    struct ImageTile;
    struct Image;
    struct MTex;
    struct CBData;
    struct ColorBand;
    struct PointDensity;
    struct Tex;
    struct TexMapping;
    struct ColorMapping;
    struct Lamp;
    struct TexPaintSlot;
    struct MaterialGPencilStyle;
    struct Material;
    struct VFont;
    struct MetaElem;
    struct MetaBall;
    struct BezTriple;
    struct BPoint;
    struct Nurb;
    struct CharInfo;
    struct TextBox;
    struct Curve;
    struct MLoopTri_Store;
    struct Mesh_Runtime;
    struct Mesh;
    struct TFace;
    struct MFace;
    struct MEdge;
    struct MDeformWeight;
    struct MDeformVert;
    struct MVert;
    struct MCol;
    struct MPoly;
    struct MLoop;
    struct MLoopTri;
    struct MLoopUV;
    struct MLoopCol;
    struct MSelect;
    struct MTFace;
    struct MFloatProperty;
    struct MIntProperty;
    struct MStringProperty;
    struct OrigSpaceFace;
    struct OrigSpaceLoop;
    struct MDisps;
    struct MultiresCol;
    struct MultiresColFace;
    struct MultiresFace;
    struct MultiresEdge;
    struct MultiresLevel;
    struct Multires;
    struct MRecast;
    struct GridPaintMask;
    struct MVertSkin;
    struct FreestyleEdge;
    struct FreestyleFace;
    struct ModifierData;
    struct MappingInfoModifierData;
    struct SubsurfModifierData;
    struct LatticeModifierData;
    struct CurveModifierData;
    struct BuildModifierData;
    struct MaskModifierData;
    struct ArrayModifierData;
    struct MirrorModifierData;
    struct EdgeSplitModifierData;
    struct BevelModifierData;
    struct FluidModifierData;
    struct DisplaceModifierData;
    struct UVProjectModifierData;
    struct DecimateModifierData;
    struct SmoothModifierData;
    struct CastModifierData;
    struct WaveModifierData;
    struct ArmatureModifierData;
    struct HookModifierData;
    struct SoftbodyModifierData;
    struct ClothModifierData;
    struct CollisionModifierData;
    struct SurfaceModifierData;
    struct BooleanModifierData;
    struct MDefInfluence;
    struct MDefCell;
    struct MeshDeformModifierData;
    struct ParticleSystemModifierData;
    struct ParticleInstanceModifierData;
    struct ExplodeModifierData;
    struct MultiresModifierData;
    struct FluidsimModifierData;
    struct SmokeModifierData;
    struct ShrinkwrapModifierData;
    struct SimpleDeformModifierData;
    struct ShapeKeyModifierData;
    struct SolidifyModifierData;
    struct ScrewModifierData;
    struct OceanModifierData;
    struct WarpModifierData;
    struct WeightVGEditModifierData;
    struct WeightVGMixModifierData;
    struct WeightVGProximityModifierData;
    struct DynamicPaintModifierData;
    struct RemeshModifierData;
    struct SkinModifierData;
    struct TriangulateModifierData;
    struct LaplacianSmoothModifierData;
    struct CorrectiveSmoothDeltaCache;
    struct CorrectiveSmoothModifierData;
    struct UVWarpModifierData;
    struct MeshCacheModifierData;
    struct LaplacianDeformModifierData;
    struct WireframeModifierData;
    struct WeldModifierData;
    struct DataTransferModifierData;
    struct NormalEditModifierData;
    struct MeshSeqCacheModifierData;
    struct SDefBind;
    struct SDefVert;
    struct SurfaceDeformModifierData;
    struct WeightedNormalModifierData;
    struct Lattice;
    struct bDeformGroup;
    struct bFaceMap;
    struct BoundBox;
    struct LodLevel;
    struct Object_Runtime;
    struct Object;
    struct ObHook;
    struct PartDeflect;
    struct EffectorWeights;
    struct PTCacheExtra;
    struct PTCacheMem;
    struct PointCache;
    struct SBVertex;
    struct SoftBody_Shared;
    struct SoftBody;
    struct FluidVertexVelocity;
    struct FluidsimSettings;
    struct World;
    struct AviCodecData;
    struct FFMpegCodecData;
    struct AudioData;
    struct SceneRenderLayer;
    struct SceneRenderView;
    struct Stereo3dFormat;
    struct ImageFormatData;
    struct BakeData;
    struct RenderData;
    struct RenderProfile;
    struct TimeMarker;
    struct Paint_Runtime;
    struct PaintToolSlot;
    struct Paint;
    struct ImagePaintSettings;
    struct ParticleBrushData;
    struct ParticleEditSettings;
    struct Sculpt;
    struct UvSculpt;
    struct GpPaint;
    struct VPaint;
    struct GP_Sculpt_Data;
    struct GP_Sculpt_Guide;
    struct GP_Sculpt_Settings;
    struct GP_Interpolate_Settings;
    struct UnifiedPaintSettings;
    struct CurvePaintSettings;
    struct MeshStatVis;
    struct ToolSettings;
    struct UnitSettings;
    struct PhysicsSettings;
    struct DisplaySafeAreas;
    struct SceneDisplay;
    struct SceneEEVEE;
    struct TransformOrientationSlot;
    struct Scene;
    struct RegionView3D;
    struct View3DCursor;
    struct View3DShading;
    struct View3DOverlay;
    struct View3D_Runtime;
    struct View3D;
    struct View2D;
    struct SpaceLink;
    struct SpaceInfo;
    struct SpaceButs;
    struct SpaceOops;
    struct SpaceGraph_Runtime;
    struct SpaceIpo;
    struct SpaceNla;
    struct SpaceSeq;
    struct MaskSpaceInfo;
    struct FileSelectParams;
    struct SpaceFile;
    struct SpaceImage;
    struct SpaceText_Runtime;
    struct SpaceText;
    struct Script;
    struct SpaceScript;
    struct bNodeTreePath;
    struct SpaceNode;
    struct ConsoleLine;
    struct SpaceConsole;
    struct SpaceUserPref;
    struct SpaceClip;
    struct uiFont;
    struct uiFontStyle;
    struct uiStyle;
    struct uiWidgetColors;
    struct uiWidgetStateColors;
    struct uiPanelColors;
    struct ThemeUI;
    struct ThemeSpace;
    struct ThemeWireColor;
    struct bTheme;
    struct bAddon;
    struct bPathCompare;
    struct bUserMenu;
    struct bUserMenuItem;
    struct bUserMenuItem_Op;
    struct bUserMenuItem_Menu;
    struct bUserMenuItem_Prop;
    struct SolidLight;
    struct WalkNavigation;
    struct UserDef_Runtime;
    struct UserDef_SpaceData;
    struct UserDef_FileSpaceData;
    struct UserDef_Experimental;
    struct UserDef;
    struct bScreen;
    struct ScrVert;
    struct ScrEdge;
    struct ScrAreaMap;
    struct Panel;
    struct PanelCategoryStack;
    struct uiList;
    struct TransformOrientation;
    struct uiPreview;
    struct ScrArea_Runtime;
    struct ScrArea;
    struct ARegion_Runtime;
    struct ARegion;
    struct FileGlobal;
    struct StripAnim;
    struct StripElem;
    struct StripCrop;
    struct StripTransform;
    struct StripColorBalance;
    struct StripProxy;
    struct Strip;
    struct Sequence;
    struct MetaStack;
    struct Editing;
    struct WipeVars;
    struct GlowVars;
    struct TransformVars;
    struct SolidColorVars;
    struct SpeedControlVars;
    struct GaussianBlurVars;
    struct TextVars;
    struct ColorMixVars;
    struct SequenceModifierData;
    struct ColorBalanceModifierData;
    struct CurvesModifierData;
    struct HueCorrectModifierData;
    struct BrightContrastModifierData;
    struct SequencerMaskModifierData;
    struct WhiteBalanceModifierData;
    struct SequencerTonemapModifierData;
    struct SequencerScopes;
    struct Effect;
    struct BuildEff;
    struct PartEff;
    struct WaveEff;
    struct TreeStoreElem;
    struct TreeStore;
    struct bSound;
    struct CollectionObject;
    struct CollectionChild;
    struct Collection;
    struct Bone;
    struct bArmature;
    struct bMotionPathVert;
    struct bMotionPath;
    struct bAnimVizSettings;
    struct bPoseChannel_Runtime;
    struct bPoseChannel;
    struct bPose;
    struct bIKParam;
    struct bItasc;
    struct bActionGroup;
    struct bAction;
    struct bDopeSheet;
    struct SpaceAction_Runtime;
    struct SpaceAction;
    struct bActionChannel;
    struct bConstraintChannel;
    struct bConstraint;
    struct bConstraintTarget;
    struct bPythonConstraint;
    struct bKinematicConstraint;
    struct bSplineIKConstraint;
    struct bArmatureConstraint;
    struct bTrackToConstraint;
    struct bRotateLikeConstraint;
    struct bLocateLikeConstraint;
    struct bSizeLikeConstraint;
    struct bSameVolumeConstraint;
    struct bTransLikeConstraint;
    struct bMinMaxConstraint;
    struct bActionConstraint;
    struct bLockTrackConstraint;
    struct bDampTrackConstraint;
    struct bFollowPathConstraint;
    struct bStretchToConstraint;
    struct bRigidBodyJointConstraint;
    struct bClampToConstraint;
    struct bChildOfConstraint;
    struct bTransformConstraint;
    struct bPivotConstraint;
    struct bLocLimitConstraint;
    struct bRotLimitConstraint;
    struct bSizeLimitConstraint;
    struct bDistLimitConstraint;
    struct bShrinkwrapConstraint;
    struct bFollowTrackConstraint;
    struct bCameraSolverConstraint;
    struct bObjectSolverConstraint;
    struct bTransformCacheConstraint;
    struct bActionModifier;
    struct bActionStrip;
    struct bNodeStack;
    struct bNodeSocket;
    struct bNode;
    struct bNodeInstanceKey;
    struct bNodeLink;
    struct bNodeTree;
    struct bNodeSocketValueInt;
    struct bNodeSocketValueFloat;
    struct bNodeSocketValueBoolean;
    struct bNodeSocketValueVector;
    struct bNodeSocketValueRGBA;
    struct bNodeSocketValueString;
    struct NodeFrame;
    struct NodeImageAnim;
    struct ColorCorrectionData;
    struct NodeColorCorrection;
    struct NodeBokehImage;
    struct NodeBoxMask;
    struct NodeEllipseMask;
    struct NodeImageLayer;
    struct NodeBlurData;
    struct NodeDBlurData;
    struct NodeBilateralBlurData;
    struct NodeHueSat;
    struct NodeImageFile;
    struct NodeImageMultiFile;
    struct NodeImageMultiFileSocket;
    struct NodeChroma;
    struct NodeTwoXYs;
    struct NodeTwoFloats;
    struct NodeVertexCol;
    struct NodeDefocus;
    struct NodeScriptDict;
    struct NodeGlare;
    struct NodeTonemap;
    struct NodeLensDist;
    struct NodeColorBalance;
    struct NodeColorspill;
    struct NodeDilateErode;
    struct NodeMask;
    struct NodeTexBase;
    struct NodeTexSky;
    struct NodeTexImage;
    struct NodeTexChecker;
    struct NodeTexBrick;
    struct NodeTexEnvironment;
    struct NodeTexGradient;
    struct NodeTexNoise;
    struct NodeTexVoronoi;
    struct NodeTexMusgrave;
    struct NodeTexWave;
    struct NodeTexMagic;
    struct NodeShaderAttribute;
    struct NodeShaderVectTransform;
    struct NodeShaderTexPointDensity;
    struct TexNodeOutput;
    struct NodeKeyingScreenData;
    struct NodeKeyingData;
    struct NodeTrackPosData;
    struct NodeTranslateData;
    struct NodePlaneTrackDeformData;
    struct NodeShaderScript;
    struct NodeShaderTangent;
    struct NodeShaderNormalMap;
    struct NodeShaderUVMap;
    struct NodeShaderVertexColor;
    struct NodeShaderTexIES;
    struct NodeShaderOutputAOV;
    struct NodeSunBeams;
    struct NodeCryptomatte;
    struct NodeDenoise;
    struct CurveMapPoint;
    struct CurveMap;
    struct CurveMapping;
    struct Histogram;
    struct Scopes;
    struct ColorManagedViewSettings;
    struct ColorManagedDisplaySettings;
    struct ColorManagedColorspaceSettings;
    struct BrushClone;
    struct BrushGpencilSettings;
    struct Brush;
    struct PaletteColor;
    struct Palette;
    struct PaintCurvePoint;
    struct PaintCurve;
    struct CustomDataLayer;
    struct CustomDataExternal;
    struct CustomData;
    struct CustomData_MeshMasks;
    struct HairKey;
    struct ParticleKey;
    struct BoidParticle;
    struct ParticleSpring;
    struct ChildParticle;
    struct ParticleTarget;
    struct ParticleDupliWeight;
    struct ParticleData;
    struct SPHFluidSettings;
    struct ParticleSettings;
    struct ParticleSystem;
    struct ClothSimSettings;
    struct ClothCollSettings;
    struct bGPDcontrolpoint;
    struct bGPDspoint_Runtime;
    struct bGPDspoint;
    struct bGPDtriangle;
    struct bGPDpalettecolor;
    struct bGPDpalette;
    struct bGPDstroke_Runtime;
    struct bGPDstroke;
    struct bGPDframe_Runtime;
    struct bGPDframe;
    struct bGPDlayer_Runtime;
    struct bGPDlayer;
    struct bGPdata_Runtime;
    struct bGPgrid;
    struct bGPdata;
    struct GpencilModifierData;
    struct NoiseGpencilModifierData;
    struct SubdivGpencilModifierData;
    struct ThickGpencilModifierData;
    struct TimeGpencilModifierData;
    struct TintGpencilModifierData;
    struct ColorGpencilModifierData;
    struct OpacityGpencilModifierData;
    struct ArrayGpencilModifierData;
    struct BuildGpencilModifierData;
    struct LatticeGpencilModifierData;
    struct MirrorGpencilModifierData;
    struct HookGpencilModifierData;
    struct SimplifyGpencilModifierData;
    struct OffsetGpencilModifierData;
    struct SmoothGpencilModifierData;
    struct ArmatureGpencilModifierData;
    struct MultiplyGpencilModifierData;
    struct ShaderFxData;
    struct ShaderFxData_Runtime;
    struct BlurShaderFxData;
    struct ColorizeShaderFxData;
    struct FlipShaderFxData;
    struct GlowShaderFxData;
    struct LightShaderFxData;
    struct PixelShaderFxData;
    struct RimShaderFxData;
    struct ShadowShaderFxData;
    struct SwirlShaderFxData;
    struct WaveShaderFxData;
    struct ReportList;
    struct wmWindowManager;
    struct wmWindow;
    struct wmKeyMapItem;
    struct wmKeyMapDiffItem;
    struct wmKeyMap;
    struct wmKeyConfigPref;
    struct wmKeyConfig;
    struct wmOperator;
    struct FModifier;
    struct FMod_Generator;
    struct FMod_FunctionGenerator;
    struct FCM_EnvelopeData;
    struct FMod_Envelope;
    struct FMod_Cycles;
    struct FMod_Python;
    struct FMod_Limits;
    struct FMod_Noise;
    struct FMod_Stepped;
    struct DriverTarget;
    struct DriverVar;
    struct ChannelDriver;
    struct FPoint;
    struct FCurve;
    struct NlaStrip;
    struct NlaTrack;
    struct KS_Path;
    struct KeyingSet;
    struct AnimOverride;
    struct AnimData;
    struct IdAdtTemplate;
    struct BoidRule;
    struct BoidRuleGoalAvoid;
    struct BoidRuleAvoidCollision;
    struct BoidRuleFollowLeader;
    struct BoidRuleAverageSpeed;
    struct BoidRuleFight;
    struct BoidData;
    struct BoidState;
    struct BoidSettings;
    struct FluidDomainVertexVelocity;
    struct FluidDomainSettings;
    struct FluidFlowSettings;
    struct FluidEffectorSettings;
    struct Speaker;
    struct MovieClipUser;
    struct MovieClipProxy;
    struct MovieClip_RuntimeGPUTexture;
    struct MovieClip_Runtime;
    struct MovieClip;
    struct MovieClipScopes;
    struct MovieReconstructedCamera;
    struct MovieTrackingCamera;
    struct MovieTrackingMarker;
    struct MovieTrackingTrack;
    struct MovieTrackingPlaneMarker;
    struct MovieTrackingPlaneTrack;
    struct MovieTrackingSettings;
    struct MovieTrackingStabilization;
    struct MovieTrackingReconstruction;
    struct MovieTrackingObject;
    struct MovieTrackingStats;
    struct MovieTrackingDopesheetChannel;
    struct MovieTrackingDopesheetCoverageSegment;
    struct MovieTrackingDopesheet;
    struct MovieTracking;
    struct DynamicPaintSurface;
    struct DynamicPaintCanvasSettings;
    struct DynamicPaintBrushSettings;
    struct Mask;
    struct MaskParent;
    struct MaskSplinePointUW;
    struct MaskSplinePoint;
    struct MaskSpline;
    struct MaskLayerShape;
    struct MaskLayer;
    struct RigidBodyWorld_Shared;
    struct RigidBodyWorld;
    struct RigidBodyOb;
    struct RigidBodyCon;
    struct FreestyleLineSet;
    struct FreestyleModuleConfig;
    struct FreestyleConfig;
    struct LineStyleModifier;
    struct LineStyleColorModifier_AlongStroke;
    struct LineStyleAlphaModifier_AlongStroke;
    struct LineStyleThicknessModifier_AlongStroke;
    struct LineStyleColorModifier_DistanceFromCamera;
    struct LineStyleAlphaModifier_DistanceFromCamera;
    struct LineStyleThicknessModifier_DistanceFromCamera;
    struct LineStyleColorModifier_DistanceFromObject;
    struct LineStyleAlphaModifier_DistanceFromObject;
    struct LineStyleThicknessModifier_DistanceFromObject;
    struct LineStyleColorModifier_Curvature_3D;
    struct LineStyleAlphaModifier_Curvature_3D;
    struct LineStyleThicknessModifier_Curvature_3D;
    struct LineStyleColorModifier_Noise;
    struct LineStyleAlphaModifier_Noise;
    struct LineStyleThicknessModifier_Noise;
    struct LineStyleColorModifier_CreaseAngle;
    struct LineStyleAlphaModifier_CreaseAngle;
    struct LineStyleThicknessModifier_CreaseAngle;
    struct LineStyleColorModifier_Tangent;
    struct LineStyleAlphaModifier_Tangent;
    struct LineStyleThicknessModifier_Tangent;
    struct LineStyleColorModifier_Material;
    struct LineStyleAlphaModifier_Material;
    struct LineStyleThicknessModifier_Material;
    struct LineStyleGeometryModifier_Sampling;
    struct LineStyleGeometryModifier_BezierCurve;
    struct LineStyleGeometryModifier_SinusDisplacement;
    struct LineStyleGeometryModifier_SpatialNoise;
    struct LineStyleGeometryModifier_PerlinNoise1D;
    struct LineStyleGeometryModifier_PerlinNoise2D;
    struct LineStyleGeometryModifier_BackboneStretcher;
    struct LineStyleGeometryModifier_TipRemover;
    struct LineStyleGeometryModifier_Polygonalization;
    struct LineStyleGeometryModifier_GuidingLines;
    struct LineStyleGeometryModifier_Blueprint;
    struct LineStyleGeometryModifier_2DOffset;
    struct LineStyleGeometryModifier_2DTransform;
    struct LineStyleGeometryModifier_Simplification;
    struct LineStyleThicknessModifier_Calligraphy;
    struct FreestyleLineStyle;
    struct AlembicObjectPath;
    struct CacheFile;
    struct Base;
    struct ViewLayerEngineData;
    struct LayerCollection;
    struct ViewLayer;
    struct SceneCollection;
    struct bToolRef;
    struct WorkSpaceLayout;
    struct wmOwnerID;
    struct WorkSpace;
    struct WorkSpaceDataRelation;
    struct WorkSpaceInstanceHook;
    struct LightProbe;
    struct LightProbeCache;
    struct LightGridCache;
    struct LightCacheTexture;
    struct LightCache;
    struct CurveProfilePoint;
    struct CurveProfile;
#pragma endregion

// Pointers that have references to no known
// struct need to be declared as some type of handle.
// This should be a struct handle class so that it can be
// recompiled. struct XXX {int unused; }
#pragma region MissingStructures

    struct DrawData
    {
        int missing;
    };

    struct IDOverrideLibraryRuntime
    {
        int missing;
    };

    struct FileData
    {
        int missing;
    };

    struct GPUTexture
    {
        int missing;
    };

    struct Anim
    {
        int missing;
    };

    struct RenderResult
    {
        int missing;
    };

    struct MovieCache
    {
        int missing;
    };

    struct VFontData
    {
        int missing;
    };

    struct EditNurb
    {
        int missing;
    };

    struct EditFont
    {
        int missing;
    };

    struct EditMeshData
    {
        int missing;
    };

    struct SubdivCCG
    {
        int missing;
    };

    struct LinkNode
    {
        int missing;
    };

    struct ShrinkwrapBoundaryData
    {
        int missing;
    };

    struct BMEditMesh
    {
        int missing;
    };

    struct Cloth
    {
        int missing;
    };

    struct ClothHairData
    {
        int missing;
    };

    struct ClothSolverResult
    {
        int missing;
    };

    struct MVertTri
    {
        int missing;
    };

    struct BVHTree
    {
        int missing;
    };

    struct BVHTreeFromMesh
    {
        int missing;
    };

    struct Ocean
    {
        int missing;
    };

    struct OceanCache
    {
        int missing;
    };

    struct CacheReader
    {
        int missing;
    };

    struct Depsgraph
    {
        int missing;
    };

    struct EditLatt
    {
        int missing;
    };

    struct CurveCache
    {
        int missing;
    };

    struct GpencilBatchCache
    {
        int missing;
    };

    struct SculptSession
    {
        int missing;
    };

    struct DerivedMesh
    {
        int missing;
    };

    struct RNG
    {
        int missing;
    };

    struct PTCacheEdit
    {
        int missing;
    };

    struct BodyPoint
    {
        int missing;
    };

    struct BodySpring
    {
        int missing;
    };

    struct SBScratch
    {
        int missing;
    };

    struct ColorSpace
    {
        int missing;
    };

    struct GHash
    {
        int missing;
    };

    struct RenderEngine
    {
        int missing;
    };

    struct ViewDepths
    {
        int missing;
    };

    struct SmoothView3DStore
    {
        int missing;
    };

    struct wmTimer
    {
        int missing;
    };

    struct SmoothView2DStore
    {
        int missing;
    };

    struct BLI_mempool
    {
        int missing;
    };

    struct GPUFX
    {
        int missing;
    };

    struct FileList
    {
        int missing;
    };

    struct FileLayout
    {
        int missing;
    };

    struct NodeInsertOfsData
    {
        int missing;
    };

    struct wmTooltipState
    {
        int missing;
    };

    struct PanelType
    {
        int missing;
    };

    struct uiLayout
    {
        int missing;
    };

    struct uiListType
    {
        int missing;
    };

    struct uiListDyn
    {
        int missing;
    };

    struct SpaceType
    {
        int missing;
    };

    struct ScrGlobalAreaData
    {
        int missing;
    };

    struct ARegionType
    {
        int missing;
    };

    struct wmGizmoMap
    {
        int missing;
    };

    struct wmDrawBuffer
    {
        int missing;
    };

    struct SeqCache
    {
        int missing;
    };

    struct PrefetchJob
    {
        int missing;
    };

    struct ImBuf
    {
        int missing;
    };

    struct Particle
    {
        int missing;
    };

    struct EditBone
    {
        int missing;
    };

    struct GPUVertBuf
    {
        int missing;
    };

    struct GPUBatch
    {
        int missing;
    };

    struct Mat4
    {
        int missing;
    };

    struct bPoseChannelDrawData
    {
        int missing;
    };

    struct bNodeSocketType
    {
        int missing;
    };

    struct bNodeType
    {
        int missing;
    };

    struct uiBlock
    {
        int missing;
    };

    struct bNodeTreeType
    {
        int missing;
    };

    struct StructRNA
    {
        int missing;
    };

    struct bNodeInstanceHash
    {
        int missing;
    };

    struct bNodeTreeExec
    {
        int missing;
    };

    struct ParticleCacheKey
    {
        int missing;
    };

    struct LatticeDeformData
    {
        int missing;
    };

    struct KDTree_3d
    {
        int missing;
    };

    struct ParticleDrawData
    {
        int missing;
    };

    struct DRWShadingGroup
    {
        int missing;
    };

    struct UndoStack
    {
        int missing;
    };

    struct wmMsgBus
    {
        int missing;
    };

    struct wmEvent
    {
        int missing;
    };

    struct wmGesture
    {
        int missing;
    };

    struct wmIMEData
    {
        int missing;
    };

    struct PointerRNA
    {
        int missing;
    };

    struct wmOperatorType
    {
        int missing;
    };

    struct ExprPyLike_Parsed
    {
        int missing;
    };

    struct MANTA
    {
        int missing;
    };

    struct MovieClipCache
    {
        int missing;
    };

    struct PaintSurfaceData
    {
        int missing;
    };

    struct RigidBodyOb_Shared
    {
        int missing;
    };

    struct AbcArchiveHandle
    {
        int missing;
    };

    struct GSet
    {
        int missing;
    };

    struct DrawEngineType
    {
        int missing;
    };

    struct SceneStats
    {
        int missing;
    };

    struct bToolRef_Runtime
    {
        int missing;
    };

#pragma endregion

// Independent structures:
// The member declarations only contain references to other
// structures via a pointer (or only atomic types); Therefore,
// declaration order does not matter as long as any pointer
// reference is forwardly declared.
#pragma region Independent
    struct Link
    {
        Link *next;
        Link *prev;
    };

    struct LinkData
    {
        LinkData *next;
        LinkData *prev;
        void *    data;
    };

    struct ListBase
    {
        void *first;
        void *last;
    };

    struct vec2s
    {
        short x;
        short y;
    };

    struct vec2f
    {
        float x;
        float y;
    };

    struct vec3f
    {
        float x;
        float y;
        float z;
    };

    struct rcti
    {
        int xmin;
        int xmax;
        int ymin;
        int ymax;
    };

    struct rctf
    {
        float xmin;
        float xmax;
        float ymin;
        float ymax;
    };

    struct DualQuat
    {
        float quat[4];
        float trans[4];
        float scale[4][4];
        float scale_weight;
    };

    struct DrawDataList
    {
        DrawData *first;
        DrawData *last;
    };

    struct IDOverrideLibraryPropertyOperation
    {
        IDOverrideLibraryPropertyOperation *next;
        IDOverrideLibraryPropertyOperation *prev;
        short                               operation;
        short                               flag;
        char                                _pad0[4];
        char *                              subitem_reference_name;
        char *                              subitem_local_name;
        int                                 subitem_reference_index;
        int                                 subitem_local_index;
    };

    struct ID
    {
        void *             next;
        void *             prev;
        ID *               newid;
        Library *          lib;
        char               name[66];
        short              flag;
        int                tag;
        int                us;
        int                icon_id;
        int                recalc;
        char               _pad[4];
        IDProperty *       properties;
        IDOverrideLibrary *override_library;
        ID *               orig_id;
        void *             py_instance;
    };

    struct PreviewImage
    {
        int         w[2];
        int         h[2];
        short       flag[2];
        short       changed_timestamp[2];
        int *       rect[2];
        GPUTexture *gputexture[2];
        int         icon_id;
        short       tag;
        char        _pad[2];
    };

    struct IpoDriver
    {
        Object *ob;
        short   blocktype;
        short   adrcode;
        short   type;
        short   flag;
        char    name[128];
    };

    struct KeyBlock
    {
        KeyBlock *next;
        KeyBlock *prev;
        float     pos;
        float     curval;
        short     type;
        char      _pad1[2];
        short     relative;
        short     flag;
        int       totelem;
        int       uid;
        void *    data;
        char      name[64];
        char      vgroup[64];
        float     slidermin;
        float     slidermax;
    };

    struct TextLine
    {
        TextLine *next;
        TextLine *prev;
        char *    line;
        char *    format;
        int       len;
        char      _pad0[4];
    };

    struct PackedFile
    {
        int   size;
        int   seek;
        void *data;
    };

    struct GPUDOFSettings
    {
        float focus_distance;
        float fstop;
        float focal_length;
        float sensor;
        float rotation;
        float ratio;
        int   num_blades;
        int   high_quality;
    };

    struct CameraStereoSettings
    {
        float interocular_distance;
        float convergence_distance;
        short convergence_mode;
        short pivot;
        short flag;
        char  _pad[2];
        float pole_merge_angle_from;
        float pole_merge_angle_to;
    };

    struct CameraDOFSettings
    {
        Object *focus_object;
        float   focus_distance;
        float   aperture_fstop;
        float   aperture_rotation;
        float   aperture_ratio;
        int     aperture_blades;
        short   flag;
        char    _pad[2];
    };

    struct Camera_Runtime
    {
        float drw_corners[2][4][2];
        float drw_tria[2][2];
        float drw_depth[2];
        float drw_focusmat[4][4];
        float drw_normalmat[4][4];
    };

    struct ImageUser
    {
        Scene *scene;
        int    framenr;
        int    frames;
        int    offset;
        int    sfra;
        char   _pad0;
        char   cycl;
        char   ok;
        char   multiview_eye;
        short  pass;
        char   _pad1[2];
        int    tile;
        int    _pad2;
        short  multi_index;
        short  view;
        short  layer;
        short  flag;
    };

    struct ImageAnim
    {
        ImageAnim *next;
        ImageAnim *prev;
        Anim *     anim;
    };

    struct ImageView
    {
        ImageView *next;
        ImageView *prev;
        char       name[64];
        char       filepath[1024];
    };

    struct ImagePackedFile
    {
        ImagePackedFile *next;
        ImagePackedFile *prev;
        PackedFile *     packedfile;
        char             filepath[1024];
    };

    struct RenderSlot
    {
        RenderSlot *  next;
        RenderSlot *  prev;
        char          name[64];
        RenderResult *render;
    };

    struct ImageTile
    {
        ImageTile * next;
        ImageTile * prev;
        GPUTexture *gputexture[2];
        char        ok;
        char        _pad[3];
        int         tile_number;
        char        label[64];
    };

    struct MTex
    {
        short   texco;
        short   mapto;
        short   maptoneg;
        short   blendtype;
        Object *object;
        Tex *   tex;
        char    uvname[64];
        char    projx;
        char    projy;
        char    projz;
        char    mapping;
        char    brush_map_mode;
        char    brush_angle_mode;
        char    _pad[2];
        float   ofs[3];
        float   size[3];
        float   rot;
        float   random_angle;
        char    _pad0[2];
        short   colormodel;
        short   pmapto;
        short   pmaptoneg;
        short   normapspace;
        short   which_output;
        float   r;
        float   g;
        float   b;
        float   k;
        float   def_var;
        float   rt;
        float   colfac;
        float   varfac;
        float   norfac;
        float   dispfac;
        float   warpfac;
        float   colspecfac;
        float   mirrfac;
        float   alphafac;
        float   difffac;
        float   specfac;
        float   emitfac;
        float   hardfac;
        float   raymirrfac;
        float   translfac;
        float   ambfac;
        float   colemitfac;
        float   colreflfac;
        float   coltransfac;
        float   densfac;
        float   scatterfac;
        float   reflfac;
        float   timefac;
        float   lengthfac;
        float   clumpfac;
        float   dampfac;
        float   kinkfac;
        float   kinkampfac;
        float   roughfac;
        float   padensfac;
        float   gravityfac;
        float   lifefac;
        float   sizefac;
        float   ivelfac;
        float   fieldfac;
        float   twistfac;
        float   shadowfac;
        float   zenupfac;
        float   zendownfac;
        float   blendfac;
    };

    struct CBData
    {
        float r;
        float g;
        float b;
        float a;
        float pos;
        int   cur;
    };

    struct PointDensity
    {
        short         flag;
        short         falloff_type;
        float         falloff_softness;
        float         radius;
        short         source;
        char          _pad0[2];
        short         color_source;
        short         ob_color_source;
        int           totpoints;
        Object *      object;
        int           psys;
        short         psys_cache_space;
        short         ob_cache_space;
        char          vertex_attribute_name[64];
        void *        point_tree;
        float *       point_data;
        float         noise_size;
        short         noise_depth;
        short         noise_influence;
        short         noise_basis;
        char          _pad1[6];
        float         noise_fac;
        float         speed_scale;
        float         falloff_speed_scale;
        char          _pad2[4];
        ColorBand *   coba;
        CurveMapping *falloff_curve;
    };

    struct TexMapping
    {
        float   loc[3];
        float   rot[3];
        float   size[3];
        int     flag;
        char    projx;
        char    projy;
        char    projz;
        char    mapping;
        int     type;
        float   mat[4][4];
        float   min[3];
        float   max[3];
        Object *ob;
    };

    struct TexPaintSlot
    {
        Image *ima;
        char * uvname;
        int    valid;
        int    interp;
    };

    struct MaterialGPencilStyle
    {
        Image *sima;
        Image *ima;
        float  stroke_rgba[4];
        float  fill_rgba[4];
        float  mix_rgba[4];
        short  flag;
        short  index;
        short  stroke_style;
        short  fill_style;
        float  mix_factor;
        float  gradient_angle;
        float  gradient_radius;
        float  pattern_gridsize;
        float  gradient_scale[2];
        float  gradient_shift[2];
        float  texture_angle;
        float  texture_scale[2];
        float  texture_offset[2];
        float  texture_opacity;
        float  texture_pixsize;
        int    mode;
        int    gradient_type;
        float  mix_stroke_factor;
        int    alignment_mode;
        char   _pad[4];
    };

    struct MetaElem
    {
        MetaElem *next;
        MetaElem *prev;
        BoundBox *bb;
        short     type;
        short     flag;
        char      _pad[4];
        float     x;
        float     y;
        float     z;
        float     quat[4];
        float     expx;
        float     expy;
        float     expz;
        float     rad;
        float     rad2;
        float     s;
        float     len;
        float *   mat;
        float *   imat;
    };

    struct BezTriple
    {
        float vec[3][3];
        float alfa;
        float weight;
        float radius;
        char  ipo;
        char  h1;
        char  h2;
        char  f1;
        char  f2;
        char  f3;
        char  hide;
        char  easing;
        float back;
        float amplitude;
        float period;
        char  f5;
        char  _pad[3];
    };

    struct BPoint
    {
        float vec[4];
        float alfa;
        float weight;
        short f1;
        short hide;
        float radius;
        char  _pad[4];
    };

    struct Nurb
    {
        Nurb *     next;
        Nurb *     prev;
        short      type;
        short      mat_nr;
        short      hide;
        short      flag;
        int        pntsu;
        int        pntsv;
        char       _pad[4];
        short      resolu;
        short      resolv;
        short      orderu;
        short      orderv;
        short      flagu;
        short      flagv;
        float *    knotsu;
        float *    knotsv;
        BPoint *   bp;
        BezTriple *bezt;
        short      tilt_interp;
        short      radius_interp;
        int        charidx;
    };

    struct CharInfo
    {
        short kern;
        short mat_nr;
        char  flag;
        char  _pad[3];
    };

    struct TextBox
    {
        float x;
        float y;
        float w;
        float h;
    };

    struct MLoopTri_Store
    {
        MLoopTri *array;
        MLoopTri *array_wip;
        int       len;
        int       len_alloc;
    };

    struct TFace
    {
        void *tpage;
        float uv[4][2];
        int   col[4];
        char  flag;
        char  transp;
        short mode;
        short tile;
        short unwrap;
    };

    struct MFace
    {
        int   v1;
        int   v2;
        int   v3;
        int   v4;
        short mat_nr;
        char  edcode;
        char  flag;
    };

    struct MEdge
    {
        int   v1;
        int   v2;
        char  crease;
        char  bweight;
        short flag;
    };

    struct MDeformWeight
    {
        int   def_nr;
        float weight;
    };

    struct MDeformVert
    {
        MDeformWeight *dw;
        int            totweight;
        int            flag;
    };

    struct MVert
    {
        float co[3];
        short no[3];
        char  flag;
        char  bweight;
    };

    struct MCol
    {
        char a;
        char r;
        char g;
        char b;
    };

    struct MPoly
    {
        int   loopstart;
        int   totloop;
        short mat_nr;
        char  flag;
        char  _pad;
    };

    struct MLoop
    {
        int v;
        int e;
    };

    struct MLoopTri
    {
        int tri[3];
        int poly;
    };

    struct MLoopUV
    {
        float uv[2];
        int   flag;
    };

    struct MLoopCol
    {
        char r;
        char g;
        char b;
        char a;
    };

    struct MSelect
    {
        int index;
        int type;
    };

    struct MTFace
    {
        float uv[4][2];
    };

    struct MFloatProperty
    {
        float f;
    };

    struct MIntProperty
    {
        int i;
    };

    struct MStringProperty
    {
        char s[255];
        char s_len;
    };

    struct OrigSpaceFace
    {
        float uv[4][2];
    };

    struct OrigSpaceLoop
    {
        float uv[2];
    };

    struct MDisps
    {
        int totdisp;
        int level;
        float (*disps)();
        int *hidden;
    };

    struct MultiresCol
    {
        float a;
        float r;
        float g;
        float b;
    };

    struct MultiresFace
    {
        int  v[4];
        int  mid;
        char flag;
        char mat_nr;
        char _pad[2];
    };

    struct MultiresEdge
    {
        int v[2];
        int mid;
    };

    struct MultiresLevel
    {
        MultiresLevel *  next;
        MultiresLevel *  prev;
        MultiresFace *   faces;
        MultiresColFace *colfaces;
        MultiresEdge *   edges;
        int              totvert;
        int              totface;
        int              totedge;
        char             _pad[4];
        MVert *          verts;
    };

    struct MRecast
    {
        int i;
    };

    struct GridPaintMask
    {
        float *data;
        int    level;
        char   _pad[4];
    };

    struct MVertSkin
    {
        float radius[3];
        int   flag;
    };

    struct FreestyleEdge
    {
        char flag;
        char _pad[3];
    };

    struct FreestyleFace
    {
        char flag;
        char _pad[3];
    };

    struct ModifierData
    {
        ModifierData *next;
        ModifierData *prev;
        int           type;
        int           mode;
        int           stackindex;
        short         flag;
        char          _pad[2];
        char          name[64];
        char *        error;
        ModifierData *orig_modifier_data;
        void *        runtime;
    };

    struct MDefInfluence
    {
        int   vertex;
        float weight;
    };

    struct MDefCell
    {
        int offset;
        int totinfluence;
    };

    struct CorrectiveSmoothDeltaCache
    {
        float (*deltas)();
        int   totverts;
        float lambda;
        short repeat;
        short flag;
        char  smooth_type;
        char  rest_source;
        char  _pad[2];
    };

    struct SDefBind
    {
        int *  vert_inds;
        int    numverts;
        int    mode;
        float *vert_weights;
        float  normal_dist;
        float  influence;
    };

    struct SDefVert
    {
        SDefBind *binds;
        int       numbinds;
        char      _pad[4];
    };

    struct bDeformGroup
    {
        bDeformGroup *next;
        bDeformGroup *prev;
        char          name[64];
        char          flag;
        char          _pad0[7];
    };

    struct bFaceMap
    {
        bFaceMap *next;
        bFaceMap *prev;
        char      name[64];
        char      flag;
        char      _pad0[7];
    };

    struct BoundBox
    {
        float vec[8][3];
        int   flag;
        char  _pad0[4];
    };

    struct LodLevel
    {
        LodLevel *next;
        LodLevel *prev;
        Object *  source;
        int       flags;
        float     distance;
        char      _pad0[4];
        int       obhysteresis;
    };

    struct ObHook
    {
        ObHook *next;
        ObHook *prev;
        Object *parent;
        float   parentinv[4][4];
        float   mat[4][4];
        float   cent[3];
        float   falloff;
        char    name[64];
        int *   indexar;
        int     totindex;
        int     curindex;
        short   type;
        short   active;
        float   force;
    };

    struct PartDeflect
    {
        int     flag;
        short   deflect;
        short   forcefield;
        short   falloff;
        short   shape;
        short   tex_mode;
        short   kink;
        short   kink_axis;
        short   zdir;
        float   f_strength;
        float   f_damp;
        float   f_flow;
        float   f_size;
        float   f_power;
        float   maxdist;
        float   mindist;
        float   f_power_r;
        float   maxrad;
        float   minrad;
        float   pdef_damp;
        float   pdef_rdamp;
        float   pdef_perm;
        float   pdef_frict;
        float   pdef_rfrict;
        float   pdef_stickness;
        float   absorption;
        float   pdef_sbdamp;
        float   pdef_sbift;
        float   pdef_sboft;
        float   clump_fac;
        float   clump_pow;
        float   kink_freq;
        float   kink_shape;
        float   kink_amp;
        float   free_end;
        float   tex_nabla;
        Tex *   tex;
        RNG *   rng;
        float   f_noise;
        int     seed;
        float   drawvec1[4];
        float   drawvec2[4];
        float   drawvec_falloff_min[3];
        char    _pad1[4];
        float   drawvec_falloff_max[3];
        char    _pad2[4];
        Object *f_source;
        float   pdef_cfrict;
        char    _pad[4];
    };

    struct EffectorWeights
    {
        Collection *group;
        float       weight[14];
        float       global_gravity;
        short       flag;
        short       rt[3];
        char        _pad[4];
    };

    struct PTCacheExtra
    {
        PTCacheExtra *next;
        PTCacheExtra *prev;
        int           type;
        int           totdata;
        void *        data;
    };

    struct SBVertex
    {
        float vec[4];
    };

    struct FluidVertexVelocity
    {
        float vel[3];
    };

    struct FluidsimSettings
    {
        FluidsimModifierData *fmd;
        int                   threads;
        char                  _pad1[4];
        short                 type;
        short                 show_advancedoptions;
        short                 resolutionxyz;
        short                 previewresxyz;
        float                 realsize;
        short                 guiDisplayMode;
        short                 renderDisplayMode;
        float                 viscosityValue;
        short                 viscosityMode;
        short                 viscosityExponent;
        float                 grav[3];
        float                 animStart;
        float                 animEnd;
        int                   bakeStart;
        int                   bakeEnd;
        int                   frameOffset;
        char                  _pad2[4];
        float                 gstar;
        int                   maxRefine;
        float                 iniVelx;
        float                 iniVely;
        float                 iniVelz;
        char                  surfdataPath[1024];
        float                 bbStart[3];
        float                 bbSize[3];
        Ipo *                 ipo;
        short                 typeFlags;
        char                  domainNovecgen;
        char                  volumeInitType;
        float                 partSlipValue;
        int                   generateTracers;
        float                 generateParticles;
        float                 surfaceSmoothing;
        int                   surfaceSubdivs;
        int                   flag;
        float                 particleInfSize;
        float                 particleInfAlpha;
        float                 farFieldSize;
        FluidVertexVelocity * meshVelocities;
        int                   totvert;
        float                 cpsTimeStart;
        float                 cpsTimeEnd;
        float                 cpsQuality;
        float                 attractforceStrength;
        float                 attractforceRadius;
        float                 velocityforceStrength;
        float                 velocityforceRadius;
        int                   lastgoodframe;
        float                 animRate;
    };

    struct AviCodecData
    {
        void *lpFormat;
        void *lpParms;
        int   cbFormat;
        int   cbParms;
        int   fccType;
        int   fccHandler;
        int   dwKeyFrameEvery;
        int   dwQuality;
        int   dwBytesPerSecond;
        int   dwFlags;
        int   dwInterleaveEvery;
        char  _pad[4];
        char  avicodecname[128];
    };

    struct FFMpegCodecData
    {
        int         type;
        int         codec;
        int         audio_codec;
        int         video_bitrate;
        int         audio_bitrate;
        int         audio_mixrate;
        int         audio_channels;
        char        _pad0[4];
        float       audio_volume;
        int         gop_size;
        int         max_b_frames;
        int         flags;
        int         constant_rate_factor;
        int         ffmpeg_preset;
        int         rc_min_rate;
        int         rc_max_rate;
        int         rc_buffer_size;
        int         mux_packet_size;
        int         mux_rate;
        char        _pad1[4];
        IDProperty *properties;
    };

    struct AudioData
    {
        int   mixrate;
        float main;
        float speed_of_sound;
        float doppler_factor;
        int   distance_model;
        short flag;
        char  _pad[2];
        float volume;
        char  _pad2[4];
    };

    struct SceneRenderView
    {
        SceneRenderView *next;
        SceneRenderView *prev;
        char             name[64];
        char             suffix[64];
        int              viewflag;
        char             _pad2[4];
    };

    struct Stereo3dFormat
    {
        short flag;
        char  display_mode;
        char  anaglyph_type;
        char  interlace_type;
        char  _pad[3];
    };

    struct RenderProfile
    {
        RenderProfile *next;
        RenderProfile *prev;
        char           name[32];
        short          particle_perc;
        short          subsurf_max;
        short          shadbufsample_max;
        char           _pad1[2];
        float          ao_error;
        char           _pad2[4];
    };

    struct TimeMarker
    {
        TimeMarker *next;
        TimeMarker *prev;
        int         frame;
        char        name[64];
        int         flag;
        Object *    camera;
    };

    struct Paint_Runtime
    {
        int   tool_offset;
        short ob_mode;
        char  _pad[2];
    };

    struct PaintToolSlot
    {
        Brush *brush;
    };

    struct ParticleBrushData
    {
        short size;
        short step;
        short invert;
        short count;
        int   flag;
        float strength;
    };

    struct GP_Sculpt_Data
    {
        short size;
        short flag;
        float strength;
        float curcolor_add[3];
        float curcolor_sub[3];
        float weight;
        char  _pad[4];
    };

    struct GP_Sculpt_Guide
    {
        char    use_guide;
        char    use_snapping;
        char    reference_point;
        char    type;
        char    _pad2[4];
        float   angle;
        float   angle_snap;
        float   spacing;
        float   location[3];
        Object *reference_object;
    };

    struct GP_Interpolate_Settings
    {
        short         flag;
        char          type;
        char          easing;
        float         back;
        float         amplitude;
        float         period;
        CurveMapping *custom_ipo;
    };

    struct UnifiedPaintSettings
    {
        int         size;
        float       unprojected_radius;
        float       alpha;
        float       weight;
        float       rgb[3];
        float       secondary_rgb[3];
        int         flag;
        float       last_rake[2];
        float       last_rake_angle;
        int         last_stroke_valid;
        float       average_stroke_accum[3];
        int         average_stroke_counter;
        float       brush_rotation;
        float       brush_rotation_sec;
        int         anchored_size;
        float       overlap_factor;
        char        draw_inverted;
        char        stroke_active;
        char        draw_anchored;
        char        do_linear_conversion;
        float       last_location[3];
        int         last_hit;
        float       anchored_initial_mouse[2];
        float       pixel_radius;
        float       initial_pixel_radius;
        char        _pad[4];
        float       size_pressure_value;
        float       tex_mouse[2];
        float       mask_tex_mouse[2];
        ColorSpace *colorspace;
    };

    struct CurvePaintSettings
    {
        char  curve_type;
        char  flag;
        char  depth_mode;
        char  surface_plane;
        char  fit_method;
        char  _pad;
        short error_threshold;
        float radius_min;
        float radius_max;
        float radius_taper_start;
        float radius_taper_end;
        float surface_offset;
        float corner_angle;
    };

    struct MeshStatVis
    {
        char  type;
        char  _pad1[2];
        char  overhang_axis;
        float overhang_min;
        float overhang_max;
        float thickness_min;
        float thickness_max;
        char  thickness_samples;
        char  _pad2[3];
        float distort_min;
        float distort_max;
        float sharp_min;
        float sharp_max;
    };

    struct UnitSettings
    {
        float scale_length;
        char  system;
        char  system_rotation;
        short flag;
        char  length_unit;
        char  mass_unit;
        char  time_unit;
        char  _pad[5];
    };

    struct PhysicsSettings
    {
        float gravity[3];
        int   flag;
        int   quick_cache_step;
        int   rt;
    };

    struct DisplaySafeAreas
    {
        float title[2];
        float action[2];
        float title_center[2];
        float action_center[2];
    };

    struct SceneEEVEE
    {
        int         flag;
        int         gi_diffuse_bounces;
        int         gi_cubemap_resolution;
        int         gi_visibility_resolution;
        float       gi_irradiance_smoothing;
        float       gi_glossy_clamp;
        float       gi_filter_quality;
        char        _pad[4];
        float       gi_cubemap_draw_size;
        float       gi_irradiance_draw_size;
        int         taa_samples;
        int         taa_render_samples;
        int         sss_samples;
        float       sss_jitter_threshold;
        float       ssr_quality;
        float       ssr_max_roughness;
        float       ssr_thickness;
        float       ssr_border_fade;
        float       ssr_firefly_fac;
        float       volumetric_start;
        float       volumetric_end;
        int         volumetric_tile_size;
        int         volumetric_samples;
        float       volumetric_sample_distribution;
        float       volumetric_light_clamp;
        int         volumetric_shadow_samples;
        float       gtao_distance;
        float       gtao_factor;
        float       gtao_quality;
        float       bokeh_max_size;
        float       bokeh_threshold;
        float       bloom_color[3];
        float       bloom_threshold;
        float       bloom_knee;
        float       bloom_intensity;
        float       bloom_radius;
        float       bloom_clamp;
        int         motion_blur_samples;
        float       motion_blur_shutter;
        int         shadow_method;
        int         shadow_cube_size;
        int         shadow_cascade_size;
        LightCache *light_cache;
        char        light_cache_info[64];
        float       overscan;
        float       light_threshold;
    };

    struct TransformOrientationSlot
    {
        int  type;
        int  index_custom;
        char flag;
        char _pad0[7];
    };

    struct RegionView3D
    {
        float              winmat[4][4];
        float              viewmat[4][4];
        float              viewinv[4][4];
        float              persmat[4][4];
        float              persinv[4][4];
        float              viewcamtexcofac[4];
        float              viewmatob[4][4];
        float              persmatob[4][4];
        float              clip[6][4];
        float              clip_local[6][4];
        BoundBox *         clipbb;
        RegionView3D *     localvd;
        RenderEngine *     render_engine;
        ViewDepths *       depths;
        SmoothView3DStore *sms;
        wmTimer *          smooth_timer;
        float              twmat[4][4];
        float              tw_axis_min[3];
        float              tw_axis_max[3];
        float              tw_axis_matrix[3][3];
        float              gridview;
        float              viewquat[4];
        float              dist;
        float              camdx;
        float              camdy;
        float              pixsize;
        float              ofs[3];
        float              camzoom;
        char               is_persp;
        char               persp;
        char               view;
        char               viewlock;
        char               viewlock_quad;
        char               _pad[3];
        float              ofs_lock[2];
        short              twdrawflag;
        short              rflag;
        float              lviewquat[4];
        short              lpersp;
        short              lview;
        float              rot_angle;
        float              rot_axis[3];
    };

    struct View3DCursor
    {
        float location[3];
        float rotation_quaternion[4];
        float rotation_euler[3];
        float rotation_axis[3];
        float rotation_angle;
        short rotation_mode;
        char  _pad[6];
    };

    struct View3DShading
    {
        char        type;
        char        prev_type;
        char        prev_type_wire;
        char        color_type;
        short       flag;
        char        light;
        char        background_type;
        char        cavity_type;
        char        wire_color_type;
        char        _pad[2];
        char        studio_light[256];
        char        lookdev_light[256];
        char        matcap[256];
        float       shadow_intensity;
        float       single_color[3];
        float       studiolight_rot_z;
        float       studiolight_background;
        float       studiolight_intensity;
        float       object_outline_color[3];
        float       xray_alpha;
        float       xray_alpha_wire;
        float       cavity_valley_factor;
        float       cavity_ridge_factor;
        float       background_color[3];
        float       curvature_ridge_factor;
        float       curvature_valley_factor;
        int         render_pass;
        char        _pad2[4];
        IDProperty *prop;
    };

    struct View3DOverlay
    {
        int   flag;
        int   edit_flag;
        float normals_length;
        float backwire_opacity;
        int   paint_flag;
        int   wpaint_flag;
        float texture_paint_mode_opacity;
        float vertex_paint_mode_opacity;
        float weight_paint_mode_opacity;
        float sculpt_mode_mask_opacity;
        int   _pad3;
        float xray_alpha_bone;
        float wireframe_threshold;
        float gpencil_paper_opacity;
        float gpencil_grid_opacity;
        float gpencil_fade_layer;
    };

    struct View3D_Runtime
    {
        void *properties_storage;
    };

    struct MaskSpaceInfo
    {
        Mask *mask;
        char  draw_flag;
        char  draw_type;
        char  overlay_mode;
        char  _pad3[5];
    };

    struct FileSelectParams
    {
        char  title[96];
        char  dir[1090];
        char  file[256];
        char  renamefile[256];
        short rename_flag;
        char  filter_glob[256];
        char  filter_search[64];
        int   filter_id;
        int   active_file;
        int   highlight_file;
        int   sel_first;
        int   sel_last;
        short thumbnail_size;
        char  _pad1[2];
        short type;
        short flag;
        short sort;
        short display;
        char  details_flags;
        char  _pad2[3];
        int   filter;
        short recursion_level;
        short f_fp;
        char  fp_str[8];
    };

    struct ConsoleLine
    {
        ConsoleLine *next;
        ConsoleLine *prev;
        int          len_alloc;
        int          len;
        char *       line;
        int          cursor;
        int          type;
    };

    struct uiFont
    {
        uiFont *next;
        uiFont *prev;
        char    filename[1024];
        short   blf_id;
        short   uifont_id;
        short   r_to_l;
        char    _pad0[2];
    };

    struct uiFontStyle
    {
        short uifont_id;
        short points;
        short kerning;
        short italic;
        short bold;
        short shadow;
        short shadx;
        short shady;
        float shadowalpha;
        float shadowcolor;
    };

    struct uiWidgetColors
    {
        char  outline[4];
        char  inner[4];
        char  inner_sel[4];
        char  item[4];
        char  text[4];
        char  text_sel[4];
        char  shaded;
        char  _pad0[7];
        short shadetop;
        short shadedown;
        float roundness;
    };

    struct uiWidgetStateColors
    {
        char  inner_anim[4];
        char  inner_anim_sel[4];
        char  inner_key[4];
        char  inner_key_sel[4];
        char  inner_driven[4];
        char  inner_driven_sel[4];
        char  inner_overridden[4];
        char  inner_overridden_sel[4];
        char  inner_changed[4];
        char  inner_changed_sel[4];
        float blend;
        char  _pad0[4];
    };

    struct uiPanelColors
    {
        char header[4];
        char back[4];
        char sub_back[4];
        char _pad0[4];
    };

    struct ThemeWireColor
    {
        char  solid[4];
        char  select[4];
        char  active[4];
        short flag;
        char  _pad0[2];
    };

    struct bAddon
    {
        bAddon *    next;
        bAddon *    prev;
        char        module[64];
        IDProperty *prop;
    };

    struct bPathCompare
    {
        bPathCompare *next;
        bPathCompare *prev;
        char          path[768];
        char          flag;
        char          _pad0[7];
    };

    struct bUserMenuItem
    {
        bUserMenuItem *next;
        bUserMenuItem *prev;
        char           ui_name[64];
        char           type;
        char           _pad0[7];
    };

    struct SolidLight
    {
        int   flag;
        float smooth;
        char  _pad0[8];
        float col[4];
        float spec[4];
        float vec[4];
    };

    struct WalkNavigation
    {
        float mouse_speed;
        float walk_speed;
        float walk_speed_factor;
        float view_height;
        float jump_height;
        float teleport_time;
        short flag;
        char  _pad0[6];
    };

    struct UserDef_Runtime
    {
        char is_dirty;
        char _pad0[7];
    };

    struct UserDef_SpaceData
    {
        char section_active;
        char flag;
        char _pad0[6];
    };

    struct UserDef_FileSpaceData
    {
        int display_type;
        int thumbnail_size;
        int sort_type;
        int details_flags;
        int flag;
        int filter_id;
        int temp_win_sizex;
        int temp_win_sizey;
    };

    struct UserDef_Experimental
    {
        char use_tool_fallback;
        char use_usd_exporter;
        char _pad0[6];
    };

    struct ScrEdge
    {
        ScrEdge *next;
        ScrEdge *prev;
        ScrVert *v1;
        ScrVert *v2;
        short    border;
        short    flag;
        char     _pad[4];
    };

    struct PanelCategoryStack
    {
        PanelCategoryStack *next;
        PanelCategoryStack *prev;
        char                idname[64];
    };

    struct uiList
    {
        uiList *    next;
        uiList *    prev;
        uiListType *type;
        char        list_id[64];
        int         layout_type;
        int         flag;
        int         list_scroll;
        int         list_grip;
        int         list_last_len;
        int         list_last_activei;
        char        filter_byname[64];
        int         filter_flag;
        int         filter_sort_flag;
        IDProperty *properties;
        uiListDyn * dyn_data;
    };

    struct TransformOrientation
    {
        TransformOrientation *next;
        TransformOrientation *prev;
        char                  name[64];
        float                 mat[3][3];
        char                  _pad[4];
    };

    struct uiPreview
    {
        uiPreview *next;
        uiPreview *prev;
        char       preview_id[64];
        short      height;
        char       _pad1[6];
    };

    struct ScrArea_Runtime
    {
        bToolRef *tool;
        char      is_tool_set;
        char      _pad0[7];
    };

    struct FileGlobal
    {
        char       subvstr[4];
        short      subversion;
        short      minversion;
        short      minsubversion;
        char       _pad[6];
        bScreen *  curscreen;
        Scene *    curscene;
        ViewLayer *cur_view_layer;
        void *     _pad1;
        int        fileflags;
        int        globalf;
        uint64_t   build_commit_timestamp;
        char       build_hash[16];
        char       filename[1024];
    };

    struct StripAnim
    {
        StripAnim *next;
        StripAnim *prev;
        Anim *     anim;
    };

    struct StripElem
    {
        char name[256];
        int  orig_width;
        int  orig_height;
    };

    struct StripCrop
    {
        int top;
        int bottom;
        int left;
        int right;
    };

    struct StripTransform
    {
        int xofs;
        int yofs;
    };

    struct StripColorBalance
    {
        float lift[3];
        float gamma[3];
        float gain[3];
        int   flag;
        char  _pad[4];
    };

    struct StripProxy
    {
        char  dir[768];
        char  file[256];
        Anim *anim;
        short tc;
        short quality;
        short build_size_flags;
        short build_tc_flags;
        short build_flags;
        char  storage;
        char  _pad[5];
    };

    struct MetaStack
    {
        MetaStack *next;
        MetaStack *prev;
        ListBase * oldbasep;
        Sequence * parseq;
        int        disp_range[2];
    };

    struct WipeVars
    {
        float edgeWidth;
        float angle;
        short forward;
        short wipetype;
    };

    struct GlowVars
    {
        float fMini;
        float fClamp;
        float fBoost;
        float dDist;
        int   dQuality;
        int   bNoComp;
    };

    struct TransformVars
    {
        float ScalexIni;
        float ScaleyIni;
        float xIni;
        float yIni;
        float rotIni;
        int   percent;
        int   interpolation;
        int   uniform_scale;
    };

    struct SolidColorVars
    {
        float col[3];
        char  _pad[4];
    };

    struct SpeedControlVars
    {
        float *frameMap;
        float  globalSpeed;
        int    flags;
        int    length;
        int    lastValidFrame;
    };

    struct GaussianBlurVars
    {
        float size_x;
        float size_y;
    };

    struct TextVars
    {
        char   text[512];
        VFont *text_font;
        int    text_blf_id;
        int    text_size;
        float  color[4];
        float  shadow_color[4];
        float  loc[2];
        float  wrap_width;
        char   flag;
        char   align;
        char   align_y;
        char   _pad[1];
    };

    struct ColorMixVars
    {
        int   blend_effect;
        float factor;
    };

    struct SequenceModifierData
    {
        SequenceModifierData *next;
        SequenceModifierData *prev;
        int                   type;
        int                   flag;
        char                  name[64];
        int                   mask_input_type;
        int                   mask_time;
        Sequence *            mask_sequence;
        Mask *                mask_id;
    };

    struct SequencerScopes
    {
        ImBuf *reference_ibuf;
        ImBuf *zebra_ibuf;
        ImBuf *waveform_ibuf;
        ImBuf *sep_waveform_ibuf;
        ImBuf *vector_ibuf;
        ImBuf *histogram_ibuf;
    };

    struct Effect
    {
        Effect *next;
        Effect *prev;
        short   type;
        short   flag;
        short   buttype;
        short   rt;
    };

    struct BuildEff
    {
        BuildEff *next;
        BuildEff *prev;
        short     type;
        short     flag;
        short     buttype;
        short     rt;
        float     len;
        float     sfra;
    };

    struct PartEff
    {
        PartEff *   next;
        PartEff *   prev;
        short       type;
        short       flag;
        short       buttype;
        short       stype;
        short       vertgroup;
        short       userjit;
        float       sta;
        float       end;
        float       lifetime;
        int         totpart;
        int         totkey;
        int         seed;
        float       normfac;
        float       obfac;
        float       randfac;
        float       texfac;
        float       randlife;
        float       force[3];
        float       damp;
        float       nabla;
        float       vectsize;
        float       maxlen;
        float       defvec[3];
        char        _pad[4];
        float       mult[4];
        float       life[4];
        short       child[4];
        short       mat[4];
        short       texmap;
        short       curmult;
        short       staticstep;
        short       omat;
        short       timetex;
        short       speedtex;
        short       flag2;
        short       flag2neg;
        short       disp;
        short       vertgroup_v;
        char        vgroupname[64];
        char        vgroupname_v[64];
        float       imat[4][4];
        Particle *  keys;
        Collection *group;
    };

    struct WaveEff
    {
        WaveEff *next;
        WaveEff *prev;
        short    type;
        short    flag;
        short    buttype;
        short    stype;
        float    startx;
        float    starty;
        float    height;
        float    width;
        float    narrow;
        float    speed;
        float    minfac;
        float    damp;
        float    timeoffs;
        float    lifetime;
    };

    struct TreeStoreElem
    {
        short type;
        short nr;
        short flag;
        short used;
        ID *  id;
    };

    struct TreeStore
    {
        int            totelem;
        int            usedelem;
        TreeStoreElem *data;
    };

    struct CollectionObject
    {
        CollectionObject *next;
        CollectionObject *prev;
        Object *          ob;
    };

    struct CollectionChild
    {
        CollectionChild *next;
        CollectionChild *prev;
        Collection *     collection;
    };

    struct bMotionPathVert
    {
        float co[3];
        int   flag;
    };

    struct bMotionPath
    {
        bMotionPathVert *points;
        int              length;
        int              start_frame;
        int              end_frame;
        float            color[3];
        int              line_thickness;
        int              flag;
        GPUVertBuf *     points_vbo;
        GPUBatch *       batch_line;
        GPUBatch *       batch_points;
        void *           _pad;
    };

    struct bAnimVizSettings
    {
        short recalc;
        short path_type;
        short path_step;
        short path_viewflag;
        short path_bakeflag;
        char  _pad[6];
        int   path_sf;
        int   path_ef;
        int   path_bc;
        int   path_ac;
    };

    struct bIKParam
    {
        int iksolver;
    };

    struct bItasc
    {
        int   iksolver;
        float precision;
        short numiter;
        short numstep;
        float minstep;
        float maxstep;
        short solver;
        short flag;
        float feedback;
        float maxvel;
        float dampmax;
        float dampeps;
    };

    struct SpaceAction_Runtime
    {
        char flag;
        char _pad0[7];
    };

    struct bConstraintChannel
    {
        bConstraintChannel *next;
        bConstraintChannel *prev;
        Ipo *               ipo;
        short               flag;
        char                name[30];
    };

    struct bConstraint
    {
        bConstraint *next;
        bConstraint *prev;
        void *       data;
        short        type;
        short        flag;
        char         ownspace;
        char         tarspace;
        char         name[64];
        char         _pad[2];
        float        enforce;
        float        headtail;
        Ipo *        ipo;
        float        lin_error;
        float        rot_error;
    };

    struct bConstraintTarget
    {
        bConstraintTarget *next;
        bConstraintTarget *prev;
        Object *           tar;
        char               subtarget[64];
        float              matrix[4][4];
        short              space;
        short              flag;
        short              type;
        short              rotOrder;
        float              weight;
        char               _pad[4];
    };

    struct bKinematicConstraint
    {
        Object *tar;
        short   iterations;
        short   flag;
        short   rootbone;
        short   max_rootbone;
        char    subtarget[64];
        Object *poletar;
        char    polesubtarget[64];
        float   poleangle;
        float   weight;
        float   orientweight;
        float   grabtarget[3];
        short   type;
        short   mode;
        float   dist;
    };

    struct bSplineIKConstraint
    {
        Object *tar;
        float * points;
        short   numpoints;
        short   chainlen;
        short   flag;
        short   xzScaleMode;
        short   yScaleMode;
        short   _pad[3];
        float   bulge;
        float   bulge_min;
        float   bulge_max;
        float   bulge_smooth;
    };

    struct bTrackToConstraint
    {
        Object *tar;
        int     reserved1;
        int     reserved2;
        int     flags;
        char    _pad[4];
        char    subtarget[64];
    };

    struct bRotateLikeConstraint
    {
        Object *tar;
        int     flag;
        char    euler_order;
        char    mix_mode;
        char    _pad[2];
        char    subtarget[64];
    };

    struct bLocateLikeConstraint
    {
        Object *tar;
        int     flag;
        int     reserved1;
        char    subtarget[64];
    };

    struct bSizeLikeConstraint
    {
        Object *tar;
        int     flag;
        float   power;
        char    subtarget[64];
    };

    struct bSameVolumeConstraint
    {
        char  flag;
        char  mode;
        char  _pad[2];
        float volume;
    };

    struct bTransLikeConstraint
    {
        Object *tar;
        char    mix_mode;
        char    _pad[7];
        char    subtarget[64];
    };

    struct bMinMaxConstraint
    {
        Object *tar;
        int     minmaxflag;
        float   offset;
        int     flag;
        char    subtarget[64];
        int     _pad;
    };

    struct bActionConstraint
    {
        Object * tar;
        short    type;
        short    local;
        int      start;
        int      end;
        float    min;
        float    max;
        int      flag;
        char     mix_mode;
        char     _pad[7];
        bAction *act;
        char     subtarget[64];
    };

    struct bLockTrackConstraint
    {
        Object *tar;
        int     trackflag;
        int     lockflag;
        char    subtarget[64];
    };

    struct bDampTrackConstraint
    {
        Object *tar;
        int     trackflag;
        char    _pad[4];
        char    subtarget[64];
    };

    struct bFollowPathConstraint
    {
        Object *tar;
        float   offset;
        float   offset_fac;
        int     followflag;
        short   trackflag;
        short   upflag;
    };

    struct bStretchToConstraint
    {
        Object *tar;
        int     flag;
        int     volmode;
        int     plane;
        float   orglength;
        float   bulge;
        float   bulge_min;
        float   bulge_max;
        float   bulge_smooth;
        char    subtarget[64];
    };

    struct bRigidBodyJointConstraint
    {
        Object *tar;
        Object *child;
        int     type;
        float   pivX;
        float   pivY;
        float   pivZ;
        float   axX;
        float   axY;
        float   axZ;
        float   minLimit[6];
        float   maxLimit[6];
        float   extraFz;
        short   flag;
        char    _pad[6];
    };

    struct bClampToConstraint
    {
        Object *tar;
        int     flag;
        int     flag2;
    };

    struct bChildOfConstraint
    {
        Object *tar;
        int     flag;
        char    _pad[4];
        float   invmat[4][4];
        char    subtarget[64];
    };

    struct bTransformConstraint
    {
        Object *tar;
        char    subtarget[64];
        short   from;
        short   to;
        char    map[3];
        char    expo;
        char    from_rotation_mode;
        char    to_euler_order;
        char    mix_mode_loc;
        char    mix_mode_rot;
        char    mix_mode_scale;
        char    _pad[3];
        float   from_min[3];
        float   from_max[3];
        float   to_min[3];
        float   to_max[3];
        float   from_min_rot[3];
        float   from_max_rot[3];
        float   to_min_rot[3];
        float   to_max_rot[3];
        float   from_min_scale[3];
        float   from_max_scale[3];
        float   to_min_scale[3];
        float   to_max_scale[3];
    };

    struct bPivotConstraint
    {
        Object *tar;
        char    subtarget[64];
        float   offset[3];
        short   rotAxis;
        short   flag;
    };

    struct bLocLimitConstraint
    {
        float xmin;
        float xmax;
        float ymin;
        float ymax;
        float zmin;
        float zmax;
        short flag;
        short flag2;
    };

    struct bRotLimitConstraint
    {
        float xmin;
        float xmax;
        float ymin;
        float ymax;
        float zmin;
        float zmax;
        short flag;
        short flag2;
    };

    struct bSizeLimitConstraint
    {
        float xmin;
        float xmax;
        float ymin;
        float ymax;
        float zmin;
        float zmax;
        short flag;
        short flag2;
    };

    struct bDistLimitConstraint
    {
        Object *tar;
        char    subtarget[64];
        float   dist;
        float   soft;
        short   flag;
        short   mode;
        char    _pad[4];
    };

    struct bShrinkwrapConstraint
    {
        Object *target;
        float   dist;
        short   shrinkType;
        char    projAxis;
        char    projAxisSpace;
        float   projLimit;
        char    shrinkMode;
        char    flag;
        char    trackAxis;
        char    _pad;
    };

    struct bFollowTrackConstraint
    {
        MovieClip *clip;
        char       track[64];
        int        flag;
        int        frame_method;
        char       object[64];
        Object *   camera;
        Object *   depth_ob;
    };

    struct bCameraSolverConstraint
    {
        MovieClip *clip;
        int        flag;
        char       _pad[4];
    };

    struct bObjectSolverConstraint
    {
        MovieClip *clip;
        int        flag;
        char       _pad[4];
        char       object[64];
        float      invmat[4][4];
        Object *   camera;
    };

    struct bTransformCacheConstraint
    {
        CacheFile *  cache_file;
        char         object_path[1024];
        CacheReader *reader;
        char         reader_object_path[1024];
    };

    struct bActionModifier
    {
        bActionModifier *next;
        bActionModifier *prev;
        short            type;
        short            flag;
        char             channel[32];
        float            noisesize;
        float            turbul;
        short            channels;
        short            no_rot_axis;
        Object *         ob;
    };

    struct bNodeStack
    {
        float vec[4];
        float min;
        float max;
        void *data;
        short hasinput;
        short hasoutput;
        short datatype;
        short sockettype;
        short is_copy;
        short external;
        char  _pad[4];
    };

    struct bNodeInstanceKey
    {
        int value;
    };

    struct bNodeLink
    {
        bNodeLink *  next;
        bNodeLink *  prev;
        bNode *      fromnode;
        bNode *      tonode;
        bNodeSocket *fromsock;
        bNodeSocket *tosock;
        int          flag;
        char         _pad[4];
    };

    struct bNodeSocketValueInt
    {
        int subtype;
        int value;
        int min;
        int max;
    };

    struct bNodeSocketValueFloat
    {
        int   subtype;
        float value;
        float min;
        float max;
    };

    struct bNodeSocketValueBoolean
    {
        char value;
        char _pad[3];
    };

    struct bNodeSocketValueVector
    {
        int   subtype;
        float value[3];
        float min;
        float max;
    };

    struct bNodeSocketValueRGBA
    {
        float value[4];
    };

    struct bNodeSocketValueString
    {
        int  subtype;
        char _pad[4];
        char value[1024];
    };

    struct NodeFrame
    {
        short flag;
        short label_size;
    };

    struct NodeImageAnim
    {
        int  frames;
        int  sfra;
        int  nr;
        char cyclic;
        char movie;
        char _pad[2];
    };

    struct ColorCorrectionData
    {
        float saturation;
        float contrast;
        float gamma;
        float gain;
        float lift;
        char  _pad[4];
    };

    struct NodeBokehImage
    {
        float angle;
        int   flaps;
        float rounding;
        float catadioptric;
        float lensshift;
    };

    struct NodeBoxMask
    {
        float x;
        float y;
        float rotation;
        float height;
        float width;
        char  _pad[4];
    };

    struct NodeEllipseMask
    {
        float x;
        float y;
        float rotation;
        float height;
        float width;
        char  _pad[4];
    };

    struct NodeImageLayer
    {
        int  pass_index;
        char pass_name[64];
    };

    struct NodeBlurData
    {
        short sizex;
        short sizey;
        short samples;
        short maxspeed;
        short minspeed;
        short relative;
        short aspect;
        short curved;
        float fac;
        float percentx;
        float percenty;
        short filtertype;
        char  bokeh;
        char  gamma;
        int   image_in_width;
        int   image_in_height;
    };

    struct NodeDBlurData
    {
        float center_x;
        float center_y;
        float distance;
        float angle;
        float spin;
        float zoom;
        short iter;
        char  wrap;
        char  _pad;
    };

    struct NodeBilateralBlurData
    {
        float sigma_color;
        float sigma_space;
        short iter;
        char  _pad[2];
    };

    struct NodeHueSat
    {
        float hue;
        float sat;
        float val;
    };

    struct NodeChroma
    {
        float t1;
        float t2;
        float t3;
        float fsize;
        float fstrength;
        float falpha;
        float key[4];
        short algorithm;
        short channel;
    };

    struct NodeTwoXYs
    {
        short x1;
        short x2;
        short y1;
        short y2;
        float fac_x1;
        float fac_x2;
        float fac_y1;
        float fac_y2;
    };

    struct NodeTwoFloats
    {
        float x;
        float y;
    };

    struct NodeVertexCol
    {
        char name[64];
    };

    struct NodeDefocus
    {
        char  bktype;
        char  _pad0;
        char  preview;
        char  gamco;
        short samples;
        short no_zbuf;
        float fstop;
        float maxblur;
        float bthresh;
        float scale;
        float rotation;
        char  _pad1[4];
    };

    struct NodeScriptDict
    {
        void *dict;
        void *node;
    };

    struct NodeGlare
    {
        char  quality;
        char  type;
        char  iter;
        char  angle;
        char  _pad0;
        char  size;
        char  star_45;
        char  streaks;
        float colmod;
        float mix;
        float threshold;
        float fade;
        float angle_ofs;
        char  _pad1[4];
    };

    struct NodeTonemap
    {
        float key;
        float offset;
        float gamma;
        float f;
        float m;
        float a;
        float c;
        int   type;
    };

    struct NodeLensDist
    {
        short jit;
        short proj;
        short fit;
        char  _pad[2];
    };

    struct NodeColorBalance
    {
        float slope[3];
        float offset[3];
        float power[3];
        float offset_basis;
        char  _pad[4];
        float lift[3];
        float gamma[3];
        float gain[3];
    };

    struct NodeColorspill
    {
        short limchan;
        short unspill;
        float limscale;
        float uspillr;
        float uspillg;
        float uspillb;
    };

    struct NodeDilateErode
    {
        char falloff;
        char _pad[7];
    };

    struct NodeMask
    {
        int size_x;
        int size_y;
    };

    struct NodeShaderAttribute
    {
        char name[64];
    };

    struct NodeShaderVectTransform
    {
        int  type;
        int  convert_from;
        int  convert_to;
        char _pad[4];
    };

    struct TexNodeOutput
    {
        char name[64];
    };

    struct NodeKeyingScreenData
    {
        char tracking_object[64];
    };

    struct NodeKeyingData
    {
        float screen_balance;
        float despill_factor;
        float despill_balance;
        int   edge_kernel_radius;
        float edge_kernel_tolerance;
        float clip_black;
        float clip_white;
        int   dilate_distance;
        int   feather_distance;
        int   feather_falloff;
        int   blur_pre;
        int   blur_post;
    };

    struct NodeTrackPosData
    {
        char tracking_object[64];
        char track_name[64];
    };

    struct NodeTranslateData
    {
        char wrap_axis;
        char relative;
        char _pad[6];
    };

    struct NodePlaneTrackDeformData
    {
        char  tracking_object[64];
        char  plane_track_name[64];
        char  flag;
        char  motion_blur_samples;
        char  _pad[2];
        float motion_blur_shutter;
    };

    struct NodeShaderScript
    {
        int   mode;
        int   flag;
        char  filepath[1024];
        char  bytecode_hash[64];
        char *bytecode;
    };

    struct NodeShaderTangent
    {
        int  direction_type;
        int  axis;
        char uv_map[64];
    };

    struct NodeShaderNormalMap
    {
        int  space;
        char uv_map[64];
    };

    struct NodeShaderUVMap
    {
        char uv_map[64];
    };

    struct NodeShaderVertexColor
    {
        char layer_name[64];
    };

    struct NodeShaderTexIES
    {
        int  mode;
        char filepath[1024];
    };

    struct NodeShaderOutputAOV
    {
        char name[64];
    };

    struct NodeSunBeams
    {
        float source[2];
        float ray_length;
    };

    struct NodeCryptomatte
    {
        float add[3];
        float remove[3];
        char *matte_id;
        int   num_inputs;
        char  _pad[4];
    };

    struct NodeDenoise
    {
        char hdr;
        char _pad[7];
    };

    struct CurveMapPoint
    {
        float x;
        float y;
        short flag;
        short shorty;
    };

    struct CurveMap
    {
        short          totpoint;
        short          flag;
        float          range;
        float          mintable;
        float          maxtable;
        float          ext_in[2];
        float          ext_out[2];
        CurveMapPoint *curve;
        CurveMapPoint *table;
        CurveMapPoint *premultable;
        float          premul_ext_in[2];
        float          premul_ext_out[2];
    };

    struct Histogram
    {
        int   channels;
        int   x_resolution;
        float data_luma[256];
        float data_r[256];
        float data_g[256];
        float data_b[256];
        float data_a[256];
        float xmax;
        float ymax;
        short mode;
        short flag;
        int   height;
        float co[2][2];
    };

    struct ColorManagedViewSettings
    {
        int           flag;
        char          _pad[4];
        char          look[64];
        char          view_transform[64];
        float         exposure;
        float         gamma;
        CurveMapping *curve_mapping;
        void *        _pad2;
    };

    struct ColorManagedDisplaySettings
    {
        char display_device[64];
    };

    struct ColorManagedColorspaceSettings
    {
        char name[64];
    };

    struct BrushClone
    {
        Image *image;
        float  offset[2];
        float  alpha;
        char   _pad[4];
    };

    struct BrushGpencilSettings
    {
        float         draw_smoothfac;
        float         draw_sensitivity;
        float         draw_strength;
        float         draw_jitter;
        float         draw_angle;
        float         draw_angle_factor;
        float         draw_random_press;
        float         draw_random_strength;
        float         draw_random_sub;
        short         draw_smoothlvl;
        short         draw_subdivide;
        short         _pad;
        short         thick_smoothlvl;
        float         thick_smoothfac;
        float         fill_threshold;
        short         fill_leak;
        short         fill_factor;
        char          _pad_1[4];
        int           fill_simplylvl;
        int           fill_draw_mode;
        int           icon_id;
        int           input_samples;
        float         uv_random;
        int           brush_type;
        int           eraser_mode;
        float         active_smooth;
        float         era_strength_f;
        float         era_thickness_f;
        int           flag;
        float         gradient_f;
        float         gradient_s[2];
        float         simplify_f;
        CurveMapping *curve_sensitivity;
        CurveMapping *curve_strength;
        CurveMapping *curve_jitter;
        Material *    material;
    };

    struct PaletteColor
    {
        PaletteColor *next;
        PaletteColor *prev;
        float         rgb[3];
        float         value;
    };

    struct CustomDataLayer
    {
        int   type;
        int   offset;
        int   flag;
        int   active;
        int   active_rnd;
        int   active_clone;
        int   active_mask;
        int   uid;
        char  name[64];
        void *data;
    };

    struct CustomDataExternal
    {
        char filename[1024];
    };

    struct CustomData
    {
        CustomDataLayer *   layers;
        int                 typemap[42];
        char                _pad0[4];
        int                 totlayer;
        int                 maxlayer;
        int                 totsize;
        BLI_mempool *       pool;
        CustomDataExternal *external;
    };

    struct CustomData_MeshMasks
    {
        uint64_t vmask;
        uint64_t emask;
        uint64_t fmask;
        uint64_t pmask;
        uint64_t lmask;
    };

    struct HairKey
    {
        float co[3];
        float time;
        float weight;
        short editflag;
        char  _pad[2];
        float world_co[3];
    };

    struct ParticleKey
    {
        float co[3];
        float vel[3];
        float rot[4];
        float ave[3];
        float time;
    };

    struct ParticleSpring
    {
        float rest_length;
        int   particle_index[2];
        int   delete_flag;
    };

    struct ChildParticle
    {
        int   num;
        int   parent;
        int   pa[4];
        float w[4];
        float fuv[4];
        float foffset;
        float rt;
    };

    struct ParticleTarget
    {
        ParticleTarget *next;
        ParticleTarget *prev;
        Object *        ob;
        int             psys;
        short           flag;
        short           mode;
        float           time;
        float           duration;
    };

    struct ParticleDupliWeight
    {
        ParticleDupliWeight *next;
        ParticleDupliWeight *prev;
        Object *             ob;
        short                count;
        short                flag;
        short                index;
        short                rt;
    };

    struct SPHFluidSettings
    {
        float radius;
        float spring_k;
        float rest_length;
        float plasticity_constant;
        float yield_ratio;
        float plasticity_balance;
        float yield_balance;
        float viscosity_omega;
        float viscosity_beta;
        float stiffness_k;
        float stiffness_knear;
        float rest_density;
        float buoyancy;
        int   flag;
        int   spring_frames;
        short solver;
        char  _pad[6];
    };

    struct ClothSimSettings
    {
        LinkNode *       cache;
        float            mingoal;
        float            Cdis;
        float            Cvi;
        float            gravity[3];
        float            dt;
        float            mass;
        float            structural;
        float            shear;
        float            bending;
        float            max_bend;
        float            max_struct;
        float            max_shear;
        float            max_sewing;
        float            avg_spring_len;
        float            timescale;
        float            time_scale;
        float            maxgoal;
        float            eff_force_scale;
        float            eff_wind_scale;
        float            sim_time_old;
        float            defgoal;
        float            goalspring;
        float            goalfrict;
        float            velocity_smooth;
        float            density_target;
        float            density_strength;
        float            collider_friction;
        float            vel_damping;
        float            shrink_min;
        float            shrink_max;
        float            uniform_pressure_force;
        float            target_volume;
        float            pressure_factor;
        short            vgroup_pressure;
        char             _pad7[2];
        float            bending_damping;
        float            voxel_cell_size;
        int              stepsPerFrame;
        int              flags;
        int              preroll;
        int              maxspringlen;
        short            solver_type;
        short            vgroup_bend;
        short            vgroup_mass;
        short            vgroup_struct;
        short            vgroup_shrink;
        short            shapekey_rest;
        short            presets;
        short            reset;
        EffectorWeights *effector_weights;
        short            bending_model;
        short            vgroup_shear;
        float            tension;
        float            compression;
        float            max_tension;
        float            max_compression;
        float            tension_damp;
        float            compression_damp;
        float            shear_damp;
        float            internal_spring_max_length;
        float            internal_spring_max_diversion;
        short            vgroup_intern;
        char             _pad1[2];
        float            internal_tension;
        float            internal_compression;
        float            max_internal_tension;
        float            max_internal_compression;
        char             _pad0[4];
    };

    struct ClothCollSettings
    {
        LinkNode *  collision_list;
        float       epsilon;
        float       self_friction;
        float       friction;
        float       damping;
        float       selfepsilon;
        float       repel_force;
        float       distance_repel;
        int         flags;
        short       self_loop_count;
        short       loop_count;
        char        _pad[4];
        Collection *group;
        short       vgroup_selfcol;
        char        _pad2[6];
        float       clamp;
        float       self_clamp;
    };

    struct bGPDcontrolpoint
    {
        float x;
        float y;
        float z;
        float color[4];
        int   size;
    };

    struct bGPDspoint_Runtime
    {
        bGPDspoint *pt_orig;
        int         idx_orig;
        char        _pad0[4];
    };

    struct bGPDtriangle
    {
        int   verts[3];
        float uv[3][2];
    };

    struct bGPDpalettecolor
    {
        bGPDpalettecolor *next;
        bGPDpalettecolor *prev;
        char              info[64];
        float             color[4];
        float             fill[4];
        short             flag;
        char              _pad[6];
    };

    struct bGPDstroke_Runtime
    {
        float       tmp_stroke_rgba[4];
        float       tmp_fill_rgba[4];
        char        tmp_layerinfo[128];
        float       multi_frame_falloff;
        char        _pad[4];
        bGPDstroke *gps_orig;
    };

    struct bGPDframe_Runtime
    {
        float parent_obmat[4][4];
    };

    struct bGPDlayer_Runtime
    {
        int  icon_id;
        char _pad[4];
    };

    struct bGPdata_Runtime
    {
        ARegion *         ar;
        void *            sbuffer;
        float             scolor[4];
        float             sfill[4];
        short             mode;
        short             bstroke_style;
        short             bfill_style;
        short             sbuffer_sflag;
        int               sbuffer_used;
        int               sbuffer_size;
        int               tot_cp_points;
        char              _pad_[4];
        bGPDcontrolpoint *cp_points;
    };

    struct bGPgrid
    {
        float color[3];
        float scale[2];
        float offset[2];
        char  _pad1[4];
        int   lines;
        char  _pad[4];
    };

    struct GpencilModifierData
    {
        GpencilModifierData *next;
        GpencilModifierData *prev;
        int                  type;
        int                  mode;
        int                  stackindex;
        short                flag;
        short                _pad;
        char                 name[64];
        char *               error;
    };

    struct ShaderFxData
    {
        ShaderFxData *next;
        ShaderFxData *prev;
        int           type;
        int           mode;
        int           stackindex;
        short         flag;
        char          _pad[2];
        char          name[64];
        char *        error;
    };

    struct ShaderFxData_Runtime
    {
        float            loc[3];
        char             _pad[4];
        DRWShadingGroup *fx_sh;
        DRWShadingGroup *fx_sh_b;
        DRWShadingGroup *fx_sh_c;
    };

    struct wmKeyMapItem
    {
        wmKeyMapItem *next;
        wmKeyMapItem *prev;
        char          idname[64];
        IDProperty *  properties;
        char          propvalue_str[64];
        short         propvalue;
        short         type;
        short         val;
        short         shift;
        short         ctrl;
        short         alt;
        short         oskey;
        short         keymodifier;
        short         flag;
        short         maptype;
        short         id;
        char          _pad[2];
        PointerRNA *  ptr;
    };

    struct wmKeyMapDiffItem
    {
        wmKeyMapDiffItem *next;
        wmKeyMapDiffItem *prev;
        wmKeyMapItem *    remove_item;
        wmKeyMapItem *    add_item;
    };

    struct wmKeyConfigPref
    {
        wmKeyConfigPref *next;
        wmKeyConfigPref *prev;
        char             idname[64];
        IDProperty *     prop;
    };

    struct FModifier
    {
        FModifier *next;
        FModifier *prev;
        FCurve *   curve;
        void *     data;
        char       name[64];
        short      type;
        short      flag;
        float      influence;
        float      sfra;
        float      efra;
        float      blendin;
        float      blendout;
    };

    struct FMod_Generator
    {
        float *coefficients;
        int    arraysize;
        int    poly_order;
        int    mode;
        int    flag;
    };

    struct FMod_FunctionGenerator
    {
        float amplitude;
        float phase_multiplier;
        float phase_offset;
        float value_offset;
        int   type;
        int   flag;
    };

    struct FCM_EnvelopeData
    {
        float min;
        float max;
        float time;
        short f1;
        short f2;
    };

    struct FMod_Envelope
    {
        FCM_EnvelopeData *data;
        int               totvert;
        float             midval;
        float             min;
        float             max;
    };

    struct FMod_Cycles
    {
        short before_mode;
        short after_mode;
        short before_cycles;
        short after_cycles;
    };

    struct FMod_Python
    {
        Text *      script;
        IDProperty *prop;
    };

    struct FMod_Noise
    {
        float size;
        float strength;
        float phase;
        float offset;
        short depth;
        short modification;
    };

    struct FMod_Stepped
    {
        float step_size;
        float offset;
        float start_frame;
        float end_frame;
        int   flag;
    };

    struct DriverTarget
    {
        ID *  id;
        char *rna_path;
        char  pchan_name[64];
        short transChan;
        char  rotation_mode;
        char  _pad[7];
        short flag;
        int   idtype;
    };

    struct FPoint
    {
        float vec[2];
        int   flag;
        char  _pad[4];
    };

    struct KS_Path
    {
        KS_Path *next;
        KS_Path *prev;
        ID *     id;
        char     group[64];
        int      idtype;
        short    groupmode;
        short    flag;
        char *   rna_path;
        int      array_index;
        short    keyingflag;
        short    keyingoverride;
    };

    struct AnimOverride
    {
        AnimOverride *next;
        AnimOverride *prev;
        char *        rna_path;
        int           array_index;
        float         value;
    };

    struct BoidRule
    {
        BoidRule *next;
        BoidRule *prev;
        int       type;
        int       flag;
        char      name[32];
    };

    struct BoidData
    {
        float health;
        float acc[3];
        short state_id;
        short mode;
    };

    struct FluidDomainVertexVelocity
    {
        float vel[3];
    };

    struct FluidFlowSettings
    {
        FluidModifierData *mmd;
        Mesh *             mesh;
        ParticleSystem *   psys;
        Tex *              noise_texture;
        float *            verts_old;
        int                numverts;
        float              vel_multi;
        float              vel_normal;
        float              vel_random;
        float              vel_coord[3];
        char               _pad1[4];
        float              density;
        float              color[3];
        float              fuel_amount;
        float              temperature;
        float              volume_density;
        float              surface_distance;
        float              particle_size;
        int                subframes;
        float              texture_size;
        float              texture_offset;
        char               _pad2[4];
        char               uvlayer_name[64];
        short              vgroup_density;
        short              type;
        short              behavior;
        short              source;
        short              texture_type;
        short              _pad3[3];
        int                flags;
    };

    struct FluidEffectorSettings
    {
        FluidModifierData *mmd;
        Mesh *             mesh;
        float *            verts_old;
        int                numverts;
        float              surface_distance;
        int                flags;
        short              type;
        char               _pad1[2];
        float              vel_multi;
        short              guiding_mode;
        char               _pad2[2];
    };

    struct MovieClipUser
    {
        int   framenr;
        short render_size;
        short render_flag;
    };

    struct MovieClipProxy
    {
        char  dir[768];
        short tc;
        short quality;
        short build_size_flag;
        short build_tc_flag;
    };

    struct MovieReconstructedCamera
    {
        int   framenr;
        float error;
        float mat[4][4];
    };

    struct MovieTrackingCamera
    {
        void *intrinsics;
        short distortion_model;
        char  _pad[2];
        float sensor_width;
        float pixel_aspect;
        float focal;
        short units;
        char  _pad1[2];
        float principal[2];
        float k1;
        float k2;
        float k3;
        float division_k1;
        float division_k2;
    };

    struct MovieTrackingMarker
    {
        float pos[2];
        float pattern_corners[4][2];
        float search_min[2];
        float search_max[2];
        int   framenr;
        int   flag;
    };

    struct MovieTrackingTrack
    {
        MovieTrackingTrack * next;
        MovieTrackingTrack * prev;
        char                 name[64];
        float                pat_min[2];
        float                pat_max[2];
        float                search_min[2];
        float                search_max[2];
        float                offset[2];
        int                  markersnr;
        int                  last_marker;
        MovieTrackingMarker *markers;
        float                bundle_pos[3];
        float                error;
        int                  flag;
        int                  pat_flag;
        int                  search_flag;
        float                color[3];
        short                frames_limit;
        short                margin;
        short                pattern_match;
        short                motion_model;
        int                  algorithm_flag;
        float                minimum_correlation;
        bGPdata *            gpd;
        float                weight;
        float                weight_stab;
    };

    struct MovieTrackingPlaneMarker
    {
        float corners[4][2];
        int   framenr;
        int   flag;
    };

    struct MovieTrackingPlaneTrack
    {
        MovieTrackingPlaneTrack * next;
        MovieTrackingPlaneTrack * prev;
        char                      name[64];
        MovieTrackingTrack **     point_tracks;
        int                       point_tracksnr;
        char                      _pad[4];
        MovieTrackingPlaneMarker *markers;
        int                       markersnr;
        int                       flag;
        Image *                   image;
        float                     image_opacity;
        int                       last_marker;
    };

    struct MovieTrackingSettings
    {
        int   flag;
        short default_motion_model;
        short default_algorithm_flag;
        float default_minimum_correlation;
        short default_pattern_size;
        short default_search_size;
        short default_frames_limit;
        short default_margin;
        short default_pattern_match;
        short default_flag;
        float default_weight;
        short motion_flag;
        short speed;
        int   keyframe1;
        int   keyframe2;
        int   reconstruction_flag;
        short refine_camera_intrinsics;
        char  _pad2[2];
        float dist;
        int   clean_frames;
        int   clean_action;
        float clean_error;
        float object_distance;
        char  _pad3[4];
    };

    struct MovieTrackingStabilization
    {
        int                 flag;
        int                 tot_track;
        int                 act_track;
        int                 tot_rot_track;
        int                 act_rot_track;
        float               maxscale;
        MovieTrackingTrack *rot_track;
        int                 anchor_frame;
        float               target_pos[2];
        float               target_rot;
        float               scale;
        float               locinf;
        float               scaleinf;
        float               rotinf;
        int                 filter;
        int                 ok;
    };

    struct MovieTrackingReconstruction
    {
        int                       flag;
        float                     error;
        int                       last_camera;
        int                       camnr;
        MovieReconstructedCamera *cameras;
    };

    struct MovieTrackingStats
    {
        char message[256];
    };

    struct MovieTrackingDopesheetChannel
    {
        MovieTrackingDopesheetChannel *next;
        MovieTrackingDopesheetChannel *prev;
        MovieTrackingTrack *           track;
        char                           _pad[4];
        char                           name[64];
        int                            tot_segment;
        int *                          segments;
        int                            max_segment;
        int                            total_frames;
    };

    struct MovieTrackingDopesheetCoverageSegment
    {
        MovieTrackingDopesheetCoverageSegment *next;
        MovieTrackingDopesheetCoverageSegment *prev;
        int                                    coverage;
        int                                    start_frame;
        int                                    end_frame;
        char                                   _pad[4];
    };

    struct DynamicPaintBrushSettings
    {
        DynamicPaintModifierData *pmd;
        ParticleSystem *          psys;
        int                       flags;
        int                       collision;
        float                     r;
        float                     g;
        float                     b;
        float                     alpha;
        float                     wetness;
        float                     particle_radius;
        float                     particle_smooth;
        float                     paint_distance;
        ColorBand *               paint_ramp;
        ColorBand *               vel_ramp;
        short                     proximity_falloff;
        short                     wave_type;
        short                     ray_dir;
        char                      _pad[2];
        float                     wave_factor;
        float                     wave_clamp;
        float                     max_velocity;
        float                     smudge_strength;
    };

    struct MaskParent
    {
        int   id_type;
        int   type;
        ID *  id;
        char  parent[64];
        char  sub_parent[64];
        float parent_orig[2];
        float parent_corners_orig[4][2];
    };

    struct MaskSplinePointUW
    {
        float u;
        float w;
        int   flag;
    };

    struct MaskLayerShape
    {
        MaskLayerShape *next;
        MaskLayerShape *prev;
        float *         data;
        int             tot_vert;
        int             frame;
        char            flag;
        char            _pad[7];
    };

    struct RigidBodyOb
    {
        short               type;
        short               shape;
        int                 flag;
        int                 col_groups;
        short               mesh_source;
        char                _pad[2];
        float               mass;
        float               friction;
        float               restitution;
        float               margin;
        float               lin_damping;
        float               ang_damping;
        float               lin_sleep_thresh;
        float               ang_sleep_thresh;
        float               orn[4];
        float               pos[3];
        char                _pad1[4];
        RigidBodyOb_Shared *shared;
    };

    struct RigidBodyCon
    {
        Object *ob1;
        Object *ob2;
        short   type;
        short   num_solver_iterations;
        int     flag;
        float   breaking_threshold;
        char    spring_type;
        char    _pad[3];
        float   limit_lin_x_lower;
        float   limit_lin_x_upper;
        float   limit_lin_y_lower;
        float   limit_lin_y_upper;
        float   limit_lin_z_lower;
        float   limit_lin_z_upper;
        float   limit_ang_x_lower;
        float   limit_ang_x_upper;
        float   limit_ang_y_lower;
        float   limit_ang_y_upper;
        float   limit_ang_z_lower;
        float   limit_ang_z_upper;
        float   spring_stiffness_x;
        float   spring_stiffness_y;
        float   spring_stiffness_z;
        float   spring_stiffness_ang_x;
        float   spring_stiffness_ang_y;
        float   spring_stiffness_ang_z;
        float   spring_damping_x;
        float   spring_damping_y;
        float   spring_damping_z;
        float   spring_damping_ang_x;
        float   spring_damping_ang_y;
        float   spring_damping_ang_z;
        float   motor_lin_target_velocity;
        float   motor_ang_target_velocity;
        float   motor_lin_max_impulse;
        float   motor_ang_max_impulse;
        void *  physics_constraint;
    };

    struct FreestyleLineSet
    {
        FreestyleLineSet *  next;
        FreestyleLineSet *  prev;
        char                name[64];
        int                 flags;
        int                 selection;
        short               qi;
        char                _pad1[2];
        int                 qi_start;
        int                 qi_end;
        int                 edge_types;
        int                 exclude_edge_types;
        char                _pad2[4];
        Collection *        group;
        FreestyleLineStyle *linestyle;
    };

    struct FreestyleModuleConfig
    {
        FreestyleModuleConfig *next;
        FreestyleModuleConfig *prev;
        Text *                 script;
        short                  is_displayed;
        char                   _pad[6];
    };

    struct LineStyleModifier
    {
        LineStyleModifier *next;
        LineStyleModifier *prev;
        char               name[64];
        int                type;
        float              influence;
        int                flags;
        int                blend;
    };

    struct AlembicObjectPath
    {
        AlembicObjectPath *next;
        AlembicObjectPath *prev;
        char               path[4096];
    };

    struct Base
    {
        Base *  next;
        Base *  prev;
        short   flag_from_collection;
        short   flag;
        short   local_view_bits;
        short   sx;
        short   sy;
        char    _pad1[6];
        Object *object;
        int     lay;
        int     flag_legacy;
        short   local_collections_bits;
        short   _pad2[3];
        Base *  base_orig;
        void *  _pad;
    };

    struct ViewLayerEngineData
    {
        ViewLayerEngineData *next;
        ViewLayerEngineData *prev;
        DrawEngineType *     engine_type;
        void *               storage;
        void (*free)();
    };

    struct bToolRef
    {
        bToolRef *        next;
        bToolRef *        prev;
        char              idname[64];
        short             tag;
        short             space_type;
        int               mode;
        IDProperty *      properties;
        bToolRef_Runtime *runtime;
    };

    struct WorkSpaceLayout
    {
        WorkSpaceLayout *next;
        WorkSpaceLayout *prev;
        bScreen *        screen;
        char             name[64];
    };

    struct wmOwnerID
    {
        wmOwnerID *next;
        wmOwnerID *prev;
        char       name[64];
    };

    struct WorkSpaceDataRelation
    {
        WorkSpaceDataRelation *next;
        WorkSpaceDataRelation *prev;
        void *                 parent;
        void *                 value;
    };

    struct WorkSpaceInstanceHook
    {
        WorkSpace *      active;
        WorkSpaceLayout *act_layout;
        WorkSpace *      temp_workspace_store;
        WorkSpaceLayout *temp_layout_store;
    };

    struct LightProbeCache
    {
        float position[3];
        float parallax_type;
        float attenuation_fac;
        float attenuation_type;
        float _pad3[2];
        float attenuationmat[4][4];
        float parallaxmat[4][4];
    };

    struct LightGridCache
    {
        float mat[4][4];
        int   resolution[3];
        int   offset;
        float corner[3];
        float attenuation_scale;
        float increment_x[3];
        float attenuation_bias;
        float increment_y[3];
        float level_bias;
        float increment_z[3];
        float _pad4;
        float visibility_bias;
        float visibility_bleed;
        float visibility_range;
        float _pad5;
    };

    struct LightCacheTexture
    {
        GPUTexture *tex;
        char *      data;
        int         tex_size[3];
        char        data_type;
        char        components;
        char        _pad[2];
    };

    struct CurveProfilePoint
    {
        float x;
        float y;
        short flag;
        char  h1;
        char  h2;
    };

#pragma endregion

// Dependent structures:
// The member declarations have references to other
// structures without a pointer; Therefore, declaration order DOES matter.
// If a structure has a non pointer member structure, then that structure
// must be visible before defining the structure that uses it.
#pragma region Dependent
    struct CurveProfile
    {
        short              path_len;
        short              segments_len;
        int                preset;
        CurveProfilePoint *path;
        CurveProfilePoint *table;
        CurveProfilePoint *segments;
        int                flag;
        int                changed_timestamp;
        rctf               view_rect;
        rctf               clip_rect;
    };

    struct LightCache
    {
        int                flag;
        int                cube_len;
        int                grid_len;
        int                mips_len;
        int                vis_res;
        int                ref_res;
        char               _pad[4][2];
        LightCacheTexture  grid_tx;
        LightCacheTexture  cube_tx;
        LightCacheTexture *cube_mips;
        LightProbeCache *  cube_data;
        LightGridCache *   grid_data;
    };

    struct LightProbe
    {
        ID          id;
        AnimData *  adt;
        char        type;
        char        flag;
        char        attenuation_type;
        char        parallax_type;
        float       distinf;
        float       distpar;
        float       falloff;
        float       clipsta;
        float       clipend;
        float       vis_bias;
        float       vis_bleedbias;
        float       vis_blur;
        float       intensity;
        int         grid_resolution_x;
        int         grid_resolution_y;
        int         grid_resolution_z;
        char        _pad1[4];
        Object *    parallax_ob;
        Image *     image;
        Collection *visibility_grp;
        float       distfalloff;
        float       distgridinf;
        char        _pad[8];
    };

    struct WorkSpace
    {
        ID       id;
        ListBase layouts;
        ListBase hook_layout_relations;
        ListBase owner_ids;
        ListBase tools;
        char     _pad[4];
        int      object_mode;
        int      flags;
        int      order;
        char *   status_text;
    };

    struct SceneCollection
    {
        SceneCollection *next;
        SceneCollection *prev;
        char             name[64];
        int              active_object_index;
        short            flag;
        char             type;
        char             _pad;
        ListBase         objects;
        ListBase         scene_collections;
    };

    struct LayerCollection
    {
        LayerCollection *next;
        LayerCollection *prev;
        Collection *     collection;
        SceneCollection *scene_collection;
        short            flag;
        short            runtime_flag;
        char             _pad[4];
        ListBase         layer_collections;
        short            local_collections_bits;
        short            _pad2[3];
    };

    struct CacheFile
    {
        ID                id;
        AnimData *        adt;
        ListBase          object_paths;
        char              filepath[1024];
        char              is_sequence;
        char              forward_axis;
        char              up_axis;
        char              override_frame;
        float             scale;
        float             frame;
        float             frame_offset;
        short             flag;
        short             draw_flag;
        char              _pad[4];
        AbcArchiveHandle *handle;
        char              handle_filepath[1024];
        GSet *            handle_readers;
    };

    struct FreestyleLineStyle
    {
        ID         id;
        AnimData * adt;
        float      r;
        float      g;
        float      b;
        float      alpha;
        float      thickness;
        int        thickness_position;
        float      thickness_ratio;
        int        flag;
        int        caps;
        int        chaining;
        int        rounds;
        float      split_length;
        float      min_angle;
        float      max_angle;
        float      min_length;
        float      max_length;
        int        chain_count;
        short      split_dash1;
        short      split_gap1;
        short      split_dash2;
        short      split_gap2;
        short      split_dash3;
        short      split_gap3;
        int        sort_key;
        int        integration_type;
        float      texstep;
        short      texact;
        short      pr_texture;
        short      use_nodes;
        char       _pad[6];
        short      dash1;
        short      gap1;
        short      dash2;
        short      gap2;
        short      dash3;
        short      gap3;
        int        panel;
        MTex *     mtex[18];
        bNodeTree *nodetree;
        ListBase   color_modifiers;
        ListBase   alpha_modifiers;
        ListBase   thickness_modifiers;
        ListBase   geometry_modifiers;
    };

    struct LineStyleThicknessModifier_Calligraphy
    {
        LineStyleModifier modifier;
        float             min_thickness;
        float             max_thickness;
        float             orientation;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_Simplification
    {
        LineStyleModifier modifier;
        float             tolerance;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_2DTransform
    {
        LineStyleModifier modifier;
        int               pivot;
        float             scale_x;
        float             scale_y;
        float             angle;
        float             pivot_u;
        float             pivot_x;
        float             pivot_y;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_2DOffset
    {
        LineStyleModifier modifier;
        float             start;
        float             end;
        float             x;
        float             y;
    };

    struct LineStyleGeometryModifier_Blueprint
    {
        LineStyleModifier modifier;
        int               flags;
        int               rounds;
        float             backbone_length;
        int               random_radius;
        int               random_center;
        int               random_backbone;
    };

    struct LineStyleGeometryModifier_GuidingLines
    {
        LineStyleModifier modifier;
        float             offset;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_Polygonalization
    {
        LineStyleModifier modifier;
        float             error;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_TipRemover
    {
        LineStyleModifier modifier;
        float             tip_length;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_BackboneStretcher
    {
        LineStyleModifier modifier;
        float             backbone_length;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_PerlinNoise2D
    {
        LineStyleModifier modifier;
        float             frequency;
        float             amplitude;
        float             angle;
        int               octaves;
        int               seed;
        char              _pad1[4];
    };

    struct LineStyleGeometryModifier_PerlinNoise1D
    {
        LineStyleModifier modifier;
        float             frequency;
        float             amplitude;
        float             angle;
        int               octaves;
        int               seed;
        char              _pad1[4];
    };

    struct LineStyleGeometryModifier_SpatialNoise
    {
        LineStyleModifier modifier;
        float             amplitude;
        float             scale;
        int               octaves;
        int               flags;
    };

    struct LineStyleGeometryModifier_SinusDisplacement
    {
        LineStyleModifier modifier;
        float             wavelength;
        float             amplitude;
        float             phase;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_BezierCurve
    {
        LineStyleModifier modifier;
        float             error;
        char              _pad[4];
    };

    struct LineStyleGeometryModifier_Sampling
    {
        LineStyleModifier modifier;
        float             sampling;
        char              _pad[4];
    };

    struct LineStyleThicknessModifier_Material
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             value_min;
        float             value_max;
        int               mat_attr;
    };

    struct LineStyleAlphaModifier_Material
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        int               mat_attr;
    };

    struct LineStyleColorModifier_Material
    {
        LineStyleModifier modifier;
        ColorBand *       color_ramp;
        int               flags;
        int               mat_attr;
    };

    struct LineStyleThicknessModifier_Tangent
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             min_thickness;
        float             max_thickness;
        char              _pad[4];
    };

    struct LineStyleAlphaModifier_Tangent
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        char              _pad[4];
    };

    struct LineStyleColorModifier_Tangent
    {
        LineStyleModifier modifier;
        ColorBand *       color_ramp;
    };

    struct LineStyleThicknessModifier_CreaseAngle
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        char              _pad[4];
        float             min_angle;
        float             max_angle;
        float             min_thickness;
        float             max_thickness;
    };

    struct LineStyleAlphaModifier_CreaseAngle
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             min_angle;
        float             max_angle;
        char              _pad[4];
    };

    struct LineStyleColorModifier_CreaseAngle
    {
        LineStyleModifier modifier;
        ColorBand *       color_ramp;
        float             min_angle;
        float             max_angle;
    };

    struct LineStyleThicknessModifier_Noise
    {
        LineStyleModifier modifier;
        float             period;
        float             amplitude;
        int               flags;
        int               seed;
    };

    struct LineStyleAlphaModifier_Noise
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             period;
        float             amplitude;
        int               seed;
    };

    struct LineStyleColorModifier_Noise
    {
        LineStyleModifier modifier;
        ColorBand *       color_ramp;
        float             period;
        float             amplitude;
        int               seed;
        char              _pad[4];
    };

    struct LineStyleThicknessModifier_Curvature_3D
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        char              _pad[4];
        float             min_curvature;
        float             max_curvature;
        float             min_thickness;
        float             max_thickness;
    };

    struct LineStyleAlphaModifier_Curvature_3D
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             min_curvature;
        float             max_curvature;
        char              _pad[4];
    };

    struct LineStyleColorModifier_Curvature_3D
    {
        LineStyleModifier modifier;
        float             min_curvature;
        float             max_curvature;
        ColorBand *       color_ramp;
        float             range_min;
        float             range_max;
    };

    struct LineStyleThicknessModifier_DistanceFromObject
    {
        LineStyleModifier modifier;
        Object *          target;
        CurveMapping *    curve;
        int               flags;
        float             range_min;
        float             range_max;
        float             value_min;
        float             value_max;
        char              _pad[4];
    };

    struct LineStyleAlphaModifier_DistanceFromObject
    {
        LineStyleModifier modifier;
        Object *          target;
        CurveMapping *    curve;
        int               flags;
        float             range_min;
        float             range_max;
        char              _pad[4];
    };

    struct LineStyleColorModifier_DistanceFromObject
    {
        LineStyleModifier modifier;
        Object *          target;
        ColorBand *       color_ramp;
        float             range_min;
        float             range_max;
    };

    struct LineStyleThicknessModifier_DistanceFromCamera
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             range_min;
        float             range_max;
        float             value_min;
        float             value_max;
        char              _pad[4];
    };

    struct LineStyleAlphaModifier_DistanceFromCamera
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             range_min;
        float             range_max;
        char              _pad[4];
    };

    struct LineStyleColorModifier_DistanceFromCamera
    {
        LineStyleModifier modifier;
        ColorBand *       color_ramp;
        float             range_min;
        float             range_max;
    };

    struct LineStyleThicknessModifier_AlongStroke
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        float             value_min;
        float             value_max;
        char              _pad[4];
    };

    struct LineStyleAlphaModifier_AlongStroke
    {
        LineStyleModifier modifier;
        CurveMapping *    curve;
        int               flags;
        char              _pad[4];
    };

    struct LineStyleColorModifier_AlongStroke
    {
        LineStyleModifier modifier;
        ColorBand *       color_ramp;
    };

    struct FreestyleConfig
    {
        ListBase modules;
        int      mode;
        int      raycasting_algorithm;
        int      flags;
        float    sphere_radius;
        float    dkr_epsilon;
        float    crease_angle;
        ListBase linesets;
    };

    struct RigidBodyWorld
    {
        EffectorWeights *      effector_weights;
        Collection *           group;
        Object **              objects;
        Collection *           constraints;
        char                   _pad[4];
        float                  ltime;
        RigidBodyWorld_Shared *shared;
        PointCache *           pointcache;
        ListBase               ptcaches;
        int                    numbodies;
        short                  steps_per_second;
        short                  num_solver_iterations;
        int                    flag;
        float                  time_scale;
    };

    struct RigidBodyWorld_Shared
    {
        PointCache *pointcache;
        ListBase    ptcaches;
        void *      physics_world;
    };

    struct MaskLayer
    {
        MaskLayer *      next;
        MaskLayer *      prev;
        char             name[64];
        ListBase         splines;
        ListBase         splines_shapes;
        MaskSpline *     act_spline;
        MaskSplinePoint *act_point;
        float            alpha;
        char             blend;
        char             blend_flag;
        char             falloff;
        char             _pad[7];
        char             flag;
        char             restrictflag;
    };

    struct MaskSpline
    {
        MaskSpline *     next;
        MaskSpline *     prev;
        short            flag;
        char             offset_mode;
        char             weight_interp;
        int              tot_point;
        MaskSplinePoint *points;
        MaskParent       parent;
        MaskSplinePoint *points_deform;
    };

    struct MaskSplinePoint
    {
        BezTriple          bezt;
        char               _pad[4];
        int                tot_uw;
        MaskSplinePointUW *uw;
        MaskParent         parent;
    };

    struct Mask
    {
        ID        id;
        AnimData *adt;
        ListBase  masklayers;
        int       masklay_act;
        int       masklay_tot;
        int       sfra;
        int       efra;
        int       flag;
        char      _pad[4];
    };

    struct DynamicPaintCanvasSettings
    {
        DynamicPaintModifierData *pmd;
        ListBase                  surfaces;
        short                     active_sur;
        short                     flags;
        char                      _pad[4];
        char                      error[64];
    };

    struct DynamicPaintSurface
    {
        DynamicPaintSurface *       next;
        DynamicPaintSurface *       prev;
        DynamicPaintCanvasSettings *canvas;
        PaintSurfaceData *          data;
        Collection *                brush_group;
        EffectorWeights *           effector_weights;
        PointCache *                pointcache;
        ListBase                    ptcaches;
        int                         current_frame;
        char                        name[64];
        short                       format;
        short                       type;
        short                       disp_type;
        short                       image_fileformat;
        short                       effect_ui;
        short                       init_color_type;
        int                         flags;
        int                         effect;
        int                         image_resolution;
        int                         substeps;
        int                         start_frame;
        int                         end_frame;
        float                       init_color[4];
        Tex *                       init_texture;
        char                        init_layername[64];
        int                         dry_speed;
        int                         diss_speed;
        float                       color_dry_threshold;
        float                       depth_clamp;
        float                       disp_factor;
        float                       spread_speed;
        float                       color_spread_speed;
        float                       shrink_speed;
        float                       drip_vel;
        float                       drip_acc;
        float                       influence_scale;
        float                       radius_scale;
        float                       wave_damping;
        float                       wave_speed;
        float                       wave_timescale;
        float                       wave_spring;
        float                       wave_smoothness;
        char                        _pad2[4];
        char                        uvlayer_name[64];
        char                        image_output_path[1024];
        char                        output_name[64];
        char                        output_name2[64];
    };

    struct MovieTrackingDopesheet
    {
        int      ok;
        short    sort_method;
        short    flag;
        ListBase coverage_segments;
        ListBase channels;
        int      tot_channel;
        char     _pad[4];
    };

    struct MovieTrackingObject
    {
        MovieTrackingObject *       next;
        MovieTrackingObject *       prev;
        char                        name[64];
        int                         flag;
        float                       scale;
        ListBase                    tracks;
        ListBase                    plane_tracks;
        MovieTrackingReconstruction reconstruction;
        int                         keyframe1;
        int                         keyframe2;
    };

    struct MovieClipScopes
    {
        short                ok;
        short                use_track_mask;
        int                  track_preview_height;
        int                  frame_width;
        int                  frame_height;
        MovieTrackingMarker  undist_marker;
        ImBuf *              track_search;
        ImBuf *              track_preview;
        float                track_pos[2];
        short                track_disabled;
        short                track_locked;
        int                  framenr;
        MovieTrackingTrack * track;
        MovieTrackingMarker *marker;
        float                slide_scale[2];
    };

    struct MovieClip_Runtime
    {
        ListBase gputextures;
    };

    struct MovieClip_RuntimeGPUTexture
    {
        void *        next;
        void *        prev;
        MovieClipUser user;
        GPUTexture *  gputexture[2];
    };

    struct Speaker
    {
        ID        id;
        AnimData *adt;
        bSound *  sound;
        float     volume_max;
        float     volume_min;
        float     distance_max;
        float     distance_reference;
        float     attenuation;
        float     cone_angle_outer;
        float     cone_angle_inner;
        float     cone_volume_outer;
        float     volume;
        float     pitch;
        short     flag;
        char      _pad1[6];
    };

    struct FluidDomainSettings
    {
        FluidModifierData *        mmd;
        MANTA *                    fluid;
        MANTA *                    fluid_old;
        void *                     fluid_mutex;
        Collection *               fluid_group;
        Collection *               force_group;
        Collection *               effector_group;
        GPUTexture *               tex;
        GPUTexture *               tex_wt;
        GPUTexture *               tex_shadow;
        GPUTexture *               tex_flame;
        GPUTexture *               tex_flame_coba;
        GPUTexture *               tex_coba;
        GPUTexture *               tex_field;
        GPUTexture *               tex_velocity_x;
        GPUTexture *               tex_velocity_y;
        GPUTexture *               tex_velocity_z;
        Object *                   guiding_parent;
        FluidDomainVertexVelocity *mesh_velocities;
        EffectorWeights *          effector_weights;
        float                      p0[3];
        float                      p1[3];
        float                      dp0[3];
        float                      cell_size[3];
        float                      global_size[3];
        float                      prev_loc[3];
        int                        shift[3];
        float                      shift_f[3];
        float                      obj_shift_f[3];
        float                      imat[4][4];
        float                      obmat[4][4];
        float                      fluidmat[4][4];
        float                      fluidmat_wt[4][4];
        int                        base_res[3];
        int                        res_min[3];
        int                        res_max[3];
        int                        res[3];
        int                        total_cells;
        float                      dx;
        float                      scale;
        int                        boundary_width;
        int                        adapt_margin;
        int                        adapt_res;
        float                      adapt_threshold;
        char                       _pad1[4];
        int                        maxres;
        int                        solver_res;
        int                        border_collisions;
        int                        flags;
        float                      gravity[3];
        int                        active_fields;
        short                      type;
        char                       _pad2[6];
        float                      alpha;
        float                      beta;
        int                        diss_speed;
        float                      vorticity;
        float                      active_color[3];
        int                        highres_sampling;
        float                      burning_rate;
        float                      flame_smoke;
        float                      flame_vorticity;
        float                      flame_ignition;
        float                      flame_max_temp;
        float                      flame_smoke_color[3];
        float                      noise_strength;
        float                      noise_pos_scale;
        float                      noise_time_anim;
        int                        res_noise[3];
        int                        noise_scale;
        short                      noise_type;
        char                       _pad3[2];
        float                      particle_randomness;
        int                        particle_number;
        int                        particle_minimum;
        int                        particle_maximum;
        float                      particle_radius;
        float                      particle_band_width;
        float                      fractions_threshold;
        float                      flip_ratio;
        short                      simulation_method;
        char                       _pad4[6];
        float                      surface_tension;
        float                      viscosity_base;
        int                        viscosity_exponent;
        float                      domain_size;
        float                      mesh_concave_upper;
        float                      mesh_concave_lower;
        float                      mesh_particle_radius;
        int                        mesh_smoothen_pos;
        int                        mesh_smoothen_neg;
        int                        mesh_scale;
        int                        totvert;
        short                      mesh_generator;
        char                       _pad5[2];
        int                        particle_type;
        int                        particle_scale;
        float                      sndparticle_tau_min_wc;
        float                      sndparticle_tau_max_wc;
        float                      sndparticle_tau_min_ta;
        float                      sndparticle_tau_max_ta;
        float                      sndparticle_tau_min_k;
        float                      sndparticle_tau_max_k;
        int                        sndparticle_k_wc;
        int                        sndparticle_k_ta;
        float                      sndparticle_k_b;
        float                      sndparticle_k_d;
        float                      sndparticle_l_min;
        float                      sndparticle_l_max;
        int                        sndparticle_potential_radius;
        int                        sndparticle_update_radius;
        char                       sndparticle_boundary;
        char                       sndparticle_combined_export;
        char                       _pad6[6];
        float                      guiding_alpha;
        int                        guiding_beta;
        float                      guiding_vel_factor;
        int                        guide_res[3];
        short                      guiding_source;
        char                       _pad7[2];
        int                        cache_frame_start;
        int                        cache_frame_end;
        int                        cache_frame_pause_data;
        int                        cache_frame_pause_noise;
        int                        cache_frame_pause_mesh;
        int                        cache_frame_pause_particles;
        int                        cache_frame_pause_guiding;
        int                        cache_flag;
        char                       cache_mesh_format;
        char                       cache_data_format;
        char                       cache_particle_format;
        char                       cache_noise_format;
        char                       cache_directory[1024];
        char                       error[64];
        short                      cache_type;
        char                       _pad8[2];
        float                      dt;
        float                      time_total;
        float                      time_per_frame;
        float                      frame_length;
        float                      time_scale;
        float                      cfl_condition;
        int                        timesteps_minimum;
        int                        timesteps_maximum;
        char                       slice_method;
        char                       axis_slice_method;
        char                       slice_axis;
        char                       draw_velocity;
        float                      slice_per_voxel;
        float                      slice_depth;
        float                      display_thickness;
        ColorBand *                coba;
        float                      vector_scale;
        char                       vector_draw_type;
        char                       use_coba;
        char                       coba_field;
        char                       interp_method;
        int                        viewsettings;
        char                       _pad9[4];
        int                        openvdb_comp;
        float                      clipping;
        char                       data_depth;
        char                       _pad10[7];
        PointCache *               point_cache[2];
        ListBase                   ptcaches[2];
        int                        cache_comp;
        int                        cache_high_comp;
        char                       cache_file_format;
        char                       _pad11[7];
    };

    struct BoidSettings
    {
        int      options;
        int      last_state_id;
        float    landing_smoothness;
        float    height;
        float    banking;
        float    pitch;
        float    health;
        float    aggression;
        float    strength;
        float    accuracy;
        float    range;
        float    air_min_speed;
        float    air_max_speed;
        float    air_max_acc;
        float    air_max_ave;
        float    air_personal_space;
        float    land_jump_speed;
        float    land_max_speed;
        float    land_max_acc;
        float    land_max_ave;
        float    land_personal_space;
        float    land_stick_force;
        ListBase states;
    };

    struct BoidState
    {
        BoidState *next;
        BoidState *prev;
        ListBase   rules;
        ListBase   conditions;
        ListBase   actions;
        char       name[32];
        int        id;
        int        flag;
        int        ruleset_type;
        float      rule_fuzziness;
        int        signal_id;
        int        channels;
        float      volume;
        float      falloff;
    };

    struct BoidRuleFight
    {
        BoidRule rule;
        float    distance;
        float    flee_distance;
    };

    struct BoidRuleAverageSpeed
    {
        BoidRule rule;
        float    wander;
        float    level;
        float    speed;
        float    rt;
    };

    struct BoidRuleFollowLeader
    {
        BoidRule rule;
        Object * ob;
        float    loc[3];
        float    oloc[3];
        float    cfra;
        float    distance;
        int      options;
        int      queue_size;
    };

    struct BoidRuleAvoidCollision
    {
        BoidRule rule;
        int      options;
        float    look_ahead;
    };

    struct BoidRuleGoalAvoid
    {
        BoidRule rule;
        Object * ob;
        int      options;
        float    fear_factor;
        int      signal_id;
        int      channels;
    };

    struct IdAdtTemplate
    {
        ID        id;
        AnimData *adt;
    };

    struct AnimData
    {
        bAction * action;
        bAction * tmpact;
        ListBase  nla_tracks;
        NlaTrack *act_track;
        NlaStrip *actstrip;
        ListBase  drivers;
        ListBase  overrides;
        FCurve ** driver_array;
        int       flag;
        char      _pad[4];
        short     act_blendmode;
        short     act_extendmode;
        float     act_influence;
    };

    struct KeyingSet
    {
        KeyingSet *next;
        KeyingSet *prev;
        ListBase   paths;
        char       idname[64];
        char       name[64];
        char       description[240];
        char       typeinfo[64];
        int        active_path;
        short      flag;
        short      keyingflag;
        short      keyingoverride;
        char       _pad[6];
    };

    struct NlaTrack
    {
        NlaTrack *next;
        NlaTrack *prev;
        ListBase  strips;
        int       flag;
        int       index;
        char      name[64];
    };

    struct NlaStrip
    {
        NlaStrip *next;
        NlaStrip *prev;
        ListBase  strips;
        bAction * act;
        ListBase  fcurves;
        ListBase  modifiers;
        char      name[64];
        float     influence;
        float     strip_time;
        float     start;
        float     end;
        float     actstart;
        float     actend;
        float     repeat;
        float     scale;
        float     blendin;
        float     blendout;
        short     blendmode;
        short     extendmode;
        char      _pad1[2];
        short     type;
        void *    speaker_handle;
        int       flag;
        char      _pad2[4];
        NlaStrip *orig_strip;
        void *    _pad3;
    };

    struct FCurve
    {
        FCurve *       next;
        FCurve *       prev;
        bActionGroup * grp;
        ChannelDriver *driver;
        ListBase       modifiers;
        BezTriple *    bezt;
        FPoint *       fpt;
        int            totvert;
        float          curval;
        char           _pad2[4];
        short          flag;
        short          extend;
        char           auto_smoothing;
        char           _pad[3];
        int            array_index;
        char *         rna_path;
        int            color_mode;
        float          color[3];
        float          prev_norm_factor;
        float          prev_offset;
    };

    struct ChannelDriver
    {
        ListBase           variables;
        char               expression[256];
        void *             expr_comp;
        ExprPyLike_Parsed *expr_simple;
        float              curval;
        float              influence;
        int                type;
        int                flag;
    };

    struct DriverVar
    {
        DriverVar *  next;
        DriverVar *  prev;
        char         name[64];
        DriverTarget targets[8];
        char         num_targets;
        char         type;
        short        flag;
        float        curval;
    };

    struct FMod_Limits
    {
        rctf rect;
        int  flag;
        char _pad[4];
    };

    struct wmOperator
    {
        wmOperator *    next;
        wmOperator *    prev;
        char            idname[64];
        IDProperty *    properties;
        wmOperatorType *type;
        void *          customdata;
        void *          py_instance;
        PointerRNA *    ptr;
        ReportList *    reports;
        ListBase        macro;
        wmOperator *    opm;
        uiLayout *      layout;
        short           flag;
        char            _pad[6];
    };

    struct wmKeyConfig
    {
        wmKeyConfig *next;
        wmKeyConfig *prev;
        char         idname[64];
        char         basename[64];
        ListBase     keymaps;
        int          actkeymap;
        short        flag;
        char         _pad0[2];
    };

    struct wmKeyMap
    {
        wmKeyMap *next;
        wmKeyMap *prev;
        ListBase  items;
        ListBase  diff_items;
        char      idname[64];
        short     spaceid;
        short     regionid;
        char      owner_id[64];
        short     flag;
        short     kmi_id;
        bool (*poll)();
        bool (*poll_modal_item)();
        void *modal_items;
    };

    struct ReportList
    {
        ListBase list;
        int      printlevel;
        int      storelevel;
        int      flag;
        char     _pad[4];
        wmTimer *reporttimer;
    };

    struct WaveShaderFxData
    {
        ShaderFxData         shaderfx;
        float                amplitude;
        float                period;
        float                phase;
        int                  orientation;
        int                  flag;
        char                 _pad[4];
        ShaderFxData_Runtime runtime;
    };

    struct SwirlShaderFxData
    {
        ShaderFxData         shaderfx;
        Object *             object;
        int                  flag;
        int                  radius;
        float                angle;
        int                  transparent;
        ShaderFxData_Runtime runtime;
    };

    struct ShadowShaderFxData
    {
        ShaderFxData         shaderfx;
        Object *             object;
        int                  offset[2];
        int                  flag;
        float                shadow_rgba[4];
        float                amplitude;
        float                period;
        float                phase;
        int                  orientation;
        float                scale[2];
        float                rotation;
        int                  blur[2];
        int                  samples;
        char                 _pad[4];
        ShaderFxData_Runtime runtime;
    };

    struct RimShaderFxData
    {
        ShaderFxData         shaderfx;
        int                  offset[2];
        int                  flag;
        float                rim_rgb[3];
        float                mask_rgb[3];
        int                  mode;
        int                  blur[2];
        int                  samples;
        char                 _pad[4];
        ShaderFxData_Runtime runtime;
    };

    struct PixelShaderFxData
    {
        ShaderFxData         shaderfx;
        int                  size[3];
        int                  flag;
        float                rgba[4];
        ShaderFxData_Runtime runtime;
    };

    struct LightShaderFxData
    {
        ShaderFxData         shaderfx;
        Object *             object;
        int                  flag;
        float                energy;
        float                ambient;
        float                loc[4];
        char                 _pad[4];
        ShaderFxData_Runtime runtime;
    };

    struct GlowShaderFxData
    {
        ShaderFxData         shaderfx;
        float                glow_color[3];
        float                select_color[3];
        float                threshold;
        int                  flag;
        int                  mode;
        int                  blur[2];
        int                  samples;
        ShaderFxData_Runtime runtime;
    };

    struct FlipShaderFxData
    {
        ShaderFxData         shaderfx;
        int                  flag;
        int                  flipmode;
        ShaderFxData_Runtime runtime;
    };

    struct ColorizeShaderFxData
    {
        ShaderFxData         shaderfx;
        int                  mode;
        float                low_color[4];
        float                high_color[4];
        float                factor;
        int                  flag;
        char                 _pad[4];
        ShaderFxData_Runtime runtime;
    };

    struct BlurShaderFxData
    {
        ShaderFxData         shaderfx;
        int                  radius[2];
        int                  flag;
        int                  samples;
        float                coc;
        int                  blur[2];
        char                 _pad[4];
        ShaderFxData_Runtime runtime;
    };

    struct MultiplyGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        int                 pass_index;
        int                 flag;
        int                 layer_pass;
        char                _pad[4];
        int                 flags;
        int                 duplications;
        float               distance;
        float               offset;
        float               fading_center;
        float               fading_thickness;
        float               fading_opacity;
        float               split_angle;
    };

    struct ArmatureGpencilModifierData
    {
        GpencilModifierData modifier;
        short               deformflag;
        short               multi;
        int                 _pad;
        Object *            object;
        float *             prevCos;
        char                vgname[64];
    };

    struct SmoothGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 flag;
        float               factor;
        int                 step;
        int                 layer_pass;
        char                _pad[4];
    };

    struct OffsetGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 flag;
        float               loc[3];
        float               rot[3];
        float               scale[3];
        int                 layer_pass;
    };

    struct SimplifyGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        int                 pass_index;
        int                 flag;
        float               factor;
        short               mode;
        short               step;
        int                 layer_pass;
        float               length;
        float               distance;
        char                _pad[4];
    };

    struct HookGpencilModifierData
    {
        GpencilModifierData modifier;
        Object *            object;
        char                subtarget[64];
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 layer_pass;
        char                _pad[4];
        int                 flag;
        char                falloff_type;
        char                _pad1[3];
        float               parentinv[4][4];
        float               cent[3];
        float               falloff;
        float               force;
        CurveMapping *      curfalloff;
    };

    struct MirrorGpencilModifierData
    {
        GpencilModifierData modifier;
        Object *            object;
        char                layername[64];
        char                materialname[64];
        int                 pass_index;
        int                 flag;
        int                 layer_pass;
        char                _pad[4];
    };

    struct LatticeGpencilModifierData
    {
        GpencilModifierData modifier;
        Object *            object;
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 flag;
        float               strength;
        int                 layer_pass;
        void *              cache_data;
    };

    struct BuildGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        int                 pass_index;
        char                materialname[64];
        int                 layer_pass;
        float               start_frame;
        float               end_frame;
        float               start_delay;
        float               length;
        short               flag;
        short               mode;
        short               transition;
        short               time_alignment;
    };

    struct ArrayGpencilModifierData
    {
        GpencilModifierData modifier;
        Object *            object;
        int                 count;
        int                 flag;
        float               offset[3];
        float               shift[3];
        float               rnd_size;
        float               rnd_rot;
        float               rot[3];
        float               scale[3];
        float               rnd[20];
        char                _pad[4];
        int                 pass_index;
        char                layername[64];
        char                materialname[64];
        int                 mat_rpl;
        int                 layer_pass;
    };

    struct OpacityGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 flag;
        float               factor;
        char                modify_color;
        char                opacity_mode;
        char                _pad[2];
        int                 layer_pass;
        char                _pad1[4];
    };

    struct ColorGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        int                 pass_index;
        int                 flag;
        float               hsv[3];
        char                modify_color;
        char                _pad[3];
        int                 layer_pass;
        char                _pad1[4];
    };

    struct TintGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        int                 pass_index;
        int                 flag;
        float               rgb[3];
        float               factor;
        char                modify_color;
        char                _pad[7];
        int                 layer_pass;
        char                _pad1[4];
    };

    struct TimeGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        int                 layer_pass;
        int                 flag;
        int                 offset;
        float               frame_scale;
        int                 mode;
        int                 sfra;
        int                 efra;
        char                _pad[4];
    };

    struct ThickGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 flag;
        int                 thickness;
        int                 layer_pass;
        CurveMapping *      curve_thickness;
    };

    struct SubdivGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        int                 pass_index;
        int                 flag;
        int                 level;
        int                 layer_pass;
    };

    struct NoiseGpencilModifierData
    {
        GpencilModifierData modifier;
        char                layername[64];
        char                materialname[64];
        char                vgname[64];
        int                 pass_index;
        int                 flag;
        float               factor;
        int                 step;
        int                 layer_pass;
        int                 seed;
    };

    struct bGPdata
    {
        ID              id;
        AnimData *      adt;
        ListBase        layers;
        int             flag;
        char            _pad1[4];
        ListBase        palettes;
        float           pixfactor;
        float           line_color[4];
        float           onion_factor;
        int             onion_mode;
        int             onion_flag;
        short           gstep;
        short           gstep_next;
        float           gcolor_prev[3];
        float           gcolor_next[3];
        float           zdepth_offset;
        Material **     mat;
        short           totcol;
        short           totlayer;
        short           totframe;
        char            _pad2[6];
        int             totstroke;
        int             totpoint;
        short           draw_mode;
        short           onion_keytype;
        bGPgrid         grid;
        bGPdata_Runtime runtime;
    };

    struct bGPDlayer
    {
        bGPDlayer *       next;
        bGPDlayer *       prev;
        ListBase          frames;
        bGPDframe *       actframe;
        short             flag;
        short             onion_flag;
        float             color[4];
        float             fill[4];
        char              info[128];
        short             thickness;
        short             pass_index;
        Object *          parent;
        float             inverse[4][4];
        char              parsubstr[64];
        short             partype;
        short             line_change;
        float             tintcolor[4];
        float             opacity;
        char              viewlayername[64];
        int               blend_mode;
        char              _pad[4];
        short             gstep;
        short             gstep_next;
        float             gcolor_prev[3];
        float             gcolor_next[3];
        char              _pad1[4];
        bGPDlayer_Runtime runtime;
    };

    struct bGPDframe
    {
        bGPDframe *       next;
        bGPDframe *       prev;
        ListBase          strokes;
        int               framenum;
        short             flag;
        short             key_type;
        bGPDframe_Runtime runtime;
    };

    struct bGPDstroke
    {
        bGPDstroke *       next;
        bGPDstroke *       prev;
        bGPDspoint *       points;
        bGPDtriangle *     triangles;
        int                totpoints;
        int                tot_triangles;
        short              thickness;
        short              flag;
        short              _pad[2];
        double             inittime;
        char               colorname[128];
        int                mat_nr;
        short              caps[2];
        float              gradient_f;
        float              gradient_s[2];
        char               _pad_3[4];
        MDeformVert *      dvert;
        void *             _pad3;
        bGPDstroke_Runtime runtime;
    };

    struct bGPDpalette
    {
        bGPDpalette *next;
        bGPDpalette *prev;
        ListBase     colors;
        char         info[64];
        short        flag;
        char         _pad[6];
    };

    struct bGPDspoint
    {
        float              x;
        float              y;
        float              z;
        float              pressure;
        float              strength;
        float              time;
        int                flag;
        float              uv_fac;
        float              uv_rot;
        char               _pad2[4];
        bGPDspoint_Runtime runtime;
    };

    struct ParticleSystem
    {
        ParticleSystem *  next;
        ParticleSystem *  prev;
        ParticleSettings *part;
        ParticleData *    particles;
        ChildParticle *   child;
        PTCacheEdit *     edit;
        void (*free_edit)();
        ParticleCacheKey **pathcache;
        ParticleCacheKey **childcache;
        ListBase           pathcachebufs;
        ListBase           childcachebufs;
        ClothModifierData *clmd;
        Mesh *             hair_in_mesh;
        Mesh *             hair_out_mesh;
        Object *           target_ob;
        LatticeDeformData *lattice_deform_data;
        Object *           parent;
        ListBase           targets;
        char               name[64];
        float              imat[4][4];
        float              cfra;
        float              tree_frame;
        float              bvhtree_frame;
        int                seed;
        int                child_seed;
        int                flag;
        int                totpart;
        int                totunexist;
        int                totchild;
        int                totcached;
        int                totchildcache;
        int                recalc;
        short              target_psys;
        short              totkeyed;
        short              bakespace;
        char               _pad1[6];
        char               bb_uvname[3][64];
        short              vgroup[13];
        short              vg_neg;
        short              rt3;
        char               _pad[6];
        PointCache *       pointcache;
        ListBase           ptcaches;
        ListBase *         effectors;
        ParticleSpring *   fluid_springs;
        int                tot_fluidsprings;
        int                alloc_fluidsprings;
        KDTree_3d *        tree;
        BVHTree *          bvhtree;
        ParticleDrawData * pdd;
        float              dt_frac;
        float              lattice_strength;
        void *             batch_cache;
        ParticleSystem *   orig_psys;
    };

    struct ParticleSettings
    {
        ID                id;
        AnimData *        adt;
        BoidSettings *    boids;
        SPHFluidSettings *fluid;
        EffectorWeights * effector_weights;
        Collection *      collision_group;
        int               flag;
        int               rt;
        short             type;
        short             from;
        short             distr;
        short             texact;
        short             phystype;
        short             rotmode;
        short             avemode;
        short             reactevent;
        int               draw;
        float             draw_size;
        short             draw_as;
        short             childtype;
        char              _pad2[4];
        short             ren_as;
        short             subframes;
        short             draw_col;
        short             draw_step;
        short             ren_step;
        short             hair_step;
        short             keys_step;
        short             adapt_angle;
        short             adapt_pix;
        short             disp;
        short             omat;
        short             interpolation;
        short             integrator;
        short             rotfrom;
        short             kink;
        short             kink_axis;
        short             bb_align;
        short             bb_uv_split;
        short             bb_anim;
        short             bb_split_offset;
        float             bb_tilt;
        float             bb_rand_tilt;
        float             bb_offset[2];
        float             bb_size[2];
        float             bb_vel_head;
        float             bb_vel_tail;
        float             color_vec_max;
        float             sta;
        float             end;
        float             lifetime;
        float             randlife;
        float             timetweak;
        float             courant_target;
        float             jitfac;
        float             eff_hair;
        float             grid_rand;
        float             ps_offset[1];
        int               totpart;
        int               userjit;
        int               grid_res;
        int               effector_amount;
        short             time_flag;
        char              _pad0[6];
        float             normfac;
        float             obfac;
        float             randfac;
        float             partfac;
        float             tanfac;
        float             tanphase;
        float             reactfac;
        float             ob_vel[3];
        float             avefac;
        float             phasefac;
        float             randrotfac;
        float             randphasefac;
        float             mass;
        float             size;
        float             randsize;
        float             acc[3];
        float             dragfac;
        float             brownfac;
        float             dampfac;
        float             randlength;
        int               child_flag;
        char              _pad3[4];
        int               child_nbr;
        int               ren_child_nbr;
        float             parents;
        float             childsize;
        float             childrandsize;
        float             childrad;
        float             childflat;
        float             clumpfac;
        float             clumppow;
        float             kink_amp;
        float             kink_freq;
        float             kink_shape;
        float             kink_flat;
        float             kink_amp_clump;
        int               kink_extra_steps;
        char              _pad4[4];
        float             kink_axis_random;
        float             kink_amp_random;
        float             rough1;
        float             rough1_size;
        float             rough2;
        float             rough2_size;
        float             rough2_thres;
        float             rough_end;
        float             rough_end_shape;
        float             clength;
        float             clength_thres;
        float             parting_fac;
        float             parting_min;
        float             parting_max;
        float             branch_thres;
        float             draw_line[2];
        float             path_start;
        float             path_end;
        int               trail_count;
        int               keyed_loops;
        CurveMapping *    clumpcurve;
        CurveMapping *    roughcurve;
        float             clump_noise_size;
        float             bending_random;
        MTex *            mtex[18];
        Collection *      dup_group;
        ListBase          dupliweights;
        Collection *      force_group;
        Object *          dup_ob;
        Object *          bb_ob;
        Ipo *             ipo;
        PartDeflect *     pd;
        PartDeflect *     pd2;
        short             use_modifier_stack;
        char              _pad5[2];
        short             shape_flag;
        char              _pad6[2];
        float             twist;
        char              _pad8[4];
        float             shape;
        float             rad_root;
        float             rad_tip;
        float             rad_scale;
        CurveMapping *    twistcurve;
        void *            _pad7;
    };

    struct ParticleData
    {
        ParticleKey   state;
        ParticleKey   prev_state;
        HairKey *     hair;
        ParticleKey * keys;
        BoidParticle *boid;
        int           totkey;
        float         time;
        float         lifetime;
        float         dietime;
        int           num;
        int           num_dmcache;
        float         fuv[4];
        float         foffset;
        float         size;
        float         sphdensity;
        char          _pad[4];
        int           hair_index;
        short         flag;
        short         alive;
    };

    struct BoidParticle
    {
        Object * ground;
        BoidData data;
        float    gravity[3];
        float    wander[3];
        float    rt;
    };

    struct PaintCurve
    {
        ID               id;
        PaintCurvePoint *points;
        int              tot_points;
        int              add_index;
    };

    struct PaintCurvePoint
    {
        BezTriple bez;
        float     pressure;
    };

    struct Palette
    {
        ID       id;
        ListBase colors;
        int      active_color;
        char     _pad[4];
    };

    struct Brush
    {
        ID                    id;
        BrushClone            clone;
        CurveMapping *        curve;
        MTex                  mtex;
        MTex                  mask_mtex;
        Brush *               toggle_brush;
        ImBuf *               icon_imbuf;
        PreviewImage *        preview;
        ColorBand *           gradient;
        PaintCurve *          paint_curve;
        char                  icon_filepath[1024];
        float                 normal_weight;
        float                 rake_factor;
        short                 blend;
        short                 ob_mode;
        float                 weight;
        int                   size;
        int                   flag;
        int                   flag2;
        int                   sampling_flag;
        int                   mask_pressure;
        float                 jitter;
        int                   jitter_absolute;
        int                   overlay_flags;
        int                   spacing;
        int                   smooth_stroke_radius;
        float                 smooth_stroke_factor;
        float                 rate;
        float                 rgb[3];
        float                 alpha;
        float                 secondary_rgb[3];
        float                 dash_ratio;
        int                   dash_samples;
        int                   sculpt_plane;
        float                 plane_offset;
        int                   gradient_spacing;
        char                  gradient_stroke_mode;
        char                  gradient_fill_mode;
        char                  _pad0;
        char                  falloff_shape;
        float                 falloff_angle;
        char                  sculpt_tool;
        char                  uv_sculpt_tool;
        char                  vertexpaint_tool;
        char                  weightpaint_tool;
        char                  imagepaint_tool;
        char                  mask_tool;
        char                  gpencil_tool;
        char                  _pad1[5];
        float                 autosmooth_factor;
        float                 topology_rake_factor;
        float                 crease_pinch_factor;
        float                 normal_radius_factor;
        float                 plane_trim;
        float                 height;
        float                 texture_sample_bias;
        int                   curve_preset;
        int                   automasking_flags;
        int                   elastic_deform_type;
        float                 elastic_deform_volume_preservation;
        float                 pose_offset;
        int                   pose_smooth_iterations;
        char                  _pad2[4];
        float                 multiplane_scrape_angle;
        int                   texture_overlay_alpha;
        int                   mask_overlay_alpha;
        int                   cursor_overlay_alpha;
        float                 unprojected_radius;
        float                 sharp_threshold;
        int                   blur_kernel_radius;
        int                   blur_mode;
        float                 fill_threshold;
        float                 add_col[3];
        float                 sub_col[3];
        float                 stencil_pos[2];
        float                 stencil_dimension[2];
        float                 mask_stencil_pos[2];
        float                 mask_stencil_dimension[2];
        BrushGpencilSettings *gpencil_settings;
    };

    struct Scopes
    {
        int       ok;
        int       sample_full;
        int       sample_lines;
        float     accuracy;
        int       wavefrm_mode;
        float     wavefrm_alpha;
        float     wavefrm_yfac;
        int       wavefrm_height;
        float     vecscope_alpha;
        int       vecscope_height;
        float     minmax[3][2];
        Histogram hist;
        float *   waveform_1;
        float *   waveform_2;
        float *   waveform_3;
        float *   vecscope;
        int       waveform_tot;
        char      _pad[4];
    };

    struct CurveMapping
    {
        int      flag;
        int      cur;
        int      preset;
        int      changed_timestamp;
        rctf     curr;
        rctf     clipr;
        CurveMap cm[4];
        float    black[3];
        float    white[3];
        float    bwmul[3];
        float    sample[3];
        short    tone;
        char     _pad[6];
    };

    struct NodeColorCorrection
    {
        ColorCorrectionData master;
        ColorCorrectionData shadows;
        ColorCorrectionData midtones;
        ColorCorrectionData highlights;
        float               startmidtones;
        float               endmidtones;
    };

    struct bNodeTree
    {
        ID                 id;
        AnimData *         adt;
        bNodeTreeType *    typeinfo;
        char               idname[64];
        StructRNA *        interface_type;
        bGPdata *          gpd;
        float              view_center[2];
        ListBase           nodes;
        ListBase           links;
        int                type;
        int                init;
        int                cur_index;
        int                flag;
        int                update;
        short              is_updating;
        short              done;
        char               _pad2[4];
        int                nodetype;
        short              edit_quality;
        short              render_quality;
        int                chunksize;
        rctf               viewer_border;
        ListBase           inputs;
        ListBase           outputs;
        bNodeInstanceHash *previews;
        bNodeInstanceKey   active_viewer_key;
        char               _pad[4];
        bNodeTreeExec *    execdata;
        void (*progress)();
        void (*stats_draw)();
        int (*test_break)();
        void (*update_draw)();
        void *tbh;
        void *prh;
        void *sdh;
        void *udh;
    };

    struct bNode
    {
        bNode *     next;
        bNode *     prev;
        bNode *     new_node;
        IDProperty *prop;
        bNodeType * typeinfo;
        char        idname[64];
        char        name[64];
        int         flag;
        short       type;
        char        _pad[2];
        short       done;
        short       level;
        short       lasty;
        short       menunr;
        short       stack_index;
        short       nr;
        float       color[3];
        ListBase    inputs;
        ListBase    outputs;
        bNode *     parent;
        ID *        id;
        void *      storage;
        bNode *     original;
        ListBase    internal_links;
        float       locx;
        float       locy;
        float       width;
        float       height;
        float       miniwidth;
        float       offsetx;
        float       offsety;
        float       anim_init_locx;
        float       anim_ofsx;
        int         update;
        char        label[64];
        short       custom1;
        short       custom2;
        float       custom3;
        float       custom4;
        short       need_exec;
        short       exec;
        void *      threaddata;
        rctf        totr;
        rctf        butr;
        rctf        prvr;
        short       preview_xsize;
        short       preview_ysize;
        short       tmp_flag;
        char        branch_tag;
        char        iter_flag;
        uiBlock *   block;
        float       ssr_id;
        float       sss_id;
    };

    struct bNodeSocket
    {
        bNodeSocket *    next;
        bNodeSocket *    prev;
        bNodeSocket *    new_sock;
        IDProperty *     prop;
        char             identifier[64];
        char             name[64];
        void *           storage;
        short            type;
        short            flag;
        short            limit;
        short            in_out;
        bNodeSocketType *typeinfo;
        char             idname[64];
        float            locx;
        float            locy;
        void *           default_value;
        short            stack_index;
        short            stack_type;
        char             display_shape;
        char             _pad[3];
        void *           cache;
        int              own_index;
        int              to_index;
        bNodeSocket *    groupsock;
        bNodeLink *      link;
        bNodeStack       ns;
    };

    struct bActionStrip
    {
        bActionStrip *next;
        bActionStrip *prev;
        short         flag;
        short         mode;
        short         stride_axis;
        short         curmod;
        Ipo *         ipo;
        bAction *     act;
        Object *      object;
        float         start;
        float         end;
        float         actstart;
        float         actend;
        float         actoffs;
        float         stridelen;
        float         repeat;
        float         scale;
        float         blendin;
        float         blendout;
        char          stridechannel[32];
        char          offs_bone[32];
        ListBase      modifiers;
    };

    struct bArmatureConstraint
    {
        int      flag;
        char     _pad[4];
        ListBase targets;
    };

    struct bPythonConstraint
    {
        Text *      text;
        IDProperty *prop;
        int         flag;
        int         tarnum;
        ListBase    targets;
        Object *    tar;
        char        subtarget[64];
    };

    struct bActionChannel
    {
        bActionChannel *next;
        bActionChannel *prev;
        bActionGroup *  grp;
        Ipo *           ipo;
        ListBase        constraintChannels;
        int             flag;
        char            name[64];
        int             temp;
    };

    struct bDopeSheet
    {
        ID *        source;
        ListBase    chanbase;
        Collection *filter_grp;
        char        searchstr[64];
        int         filterflag;
        int         filterflag2;
        int         flag;
        int         renameIndex;
    };

    struct bAction
    {
        ID       id;
        ListBase curves;
        ListBase chanbase;
        ListBase groups;
        ListBase markers;
        int      flag;
        int      active_marker;
        int      idroot;
        char     _pad[4];
    };

    struct bActionGroup
    {
        bActionGroup * next;
        bActionGroup * prev;
        ListBase       channels;
        int            flag;
        int            customCol;
        char           name[64];
        ThemeWireColor cs;
    };

    struct bPose
    {
        ListBase         chanbase;
        GHash *          chanhash;
        bPoseChannel **  chan_array;
        short            flag;
        char             _pad[2];
        int              proxy_layer;
        char             _pad1[4];
        float            ctime;
        float            stride_offset[3];
        float            cyclic_offset[3];
        ListBase         agroups;
        int              active_group;
        int              iksolver;
        void *           ikdata;
        void *           ikparam;
        bAnimVizSettings avs;
        char             proxy_act_bone[64];
    };

    struct bPoseChannel_Runtime
    {
        DualQuat  deform_dual_quat;
        int       bbone_segments;
        Mat4 *    bbone_rest_mats;
        Mat4 *    bbone_pose_mats;
        Mat4 *    bbone_deform_mats;
        DualQuat *bbone_dual_quats;
    };

    struct bArmature
    {
        ID        id;
        AnimData *adt;
        ListBase  bonebase;
        GHash *   bonehash;
        void *    _pad1;
        ListBase *edbo;
        Bone *    act_bone;
        EditBone *act_edbone;
        char      needs_flush_to_id;
        char      _pad0[7];
        int       flag;
        int       drawtype;
        short     deformflag;
        short     pathflag;
        int       layer_used;
        int       layer;
        int       layer_protected;
    };

    struct Bone
    {
        Bone *      next;
        Bone *      prev;
        IDProperty *prop;
        Bone *      parent;
        ListBase    childbase;
        char        name[64];
        float       roll;
        float       head[3];
        float       tail[3];
        float       bone_mat[3][3];
        int         flag;
        char        inherit_scale_mode;
        char        _pad[7];
        float       arm_head[3];
        float       arm_tail[3];
        float       arm_mat[4][4];
        float       arm_roll;
        float       dist;
        float       weight;
        float       xwidth;
        float       length;
        float       zwidth;
        float       rad_head;
        float       rad_tail;
        float       roll1;
        float       roll2;
        float       curveInX;
        float       curveInY;
        float       curveOutX;
        float       curveOutY;
        float       ease1;
        float       ease2;
        float       scaleIn;
        float       scale_in_y;
        float       scaleOut;
        float       scale_out_y;
        float       size[3];
        int         layer;
        short       segments;
        char        bbone_prev_type;
        char        bbone_next_type;
        Bone *      bbone_prev;
        Bone *      bbone_next;
    };

    struct Collection
    {
        ID               id;
        ListBase         gobject;
        ListBase         children;
        PreviewImage *   preview;
        int              layer;
        float            dupli_ofs[3];
        short            flag;
        short            tag;
        char             _pad[4];
        ListBase         object_cache;
        ListBase         parents;
        SceneCollection *collection;
        ViewLayer *      view_layer;
    };

    struct bSound
    {
        ID          id;
        char        name[1024];
        PackedFile *packedfile;
        void *      handle;
        PackedFile *newpackedfile;
        Ipo *       ipo;
        float       volume;
        float       attenuation;
        float       pitch;
        float       min_gain;
        float       max_gain;
        float       distance;
        short       flags;
        short       tags;
        char        _pad[4];
        void *      cache;
        void *      waveform;
        void *      playback_handle;
        void *      spinlock;
    };

    struct SequencerTonemapModifierData
    {
        SequenceModifierData modifier;
        float                key;
        float                offset;
        float                gamma;
        float                intensity;
        float                contrast;
        float                adaptation;
        float                correction;
        int                  type;
    };

    struct WhiteBalanceModifierData
    {
        SequenceModifierData modifier;
        float                white_value[3];
        char                 _pad[4];
    };

    struct SequencerMaskModifierData
    {
        SequenceModifierData modifier;
    };

    struct BrightContrastModifierData
    {
        SequenceModifierData modifier;
        float                bright;
        float                contrast;
    };

    struct ColorBalanceModifierData
    {
        SequenceModifierData modifier;
        StripColorBalance    color_balance;
        float                color_multiply;
    };

    struct Editing
    {
        ListBase *   seqbasep;
        ListBase     seqbase;
        ListBase     metastack;
        Sequence *   act_seq;
        char         act_imagedir[1024];
        char         act_sounddir[1024];
        char         proxy_dir[1024];
        int          over_ofs;
        int          over_cfra;
        int          over_flag;
        int          proxy_storage;
        rctf         over_border;
        SeqCache *   cache;
        float        recycle_max_cost;
        int          cache_flag;
        PrefetchJob *prefetch_job;
    };

    struct Sequence
    {
        Sequence *      next;
        Sequence *      prev;
        void *          tmp;
        void *          lib;
        char            name[64];
        int             flag;
        int             type;
        int             len;
        int             start;
        int             startofs;
        int             endofs;
        int             startstill;
        int             endstill;
        int             machine;
        int             depth;
        int             startdisp;
        int             enddisp;
        float           sat;
        float           mul;
        float           handsize;
        short           anim_preseek;
        short           streamindex;
        int             multicam_source;
        int             clip_flag;
        Strip *         strip;
        Ipo *           ipo;
        Scene *         scene;
        Object *        scene_camera;
        MovieClip *     clip;
        Mask *          mask;
        ListBase        anims;
        float           effect_fader;
        float           speed_fader;
        Sequence *      seq1;
        Sequence *      seq2;
        Sequence *      seq3;
        ListBase        seqbase;
        bSound *        sound;
        void *          scene_sound;
        float           volume;
        float           pitch;
        float           pan;
        float           strobe;
        void *          effectdata;
        int             anim_startofs;
        int             anim_endofs;
        int             blend_mode;
        float           blend_opacity;
        int             sfra;
        char            alpha_mode;
        char            _pad[2];
        char            views_format;
        Stereo3dFormat *stereo3d_format;
        IDProperty *    prop;
        ListBase        modifiers;
        int             cache_flag;
        int             _pad2[3];
        Sequence *      orig_sequence;
        void *          _pad3;
    };

    struct Strip
    {
        Strip *                        next;
        Strip *                        prev;
        int                            us;
        int                            done;
        int                            startstill;
        int                            endstill;
        StripElem *                    stripdata;
        char                           dir[768];
        StripProxy *                   proxy;
        StripCrop *                    crop;
        StripTransform *               transform;
        StripColorBalance *            color_balance;
        ColorManagedColorspaceSettings colorspace_settings;
    };

    struct ARegion_Runtime
    {
        char *category;
        rcti  visible_rect;
        int   offset_x;
        int   offset_y;
    };

    struct ScrArea
    {
        ScrArea *          next;
        ScrArea *          prev;
        ScrVert *          v1;
        ScrVert *          v2;
        ScrVert *          v3;
        ScrVert *          v4;
        bScreen *          full;
        rcti               totrct;
        char               spacetype;
        char               butspacetype;
        short              butspacetype_subtype;
        short              winx;
        short              winy;
        char               headertype;
        char               do_refresh;
        short              flag;
        short              region_active_win;
        char               _pad[2];
        SpaceType *        type;
        ScrGlobalAreaData *global;
        ListBase           spacedata;
        ListBase           regionbase;
        ListBase           handlers;
        ListBase           actionzones;
        ScrArea_Runtime    runtime;
    };

    struct Panel
    {
        Panel *    next;
        Panel *    prev;
        PanelType *type;
        uiLayout * layout;
        char       panelname[64];
        char       drawname[64];
        int        ofsx;
        int        ofsy;
        int        sizex;
        int        sizey;
        int        blocksizex;
        int        blocksizey;
        short      labelofs;
        char       _pad[2];
        short      flag;
        short      runtime_flag;
        short      control;
        short      snap;
        int        sortorder;
        void *     activedata;
        ListBase   children;
    };

    struct ScrAreaMap
    {
        ListBase vertbase;
        ListBase edgebase;
        ListBase areabase;
    };

    struct ScrVert
    {
        ScrVert *next;
        ScrVert *prev;
        ScrVert *newv;
        vec2s    vec;
        short    flag;
        short    editflag;
    };

    struct bScreen
    {
        ID              id;
        ListBase        vertbase;
        ListBase        edgebase;
        ListBase        areabase;
        ListBase        regionbase;
        Scene *         scene;
        short           flag;
        short           winid;
        short           redraws_flag;
        char            temp;
        char            state;
        char            do_draw;
        char            do_refresh;
        char            do_draw_gesture;
        char            do_draw_paintcursor;
        char            do_draw_drag;
        char            skip_handling;
        char            scrubbing;
        char            _pad[1];
        ARegion *       active_region;
        wmTimer *       animtimer;
        void *          context;
        wmTooltipState *tool_tip;
        PreviewImage *  preview;
    };

    struct bUserMenuItem_Prop
    {
        bUserMenuItem item;
        char          context_data_path[256];
        char          prop_id[64];
        int           prop_index;
        char          _pad0[4];
    };

    struct bUserMenuItem_Menu
    {
        bUserMenuItem item;
        char          mt_idname[64];
    };

    struct bUserMenuItem_Op
    {
        bUserMenuItem item;
        char          op_idname[64];
        IDProperty *  prop;
        char          opcontext;
        char          _pad0[7];
    };

    struct bUserMenu
    {
        bUserMenu *next;
        bUserMenu *prev;
        char       space_type;
        char       _pad0[7];
        char       context[64];
        ListBase   items;
    };

    struct ThemeSpace
    {
        char          back[4];
        char          back_grad[4];
        char          show_back_grad;
        char          _pad0[3];
        char          title[4];
        char          text[4];
        char          text_hi[4];
        char          header[4];
        char          header_title[4];
        char          header_text[4];
        char          header_text_hi[4];
        char          tab_active[4];
        char          tab_inactive[4];
        char          tab_back[4];
        char          tab_outline[4];
        char          button[4];
        char          button_title[4];
        char          button_text[4];
        char          button_text_hi[4];
        char          list[4];
        char          list_title[4];
        char          list_text[4];
        char          list_text_hi[4];
        char          navigation_bar[4];
        char          execution_buts[4];
        uiPanelColors panelcolors;
        char          shade1[4];
        char          shade2[4];
        char          hilite[4];
        char          grid[4];
        char          view_overlay[4];
        char          wire[4];
        char          wire_edit[4];
        char          select[4];
        char          lamp[4];
        char          speaker[4];
        char          empty[4];
        char          camera[4];
        char          active[4];
        char          group[4];
        char          group_active[4];
        char          transform[4];
        char          vertex[4];
        char          vertex_select[4];
        char          vertex_bevel[4];
        char          vertex_unreferenced[4];
        char          edge[4];
        char          edge_select[4];
        char          edge_seam[4];
        char          edge_sharp[4];
        char          edge_facesel[4];
        char          edge_crease[4];
        char          edge_bevel[4];
        char          face[4];
        char          face_select[4];
        char          face_back[4];
        char          face_front[4];
        char          face_dot[4];
        char          extra_edge_len[4];
        char          extra_edge_angle[4];
        char          extra_face_angle[4];
        char          extra_face_area[4];
        char          normal[4];
        char          vertex_normal[4];
        char          loop_normal[4];
        char          bone_solid[4];
        char          bone_pose[4];
        char          bone_pose_active[4];
        char          strip[4];
        char          strip_select[4];
        char          cframe[4];
        char          time_keyframe[4];
        char          time_gp_keyframe[4];
        char          freestyle_edge_mark[4];
        char          freestyle_face_mark[4];
        char          scrubbing_background[4];
        char          _pad5[4];
        char          nurb_uline[4];
        char          nurb_vline[4];
        char          act_spline[4];
        char          nurb_sel_uline[4];
        char          nurb_sel_vline[4];
        char          lastsel_point[4];
        char          handle_free[4];
        char          handle_auto[4];
        char          handle_vect[4];
        char          handle_align[4];
        char          handle_auto_clamped[4];
        char          handle_sel_free[4];
        char          handle_sel_auto[4];
        char          handle_sel_vect[4];
        char          handle_sel_align[4];
        char          handle_sel_auto_clamped[4];
        char          ds_channel[4];
        char          ds_subchannel[4];
        char          ds_ipoline[4];
        char          keytype_keyframe[4];
        char          keytype_extreme[4];
        char          keytype_breakdown[4];
        char          keytype_jitter[4];
        char          keytype_movehold[4];
        char          keytype_keyframe_select[4];
        char          keytype_extreme_select[4];
        char          keytype_breakdown_select[4];
        char          keytype_jitter_select[4];
        char          keytype_movehold_select[4];
        char          keyborder[4];
        char          keyborder_select[4];
        char          _pad4[3];
        char          console_output[4];
        char          console_input[4];
        char          console_info[4];
        char          console_error[4];
        char          console_cursor[4];
        char          console_select[4];
        char          vertex_size;
        char          outline_width;
        char          obcenter_dia;
        char          facedot_size;
        char          noodle_curving;
        char          syntaxl[4];
        char          syntaxs[4];
        char          syntaxb[4];
        char          syntaxn[4];
        char          syntaxv[4];
        char          syntaxc[4];
        char          syntaxd[4];
        char          syntaxr[4];
        char          line_numbers[4];
        char          _pad6[4];
        char          nodeclass_output[4];
        char          nodeclass_filter[4];
        char          nodeclass_vector[4];
        char          nodeclass_texture[4];
        char          nodeclass_shader[4];
        char          nodeclass_script[4];
        char          nodeclass_pattern[4];
        char          nodeclass_layout[4];
        char          movie[4];
        char          movieclip[4];
        char          mask[4];
        char          image[4];
        char          scene[4];
        char          audio[4];
        char          effect[4];
        char          transition[4];
        char          meta[4];
        char          text_strip[4];
        float         keyframe_scale_fac;
        char          editmesh_active[4];
        char          handle_vertex[4];
        char          handle_vertex_select[4];
        char          handle_vertex_size;
        char          clipping_border_3d[4];
        char          marker_outline[4];
        char          marker[4];
        char          act_marker[4];
        char          sel_marker[4];
        char          dis_marker[4];
        char          lock_marker[4];
        char          bundle_solid[4];
        char          path_before[4];
        char          path_after[4];
        char          path_keyframe_before[4];
        char          path_keyframe_after[4];
        char          camera_path[4];
        char          _pad1[2];
        char          gp_vertex_size;
        char          gp_vertex[4];
        char          gp_vertex_select[4];
        char          preview_back[4];
        char          preview_stitch_face[4];
        char          preview_stitch_edge[4];
        char          preview_stitch_vert[4];
        char          preview_stitch_stitchable[4];
        char          preview_stitch_unstitchable[4];
        char          preview_stitch_active[4];
        char          uv_shadow[4];
        char          uv_others[4];
        char          match[4];
        char          selected_highlight[4];
        char          selected_object[4];
        char          active_object[4];
        char          edited_object[4];
        char          row_alternate[4];
        char          skin_root[4];
        char          anim_active[4];
        char          anim_non_active[4];
        char          anim_preview_range[4];
        char          nla_tweaking[4];
        char          nla_tweakdupli[4];
        char          nla_track[4];
        char          nla_transition[4];
        char          nla_transition_sel[4];
        char          nla_meta[4];
        char          nla_meta_sel[4];
        char          nla_sound[4];
        char          nla_sound_sel[4];
        char          info_selected[4];
        char          info_selected_text[4];
        char          info_error[4];
        char          info_error_text[4];
        char          info_warning[4];
        char          info_warning_text[4];
        char          info_info[4];
        char          info_info_text[4];
        char          info_debug[4];
        char          info_debug_text[4];
        char          paint_curve_pivot[4];
        char          paint_curve_handle[4];
        char          metadatabg[4];
        char          metadatatext[4];
    };

    struct ThemeUI
    {
        uiWidgetColors      wcol_regular;
        uiWidgetColors      wcol_tool;
        uiWidgetColors      wcol_toolbar_item;
        uiWidgetColors      wcol_text;
        uiWidgetColors      wcol_radio;
        uiWidgetColors      wcol_option;
        uiWidgetColors      wcol_toggle;
        uiWidgetColors      wcol_num;
        uiWidgetColors      wcol_numslider;
        uiWidgetColors      wcol_tab;
        uiWidgetColors      wcol_menu;
        uiWidgetColors      wcol_pulldown;
        uiWidgetColors      wcol_menu_back;
        uiWidgetColors      wcol_menu_item;
        uiWidgetColors      wcol_tooltip;
        uiWidgetColors      wcol_box;
        uiWidgetColors      wcol_scroll;
        uiWidgetColors      wcol_progress;
        uiWidgetColors      wcol_list_item;
        uiWidgetColors      wcol_pie_menu;
        uiWidgetStateColors wcol_state;
        char                widget_emboss[4];
        float               menu_shadow_fac;
        short               menu_shadow_width;
        char                editor_outline[4];
        char                _pad0[2];
        float               icon_alpha;
        float               icon_saturation;
        char                widget_text_cursor[4];
        char                xaxis[4];
        char                yaxis[4];
        char                zaxis[4];
        char                gizmo_hi[4];
        char                gizmo_primary[4];
        char                gizmo_secondary[4];
        char                gizmo_a[4];
        char                gizmo_b[4];
        char                icon_scene[4];
        char                icon_collection[4];
        char                icon_object[4];
        char                icon_object_data[4];
        char                icon_modifier[4];
        char                icon_shading[4];
        char                icon_folder[4];
        char                _pad2[4];
        float               icon_border_intensity;
    };

    struct uiStyle
    {
        uiStyle *   next;
        uiStyle *   prev;
        char        name[64];
        uiFontStyle paneltitle;
        uiFontStyle grouplabel;
        uiFontStyle widgetlabel;
        uiFontStyle widget;
        float       panelzoom;
        short       minlabelchars;
        short       minwidgetchars;
        short       columnspace;
        short       templatespace;
        short       boxspace;
        short       buttonspacex;
        short       buttonspacey;
        short       panelspace;
        short       panelouter;
        char        _pad0[2];
    };

    struct SpaceUserPref
    {
        SpaceLink *next;
        SpaceLink *prev;
        ListBase   regionbase;
        char       spacetype;
        char       link_flag;
        char       _pad0[6];
        char       _pad1[7];
        char       filter_type;
        char       filter[64];
    };

    struct SpaceConsole
    {
        SpaceLink *next;
        SpaceLink *prev;
        ListBase   regionbase;
        char       spacetype;
        char       link_flag;
        char       _pad0[6];
        int        lheight;
        char       _pad[4];
        ListBase   scrollback;
        ListBase   history;
        char       prompt[256];
        char       language[32];
        int        sel_start;
        int        sel_end;
    };

    struct bNodeTreePath
    {
        bNodeTreePath *  next;
        bNodeTreePath *  prev;
        bNodeTree *      nodetree;
        bNodeInstanceKey parent_key;
        char             _pad[4];
        float            view_center[2];
        char             node_name[64];
    };

    struct SpaceScript
    {
        SpaceLink *next;
        SpaceLink *prev;
        ListBase   regionbase;
        char       spacetype;
        char       link_flag;
        char       _pad0[6];
        Script *   script;
        short      flags;
        short      menunr;
        char       _pad1[4];
        void *     but_refs;
    };

    struct Script
    {
        ID    id;
        void *py_draw;
        void *py_event;
        void *py_button;
        void *py_browsercallback;
        void *py_globaldict;
        int   flags;
        int   lastspace;
        char  scriptname[1024];
        char  scriptarg[256];
    };

    struct SpaceText_Runtime
    {
        int   lheight_px;
        int   cwidth_px;
        rcti  scroll_region_handle;
        rcti  scroll_region_select;
        int   line_number_display_digits;
        int   viewlines;
        float scroll_px_per_line;
        int   scroll_ofs_px[2];
        char  _pad1[4];
        void *drawcache;
    };

    struct SpaceFile
    {
        SpaceLink *       next;
        SpaceLink *       prev;
        ListBase          regionbase;
        char              spacetype;
        char              link_flag;
        char              _pad0[6];
        char              _pad1[4];
        int               scroll_offset;
        FileSelectParams *params;
        FileList *        files;
        ListBase *        folders_prev;
        ListBase *        folders_next;
        wmOperator *      op;
        wmTimer *         smoothscroll_timer;
        wmTimer *         previews_timer;
        FileLayout *      layout;
        short             recentnr;
        short             bookmarknr;
        short             systemnr;
        short             system_bookmarknr;
    };

    struct SpaceGraph_Runtime
    {
        char     flag;
        char     _pad[7];
        ListBase ghost_curves;
    };

    struct SpaceInfo
    {
        SpaceLink *next;
        SpaceLink *prev;
        ListBase   regionbase;
        char       spacetype;
        char       link_flag;
        char       _pad0[6];
        char       rpt_mask;
        char       _pad[7];
    };

    struct SpaceLink
    {
        SpaceLink *next;
        SpaceLink *prev;
        ListBase   regionbase;
        char       spacetype;
        char       link_flag;
        char       _pad0[6];
    };

    struct View2D
    {
        rctf               tot;
        rctf               cur;
        rcti               vert;
        rcti               hor;
        rcti               mask;
        float              min[2];
        float              max[2];
        float              minzoom;
        float              maxzoom;
        short              scroll;
        short              scroll_ui;
        short              keeptot;
        short              keepzoom;
        short              keepofs;
        short              flag;
        short              align;
        short              winx;
        short              winy;
        short              oldwinx;
        short              oldwiny;
        short              around;
        float *            tab_offset;
        int                tab_num;
        int                tab_cur;
        char               alpha_vert;
        char               alpha_hor;
        char               _pad[6];
        SmoothView2DStore *sms;
        wmTimer *          smooth_timer;
    };

    struct View3D
    {
        SpaceLink *    next;
        SpaceLink *    prev;
        ListBase       regionbase;
        char           spacetype;
        char           link_flag;
        char           _pad0[6];
        float          viewquat[4];
        float          dist;
        float          bundle_size;
        char           bundle_drawtype;
        char           drawtype;
        char           _pad3[1];
        char           multiview_eye;
        int            object_type_exclude_viewport;
        int            object_type_exclude_select;
        short          persp;
        short          view;
        Object *       camera;
        Object *       ob_centre;
        rctf           render_border;
        View3D *       localvd;
        char           ob_centre_bone[64];
        short          local_view_uuid;
        char           _pad6[2];
        int            layact;
        short          local_collections_uuid;
        short          _pad7[3];
        short          ob_centre_cursor;
        short          scenelock;
        short          gp_flag;
        short          flag;
        int            flag2;
        float          lens;
        float          grid;
        float          near;
        float          far;
        float          ofs[3];
        char           _pad[1];
        char           gizmo_flag;
        char           gizmo_show_object;
        char           gizmo_show_armature;
        char           gizmo_show_empty;
        char           gizmo_show_light;
        char           gizmo_show_camera;
        char           gridflag;
        short          gridlines;
        short          gridsubdiv;
        float          vertex_opacity;
        bGPdata *      gpd;
        short          stereo3d_flag;
        char           stereo3d_camera;
        char           _pad4;
        float          stereo3d_convergence_factor;
        float          stereo3d_volume_alpha;
        float          stereo3d_convergence_alpha;
        View3DShading  shading;
        View3DOverlay  overlay;
        View3D_Runtime runtime;
    };

    struct SceneDisplay
    {
        float         light_direction[3];
        float         shadow_shift;
        float         shadow_focus;
        float         matcap_ssao_distance;
        float         matcap_ssao_attenuation;
        int           matcap_ssao_samples;
        char          viewport_aa;
        char          render_aa;
        char          _pad[6];
        View3DShading shading;
    };

    struct GP_Sculpt_Settings
    {
        GP_Sculpt_Data  brush[12];
        void *          paintcursor;
        int             brushtype;
        int             flag;
        int             lock_axis;
        float           isect_threshold;
        int             weighttype;
        char            _pad[4];
        CurveMapping *  cur_falloff;
        CurveMapping *  cur_primitive;
        GP_Sculpt_Guide guide;
    };

    struct ParticleEditSettings
    {
        short             flag;
        short             totrekey;
        short             totaddkey;
        short             brushtype;
        ParticleBrushData brush[7];
        void *            paintcursor;
        float             emitterdist;
        float             rt;
        int               selectmode;
        int               edittype;
        int               draw_step;
        int               fade_frames;
        Scene *           scene;
        Object *          object;
        Object *          shape_object;
    };

    struct Paint
    {
        Brush *        brush;
        PaintToolSlot *tool_slots;
        int            tool_slots_len;
        char           _pad1[4];
        Palette *      palette;
        CurveMapping * cavity_curve;
        void *         paint_cursor;
        char           paint_cursor_col[4];
        int            flags;
        int            num_input_samples;
        int            symmetry_flags;
        float          tile_offset[3];
        char           _pad2[4];
        Paint_Runtime  runtime;
    };

    struct ImageFormatData
    {
        char                        imtype;
        char                        depth;
        char                        planes;
        char                        flag;
        char                        quality;
        char                        compress;
        char                        exr_codec;
        char                        cineon_flag;
        short                       cineon_white;
        short                       cineon_black;
        float                       cineon_gamma;
        char                        jp2_flag;
        char                        jp2_codec;
        char                        tiff_codec;
        char                        _pad[4];
        char                        views_format;
        Stereo3dFormat              stereo3d_format;
        ColorManagedViewSettings    view_settings;
        ColorManagedDisplaySettings display_settings;
    };

    struct World
    {
        ID            id;
        AnimData *    adt;
        DrawDataList  drawdata;
        char          _pad0[4];
        short         texact;
        short         mistype;
        float         horr;
        float         horg;
        float         horb;
        float         exposure;
        float         exp;
        float         range;
        float         linfac;
        float         logfac;
        short         mode;
        char          _pad2[6];
        float         misi;
        float         miststa;
        float         mistdist;
        float         misthi;
        float         aodist;
        float         aoenergy;
        short         flag;
        char          _pad3[6];
        Ipo *         ipo;
        short         pr_texture;
        short         use_nodes;
        char          _pad[4];
        PreviewImage *preview;
        bNodeTree *   nodetree;
        ListBase      gpumaterial;
    };

    struct SoftBody
    {
        int              totpoint;
        int              totspring;
        BodyPoint *      bpoint;
        BodySpring *     bspring;
        char             _pad;
        char             msg_lock;
        short            msg_value;
        float            nodemass;
        char             namedVG_Mass[64];
        float            grav;
        float            mediafrict;
        float            rklimit;
        float            physics_speed;
        float            goalspring;
        float            goalfrict;
        float            mingoal;
        float            maxgoal;
        float            defgoal;
        short            vertgroup;
        char             namedVG_Softgoal[64];
        short            fuzzyness;
        float            inspring;
        float            infrict;
        char             namedVG_Spring_K[64];
        int              sfra;
        int              efra;
        int              interval;
        short            local;
        short            solverflags;
        SBVertex **      keys;
        int              totpointkey;
        int              totkey;
        float            secondspring;
        float            colball;
        float            balldamp;
        float            ballstiff;
        short            sbc_mode;
        short            aeroedge;
        short            minloops;
        short            maxloops;
        short            choke;
        short            solver_ID;
        short            plastic;
        short            springpreload;
        SBScratch *      scratch;
        float            shearstiff;
        float            inpush;
        SoftBody_Shared *shared;
        PointCache *     pointcache;
        ListBase         ptcaches;
        Collection *     collision_group;
        EffectorWeights *effector_weights;
        float            lcom[3];
        float            lrot[3][3];
        float            lscale[3][3];
        int              last_frame;
    };

    struct SoftBody_Shared
    {
        PointCache *pointcache;
        ListBase    ptcaches;
    };

    struct PointCache
    {
        PointCache * next;
        PointCache * prev;
        int          flag;
        int          step;
        int          simframe;
        int          startframe;
        int          endframe;
        int          editframe;
        int          last_exact;
        int          last_valid;
        char         _pad[4];
        int          totpoint;
        int          index;
        short        compression;
        short        rt;
        char         name[64];
        char         prev_name[64];
        char         info[128];
        char         path[1024];
        char *       cached_frames;
        int          cached_frames_len;
        char         _pad1[4];
        ListBase     mem_cache;
        PTCacheEdit *edit;
        void (*free_edit)();
    };

    struct PTCacheMem
    {
        PTCacheMem *next;
        PTCacheMem *prev;
        int         frame;
        int         totpoint;
        int         data_types;
        int         flag;
        void *      data[8];
        void *      cur[8];
        ListBase    extradata;
    };

    struct Object_Runtime
    {
        CustomData_MeshMasks last_data_mask;
        char                 last_need_mapping;
        char                 _pad0[3];
        float                parent_display_origin[3];
        int                  select_id;
        char                 _pad1[3];
        char                 is_mesh_eval_owned;
        BoundBox *           bb;
        Mesh *               mesh_orig;
        Mesh *               mesh_eval;
        Mesh *               mesh_deform_eval;
        Mesh *               object_as_temp_mesh;
        CurveCache *         curve_cache;
        GpencilBatchCache *  gpencil_cache;
        int                  gpencil_tot_layers;
        char                 _pad4[4];
        bGPDframe *          gpencil_evaluated_frames;
        short                local_collections_bits;
        short                _pad2[3];
    };

    struct Lattice
    {
        ID           id;
        AnimData *   adt;
        short        pntsu;
        short        pntsv;
        short        pntsw;
        short        flag;
        short        opntsu;
        short        opntsv;
        short        opntsw;
        char         _pad2[3];
        char         typeu;
        char         typev;
        char         typew;
        int          actbp;
        float        fu;
        float        fv;
        float        fw;
        float        du;
        float        dv;
        float        dw;
        BPoint *     def;
        Ipo *        ipo;
        Key *        key;
        MDeformVert *dvert;
        char         vgroup[64];
        EditLatt *   editlatt;
        void *       batch_cache;
    };

    struct WeightedNormalModifierData
    {
        ModifierData modifier;
        char         defgrp_name[64];
        char         mode;
        char         flag;
        short        weight;
        float        thresh;
    };

    struct SurfaceDeformModifierData
    {
        ModifierData modifier;
        Depsgraph *  depsgraph;
        Object *     target;
        SDefVert *   verts;
        float        falloff;
        int          numverts;
        int          numpoly;
        int          flags;
        float        mat[4][4];
    };

    struct MeshSeqCacheModifierData
    {
        ModifierData modifier;
        CacheFile *  cache_file;
        char         object_path[1024];
        char         read_flag;
        char         _pad[7];
        CacheReader *reader;
        char         reader_object_path[1024];
    };

    struct NormalEditModifierData
    {
        ModifierData modifier;
        char         defgrp_name[64];
        Object *     target;
        short        mode;
        short        flag;
        short        mix_mode;
        char         _pad[2];
        float        mix_factor;
        float        mix_limit;
        float        offset[3];
        char         _pad0[4];
    };

    struct DataTransferModifierData
    {
        ModifierData modifier;
        Object *     ob_source;
        int          data_types;
        int          vmap_mode;
        int          emap_mode;
        int          lmap_mode;
        int          pmap_mode;
        float        map_max_distance;
        float        map_ray_radius;
        float        islands_precision;
        char         _pad1[4];
        int          layers_select_src[4];
        int          layers_select_dst[4];
        int          mix_mode;
        float        mix_factor;
        char         defgrp_name[64];
        int          flags;
    };

    struct WeldModifierData
    {
        ModifierData modifier;
        float        merge_dist;
        int          max_interactions;
        char         defgrp_name[64];
    };

    struct WireframeModifierData
    {
        ModifierData modifier;
        char         defgrp_name[64];
        float        offset;
        float        offset_fac;
        float        offset_fac_vg;
        float        crease_weight;
        short        flag;
        short        mat_ofs;
        char         _pad[4];
    };

    struct LaplacianDeformModifierData
    {
        ModifierData modifier;
        char         anchor_grp_name[64];
        int          total_verts;
        int          repeat;
        float *      vertexco;
        void *       cache_system;
        short        flag;
        char         _pad[6];
    };

    struct MeshCacheModifierData
    {
        ModifierData modifier;
        char         flag;
        char         type;
        char         time_mode;
        char         play_mode;
        char         forward_axis;
        char         up_axis;
        char         flip_axis;
        char         interp;
        float        factor;
        char         deform_mode;
        char         _pad[7];
        float        frame_start;
        float        frame_scale;
        float        eval_frame;
        float        eval_time;
        float        eval_factor;
        char         filepath[1024];
    };

    struct UVWarpModifierData
    {
        ModifierData modifier;
        char         axis_u;
        char         axis_v;
        char         _pad[6];
        float        center[2];
        Object *     object_src;
        char         bone_src[64];
        Object *     object_dst;
        char         bone_dst[64];
        char         vgroup_name[64];
        char         uvlayer_name[64];
    };

    struct CorrectiveSmoothModifierData
    {
        ModifierData modifier;
        float (*bind_coords)();
        int                        bind_coords_num;
        float                      lambda;
        short                      repeat;
        short                      flag;
        char                       smooth_type;
        char                       rest_source;
        char                       _pad[2];
        char                       defgrp_name[64];
        CorrectiveSmoothDeltaCache delta_cache;
    };

    struct LaplacianSmoothModifierData
    {
        ModifierData modifier;
        float        lambda;
        float        lambda_border;
        char         _pad1[4];
        char         defgrp_name[64];
        short        flag;
        short        repeat;
    };

    struct TriangulateModifierData
    {
        ModifierData modifier;
        int          flag;
        int          quad_method;
        int          ngon_method;
        int          min_vertices;
    };

    struct SkinModifierData
    {
        ModifierData modifier;
        float        branch_smoothing;
        char         flag;
        char         symmetry_axes;
        char         _pad[2];
    };

    struct RemeshModifierData
    {
        ModifierData modifier;
        float        threshold;
        float        scale;
        float        hermite_num;
        char         depth;
        char         flag;
        char         mode;
        char         _pad;
    };

    struct DynamicPaintModifierData
    {
        ModifierData                modifier;
        DynamicPaintCanvasSettings *canvas;
        DynamicPaintBrushSettings * brush;
        int                         type;
        char                        _pad[4];
    };

    struct WeightVGProximityModifierData
    {
        ModifierData modifier;
        char         defgrp_name[64];
        int          proximity_mode;
        int          proximity_flags;
        Object *     proximity_ob_target;
        float        mask_constant;
        char         mask_defgrp_name[64];
        int          mask_tex_use_channel;
        Tex *        mask_texture;
        Object *     mask_tex_map_obj;
        int          mask_tex_mapping;
        char         mask_tex_uvlayer_name[64];
        float        min_dist;
        float        max_dist;
        short        falloff_type;
        char         _pad0[2];
    };

    struct WeightVGMixModifierData
    {
        ModifierData modifier;
        char         defgrp_name_a[64];
        char         defgrp_name_b[64];
        float        default_weight_a;
        float        default_weight_b;
        char         mix_mode;
        char         mix_set;
        char         _pad0[6];
        float        mask_constant;
        char         mask_defgrp_name[64];
        int          mask_tex_use_channel;
        Tex *        mask_texture;
        Object *     mask_tex_map_obj;
        int          mask_tex_mapping;
        char         mask_tex_uvlayer_name[64];
        char         _pad1[4];
    };

    struct WeightVGEditModifierData
    {
        ModifierData  modifier;
        char          defgrp_name[64];
        short         edit_flags;
        short         falloff_type;
        float         default_weight;
        CurveMapping *cmap_curve;
        float         add_threshold;
        float         rem_threshold;
        float         mask_constant;
        char          mask_defgrp_name[64];
        int           mask_tex_use_channel;
        Tex *         mask_texture;
        Object *      mask_tex_map_obj;
        int           mask_tex_mapping;
        char          mask_tex_uvlayer_name[64];
        char          _pad0[4];
    };

    struct WarpModifierData
    {
        ModifierData  modifier;
        Tex *         texture;
        Object *      map_object;
        char          uvlayer_name[64];
        int           uvlayer_tmp;
        int           texmapping;
        Object *      object_from;
        Object *      object_to;
        CurveMapping *curfalloff;
        char          defgrp_name[64];
        float         strength;
        float         falloff_radius;
        char          flag;
        char          falloff_type;
        char          _pad[6];
    };

    struct OceanModifierData
    {
        ModifierData modifier;
        Ocean *      ocean;
        OceanCache * oceancache;
        int          resolution;
        int          spatial_size;
        float        wind_velocity;
        float        damp;
        float        smallest_wave;
        float        depth;
        float        wave_alignment;
        float        wave_direction;
        float        wave_scale;
        float        chop_amount;
        float        foam_coverage;
        float        time;
        int          bakestart;
        int          bakeend;
        char         cachepath[1024];
        char         foamlayername[64];
        char         cached;
        char         geometry_mode;
        char         flag;
        char         _pad2;
        short        repeat_x;
        short        repeat_y;
        int          seed;
        float        size;
        float        foam_fade;
        char         _pad[4];
    };

    struct ScrewModifierData
    {
        ModifierData modifier;
        Object *     ob_axis;
        int          steps;
        int          render_steps;
        int          iter;
        float        screw_ofs;
        float        angle;
        float        merge_dist;
        short        flag;
        char         axis;
        char         _pad[5];
    };

    struct SolidifyModifierData
    {
        ModifierData modifier;
        char         defgrp_name[64];
        float        offset;
        float        offset_fac;
        float        offset_fac_vg;
        float        offset_clamp;
        char         mode;
        char         nonmanifold_offset_mode;
        char         nonmanifold_boundary_mode;
        char         _pad;
        float        crease_inner;
        float        crease_outer;
        float        crease_rim;
        int          flag;
        short        mat_ofs;
        short        mat_ofs_rim;
    };

    struct ShapeKeyModifierData
    {
        ModifierData modifier;
    };

    struct SimpleDeformModifierData
    {
        ModifierData modifier;
        Object *     origin;
        char         vgroup_name[64];
        float        factor;
        float        limit[2];
        char         mode;
        char         axis;
        char         deform_axis;
        char         flag;
    };

    struct ShrinkwrapModifierData
    {
        ModifierData modifier;
        Object *     target;
        Object *     auxTarget;
        char         vgroup_name[64];
        float        keepDist;
        short        shrinkType;
        char         shrinkOpts;
        char         shrinkMode;
        float        projLimit;
        char         projAxis;
        char         subsurfLevels;
        char         _pad[2];
    };

    struct SmokeModifierData
    {
        ModifierData modifier;
        int          type;
        int          _pad;
    };

    struct FluidsimModifierData
    {
        ModifierData      modifier;
        FluidsimSettings *fss;
    };

    struct MultiresModifierData
    {
        ModifierData modifier;
        char         lvl;
        char         sculptlvl;
        char         renderlvl;
        char         totlvl;
        char         simple;
        char         flags;
        char         _pad[2];
        short        quality;
        short        uv_smooth;
        char         _pad2[4];
    };

    struct ExplodeModifierData
    {
        ModifierData modifier;
        int *        facepa;
        short        flag;
        short        vgroup;
        float        protect;
        char         uvname[64];
    };

    struct ParticleInstanceModifierData
    {
        ModifierData modifier;
        Object *     ob;
        short        psys;
        short        flag;
        short        axis;
        short        space;
        float        position;
        float        random_position;
        float        rotation;
        float        random_rotation;
        float        particle_amount;
        float        particle_offset;
        char         index_layer_name[64];
        char         value_layer_name[64];
    };

    struct ParticleSystemModifierData
    {
        ModifierData    modifier;
        ParticleSystem *psys;
        Mesh *          mesh_final;
        Mesh *          mesh_original;
        int             totdmvert;
        int             totdmedge;
        int             totdmface;
        short           flag;
        char            _pad[2];
    };

    struct MeshDeformModifierData
    {
        ModifierData   modifier;
        Object *       object;
        char           defgrp_name[64];
        short          gridsize;
        short          flag;
        char           _pad[4];
        MDefInfluence *bindinfluences;
        int *          bindoffsets;
        float *        bindcagecos;
        int            totvert;
        int            totcagevert;
        MDefCell *     dyngrid;
        MDefInfluence *dyninfluences;
        int *          dynverts;
        int            dyngridsize;
        int            totinfluence;
        float          dyncellmin[3];
        float          dyncellwidth;
        float          bindmat[4][4];
        float *        bindweights;
        float *        bindcos;
        void (*bindfunc)();
    };

    struct BooleanModifierData
    {
        ModifierData modifier;
        Object *     object;
        char         operation;
        char         _pad[2];
        char         bm_flag;
        float        double_threshold;
    };

    struct SurfaceModifierData
    {
        ModifierData     modifier;
        MVert *          x;
        MVert *          v;
        Mesh *           mesh;
        BVHTreeFromMesh *bvhtree;
        int              cfra;
        int              numverts;
    };

    struct CollisionModifierData
    {
        ModifierData modifier;
        MVert *      x;
        MVert *      xnew;
        MVert *      xold;
        MVert *      current_xnew;
        MVert *      current_x;
        MVert *      current_v;
        MVertTri *   tri;
        int          mvert_num;
        int          tri_num;
        float        time_x;
        float        time_xnew;
        char         is_static;
        char         _pad[7];
        BVHTree *    bvhtree;
    };

    struct ClothModifierData
    {
        ModifierData       modifier;
        Cloth *            clothObject;
        ClothSimSettings * sim_parms;
        ClothCollSettings *coll_parms;
        PointCache *       point_cache;
        ListBase           ptcaches;
        ClothHairData *    hairdata;
        float              hair_grid_min[3];
        float              hair_grid_max[3];
        int                hair_grid_res[3];
        float              hair_grid_cellsize;
        ClothSolverResult *solver_result;
    };

    struct SoftbodyModifierData
    {
        ModifierData modifier;
    };

    struct HookModifierData
    {
        ModifierData  modifier;
        Object *      object;
        char          subtarget[64];
        char          flag;
        char          falloff_type;
        char          _pad[6];
        float         parentinv[4][4];
        float         cent[3];
        float         falloff;
        CurveMapping *curfalloff;
        int *         indexar;
        int           totindex;
        float         force;
        char          name[64];
    };

    struct ArmatureModifierData
    {
        ModifierData modifier;
        short        deformflag;
        short        multi;
        char         _pad2[4];
        Object *     object;
        float *      prevCos;
        char         defgrp_name[64];
    };

    struct WaveModifierData
    {
        ModifierData modifier;
        Tex *        texture;
        Object *     map_object;
        char         uvlayer_name[64];
        int          uvlayer_tmp;
        int          texmapping;
        Object *     objectcenter;
        char         defgrp_name[64];
        short        flag;
        char         _pad[2];
        float        startx;
        float        starty;
        float        height;
        float        width;
        float        narrow;
        float        speed;
        float        damp;
        float        falloff;
        float        timeoffs;
        float        lifetime;
        char         _pad1[4];
    };

    struct CastModifierData
    {
        ModifierData modifier;
        Object *     object;
        float        fac;
        float        radius;
        float        size;
        char         defgrp_name[64];
        short        flag;
        short        type;
    };

    struct SmoothModifierData
    {
        ModifierData modifier;
        float        fac;
        char         defgrp_name[64];
        short        flag;
        short        repeat;
    };

    struct DecimateModifierData
    {
        ModifierData modifier;
        float        percent;
        short        iter;
        char         delimit;
        char         symmetry_axis;
        float        angle;
        char         defgrp_name[64];
        float        defgrp_factor;
        short        flag;
        short        mode;
        int          face_count;
    };

    struct UVProjectModifierData
    {
        ModifierData modifier;
        Object *     projectors[10];
        char         _pad2[4];
        int          num_projectors;
        float        aspectx;
        float        aspecty;
        float        scalex;
        float        scaley;
        char         uvlayer_name[64];
        int          uvlayer_tmp;
        char         _pad[4];
    };

    struct DisplaceModifierData
    {
        ModifierData modifier;
        Tex *        texture;
        Object *     map_object;
        char         uvlayer_name[64];
        int          uvlayer_tmp;
        int          texmapping;
        float        strength;
        int          direction;
        char         defgrp_name[64];
        float        midlevel;
        int          space;
    };

    struct FluidModifierData
    {
        ModifierData           modifier;
        FluidDomainSettings *  domain;
        FluidFlowSettings *    flow;
        FluidEffectorSettings *effector;
        float                  time;
        int                    type;
    };

    struct BevelModifierData
    {
        ModifierData  modifier;
        float         value;
        int           res;
        short         flags;
        short         val_flags;
        short         lim_flags;
        short         e_flags;
        short         mat;
        short         edge_flags;
        short         face_str_mode;
        short         miter_inner;
        short         miter_outer;
        short         vmesh_method;
        float         profile;
        float         bevel_angle;
        float         spread;
        char          defgrp_name[64];
        CurveProfile *custom_profile;
    };

    struct EdgeSplitModifierData
    {
        ModifierData modifier;
        float        split_angle;
        int          flags;
    };

    struct MirrorModifierData
    {
        ModifierData modifier;
        short        axis;
        short        flag;
        float        tolerance;
        float        uv_offset[2];
        float        uv_offset_copy[2];
        Object *     mirror_ob;
    };

    struct ArrayModifierData
    {
        ModifierData modifier;
        Object *     start_cap;
        Object *     end_cap;
        Object *     curve_ob;
        Object *     offset_ob;
        float        offset[3];
        float        scale[3];
        float        length;
        float        merge_dist;
        int          fit_type;
        int          offset_type;
        int          flags;
        int          count;
        float        uv_offset[2];
    };

    struct MaskModifierData
    {
        ModifierData modifier;
        Object *     ob_arm;
        char         vgroup[64];
        short        mode;
        short        flag;
        float        threshold;
    };

    struct BuildModifierData
    {
        ModifierData modifier;
        float        start;
        float        length;
        short        flag;
        short        randomize;
        int          seed;
    };

    struct CurveModifierData
    {
        ModifierData modifier;
        Object *     object;
        char         name[64];
        short        defaxis;
        char         _pad[6];
    };

    struct LatticeModifierData
    {
        ModifierData modifier;
        Object *     object;
        char         name[64];
        float        strength;
        char         _pad[4];
    };

    struct SubsurfModifierData
    {
        ModifierData modifier;
        short        subdivType;
        short        levels;
        short        renderLevels;
        short        flags;
        short        uv_smooth;
        short        quality;
        char         _pad[4];
        void *       emCache;
        void *       mCache;
    };

    struct MappingInfoModifierData
    {
        ModifierData modifier;
        Tex *        texture;
        Object *     map_object;
        char         uvlayer_name[64];
        int          uvlayer_tmp;
        int          texmapping;
    };

    struct Multires
    {
        ListBase   levels;
        MVert *    verts;
        char       level_count;
        char       current;
        char       newlvl;
        char       edgelvl;
        char       pinlvl;
        char       renderlvl;
        char       use_col;
        char       flag;
        CustomData vdata;
        CustomData fdata;
        short *    edge_flags;
        char *     edge_creases;
    };

    struct MultiresColFace
    {
        MultiresCol col[4];
    };

    struct Mesh_Runtime
    {
        Mesh *                  mesh_eval;
        void *                  eval_mutex;
        EditMeshData *          edit_data;
        void *                  batch_cache;
        SubdivCCG *             subdiv_ccg;
        void *                  _pad1;
        int                     subdiv_ccg_tot_level;
        char                    _pad2[4];
        int64_t                 cd_dirty_vert;
        int64_t                 cd_dirty_edge;
        int64_t                 cd_dirty_loop;
        int64_t                 cd_dirty_poly;
        MLoopTri_Store          looptris;
        LinkNode *              bvh_cache;
        ShrinkwrapBoundaryData *shrinkwrap_data;
        char                    deformed_only;
        char                    is_original;
        char                    _pad[6];
    };

    struct Curve
    {
        ID         id;
        AnimData * adt;
        ListBase   nurb;
        EditNurb * editnurb;
        Object *   bevobj;
        Object *   taperobj;
        Object *   textoncurve;
        Ipo *      ipo;
        Key *      key;
        Material **mat;
        float      loc[3];
        float      size[3];
        short      type;
        short      texflag;
        char       _pad0[6];
        short      twist_mode;
        float      twist_smooth;
        float      smallcaps_scale;
        int        pathlen;
        short      bevresol;
        short      totcol;
        int        flag;
        float      width;
        float      ext1;
        float      ext2;
        short      resolu;
        short      resolv;
        short      resolu_ren;
        short      resolv_ren;
        int        actnu;
        int        actvert;
        char       overflow;
        char       spacemode;
        char       align_y;
        char       _pad[3];
        short      lines;
        float      spacing;
        float      linedist;
        float      shear;
        float      fsize;
        float      wordspace;
        float      ulpos;
        float      ulheight;
        float      xof;
        float      yof;
        float      linewidth;
        int        pos;
        int        selstart;
        int        selend;
        int        len_wchar;
        int        len;
        char *     str;
        EditFont * editfont;
        char       family[64];
        VFont *    vfont;
        VFont *    vfontb;
        VFont *    vfonti;
        VFont *    vfontbi;
        TextBox *  tb;
        int        totbox;
        int        actbox;
        CharInfo * strinfo;
        CharInfo   curinfo;
        float      ctime;
        float      bevfac1;
        float      bevfac2;
        char       bevfac1_mapping;
        char       bevfac2_mapping;
        char       _pad2[6];
        float      fsize_realtime;
        void *     batch_cache;
    };

    struct MetaBall
    {
        ID         id;
        AnimData * adt;
        ListBase   elems;
        ListBase   disp;
        ListBase * editelems;
        Ipo *      ipo;
        Material **mat;
        char       flag;
        char       flag2;
        short      totcol;
        short      texflag;
        char       _pad[1];
        char       needs_flush_to_id;
        float      loc[3];
        float      size[3];
        float      rot[3];
        float      wiresize;
        float      rendersize;
        float      thresh;
        MetaElem * lastelem;
        void *     batch_cache;
    };

    struct VFont
    {
        ID          id;
        char        name[1024];
        VFontData * data;
        PackedFile *packedfile;
        PackedFile *temp_pf;
    };

    struct Material
    {
        ID                    id;
        AnimData *            adt;
        short                 flag;
        char                  _pad1[2];
        float                 r;
        float                 g;
        float                 b;
        float                 a;
        float                 specr;
        float                 specg;
        float                 specb;
        float                 alpha;
        float                 ray_mirror;
        float                 spec;
        float                 gloss_mir;
        float                 roughness;
        float                 metallic;
        char                  use_nodes;
        char                  pr_type;
        short                 pr_texture;
        short                 pr_flag;
        short                 index;
        bNodeTree *           nodetree;
        Ipo *                 ipo;
        PreviewImage *        preview;
        float                 line_col[4];
        short                 line_priority;
        short                 vcol_alpha;
        short                 paint_active_slot;
        short                 paint_clone_slot;
        short                 tot_slots;
        char                  _pad2[2];
        float                 alpha_threshold;
        float                 refract_depth;
        char                  blend_method;
        char                  blend_shadow;
        char                  blend_flag;
        char                  _pad3[1];
        TexPaintSlot *        texpaintslot;
        ListBase              gpumaterial;
        MaterialGPencilStyle *gp_style;
    };

    struct Lamp
    {
        ID            id;
        AnimData *    adt;
        short         type;
        short         flag;
        int           mode;
        float         r;
        float         g;
        float         b;
        float         k;
        float         shdwr;
        float         shdwg;
        float         shdwb;
        float         shdwpad;
        float         energy;
        float         dist;
        float         spotsize;
        float         spotblend;
        float         att1;
        float         att2;
        float         coeff_const;
        float         coeff_lin;
        float         coeff_quad;
        char          _pad0[4];
        CurveMapping *curfalloff;
        short         falloff_type;
        char          _pad2[2];
        float         clipsta;
        float         clipend;
        float         bias;
        float         soft;
        float         bleedbias;
        float         bleedexp;
        short         bufsize;
        short         samp;
        short         buffers;
        short         filtertype;
        char          bufflag;
        char          buftype;
        short         area_shape;
        float         area_size;
        float         area_sizey;
        float         area_sizez;
        float         sun_angle;
        char          _pad3[4];
        short         texact;
        short         shadhalostep;
        Ipo *         ipo;
        short         pr_texture;
        short         use_nodes;
        char          _pad6[4];
        float         cascade_max_dist;
        float         cascade_exponent;
        float         cascade_fade;
        int           cascade_count;
        float         contact_dist;
        float         contact_bias;
        float         contact_spread;
        float         contact_thickness;
        float         spec_fac;
        float         att_dist;
        PreviewImage *preview;
        bNodeTree *   nodetree;
    };

    struct Tex
    {
        ID            id;
        AnimData *    adt;
        float         noisesize;
        float         turbul;
        float         bright;
        float         contrast;
        float         saturation;
        float         rfac;
        float         gfac;
        float         bfac;
        float         filtersize;
        char          _pad2[4];
        float         mg_H;
        float         mg_lacunarity;
        float         mg_octaves;
        float         mg_offset;
        float         mg_gain;
        float         dist_amount;
        float         ns_outscale;
        float         vn_w1;
        float         vn_w2;
        float         vn_w3;
        float         vn_w4;
        float         vn_mexp;
        short         vn_distm;
        short         vn_coltype;
        short         noisedepth;
        short         noisetype;
        short         noisebasis;
        short         noisebasis2;
        short         imaflag;
        short         flag;
        short         type;
        short         stype;
        float         cropxmin;
        float         cropymin;
        float         cropxmax;
        float         cropymax;
        int           texfilter;
        int           afmax;
        short         xrepeat;
        short         yrepeat;
        short         extend;
        short         _pad0;
        int           len;
        int           frames;
        int           offset;
        int           sfra;
        float         checkerdist;
        float         nabla;
        char          _pad1[4];
        ImageUser     iuser;
        bNodeTree *   nodetree;
        Ipo *         ipo;
        Image *       ima;
        ColorBand *   coba;
        PreviewImage *preview;
        char          use_nodes;
        char          _pad[7];
    };

    struct ColorBand
    {
        short  tot;
        short  cur;
        char   ipotype;
        char   ipotype_hue;
        char   color_mode;
        char   _pad[1];
        CBData data[32];
    };

    struct Image
    {
        ID                             id;
        char                           name[1024];
        MovieCache *                   cache;
        ListBase                       anims;
        RenderResult *                 rr;
        ListBase                       renderslots;
        short                          render_slot;
        short                          last_render_slot;
        int                            flag;
        short                          source;
        short                          type;
        int                            lastframe;
        short                          gpuflag;
        char                           _pad2[2];
        int                            gpuframenr;
        PackedFile *                   packedfile;
        ListBase                       packedfiles;
        PreviewImage *                 preview;
        int                            lastused;
        int                            gen_x;
        int                            gen_y;
        char                           gen_type;
        char                           gen_flag;
        short                          gen_depth;
        float                          gen_color[4];
        float                          aspx;
        float                          aspy;
        ColorManagedColorspaceSettings colorspace_settings;
        char                           alpha_mode;
        char                           _pad;
        char                           eye;
        char                           views_format;
        int                            active_tile_index;
        ListBase                       tiles;
        ListBase                       views;
        Stereo3dFormat *               stereo3d_format;
    };

    struct Camera
    {
        ID                   id;
        AnimData *           adt;
        char                 type;
        char                 dtx;
        short                flag;
        float                passepartalpha;
        float                clipsta;
        float                clipend;
        float                lens;
        float                ortho_scale;
        float                drawsize;
        float                sensor_x;
        float                sensor_y;
        float                shiftx;
        float                shifty;
        float                YF_dofdist;
        Ipo *                ipo;
        Object *             dof_ob;
        GPUDOFSettings       gpu_dof;
        CameraDOFSettings    dof;
        ListBase             bg_images;
        char                 sensor_fit;
        char                 _pad[7];
        CameraStereoSettings stereo;
        Camera_Runtime       runtime;
    };

    struct CameraBGImage
    {
        CameraBGImage *next;
        CameraBGImage *prev;
        Image *        ima;
        ImageUser      iuser;
        MovieClip *    clip;
        MovieClipUser  cuser;
        float          offset[2];
        float          scale;
        float          rotation;
        float          alpha;
        short          flag;
        short          source;
    };

    struct Text
    {
        ID        id;
        char *    name;
        void *    compiled;
        int       flags;
        int       nlines;
        ListBase  lines;
        TextLine *curl;
        TextLine *sell;
        int       curc;
        int       selc;
        double    mtime;
    };

    struct Key
    {
        ID        id;
        AnimData *adt;
        KeyBlock *refkey;
        char      elemstr[32];
        int       elemsize;
        char      _pad[4];
        ListBase  block;
        Ipo *     ipo;
        ID *      from;
        int       totkey;
        short     flag;
        char      type;
        char      _pad2;
        float     ctime;
        int       uidgen;
    };

    struct Ipo
    {
        ID       id;
        ListBase curve;
        rctf     cur;
        short    blocktype;
        short    showkey;
        short    muteipo;
        char     _pad[2];
    };

    struct IpoCurve
    {
        IpoCurve * next;
        IpoCurve * prev;
        BPoint *   bp;
        BezTriple *bezt;
        rctf       maxrct;
        rctf       totrct;
        short      blocktype;
        short      adrcode;
        short      vartype;
        short      totvert;
        short      ipo;
        short      extrap;
        short      flag;
        short      rt;
        float      ymin;
        float      ymax;
        int        bitmask;
        float      slide_min;
        float      slide_max;
        float      curval;
        IpoDriver *driver;
    };

    struct Library
    {
        ID          id;
        FileData *  filedata;
        char        name[1024];
        char        filepath[1024];
        Library *   parent;
        PackedFile *packedfile;
        int         temp_index;
        short       versionfile;
        short       subversionfile;
    };

    struct IDOverrideLibrary
    {
        ID *                      reference;
        ListBase                  properties;
        short                     flag;
        char                      _pad[6];
        ID *                      storage;
        IDOverrideLibraryRuntime *runtime;
    };

    struct IDOverrideLibraryProperty
    {
        IDOverrideLibraryProperty *next;
        IDOverrideLibraryProperty *prev;
        char *                     rna_path;
        ListBase                   operations;
    };

    struct IDPropertyData
    {
        void *   pointer;
        ListBase group;
        int      val;
        int      val2;
    };

    struct IDProperty
    {
        IDProperty *   next;
        IDProperty *   prev;
        char           type;
        char           subtype;
        short          flag;
        char           name[64];
        int            saved;
        IDPropertyData data;
        int            len;
        int            totallen;
    };

    struct Mesh
    {
        ID           id;
        AnimData *   adt;
        Ipo *        ipo;
        Key *        key;
        Material **  mat;
        MSelect *    mselect;
        MPoly *      mpoly;
        MLoop *      mloop;
        MLoopUV *    mloopuv;
        MLoopCol *   mloopcol;
        MFace *      mface;
        MTFace *     mtface;
        TFace *      tface;
        MVert *      mvert;
        MEdge *      medge;
        MDeformVert *dvert;
        MCol *       mcol;
        Mesh *       texcomesh;
        BMEditMesh * edit_mesh;
        CustomData   vdata;
        CustomData   edata;
        CustomData   fdata;
        CustomData   pdata;
        CustomData   ldata;
        int          totvert;
        int          totedge;
        int          totface;
        int          totselect;
        int          totpoly;
        int          totloop;
        int          act_face;
        float        loc[3];
        float        size[3];
        short        texflag;
        short        flag;
        float        smoothresh;
        char         cd_flag;
        char         _pad;
        char         subdiv;
        char         subdivr;
        char         subsurftype;
        char         editflag;
        short        totcol;
        float        remesh_voxel_size;
        float        remesh_voxel_adaptivity;
        char         remesh_mode;
        char         _pad1[3];
        Multires *   mr;
        Mesh_Runtime runtime;
    };

    struct Object
    {
        ID                id;
        AnimData *        adt;
        DrawDataList      drawdata;
        SculptSession *   sculpt;
        short             type;
        short             partype;
        int               par1;
        int               par2;
        int               par3;
        char              parsubstr[64];
        Object *          parent;
        Object *          track;
        Object *          proxy;
        Object *          proxy_group;
        Object *          proxy_from;
        Ipo *             ipo;
        bAction *         action;
        bAction *         poselib;
        bPose *           pose;
        void *            data;
        bGPdata *         gpd;
        bAnimVizSettings  avs;
        bMotionPath *     mpath;
        void *            _pad0;
        ListBase          constraintChannels;
        ListBase          effect;
        ListBase          defbase;
        ListBase          modifiers;
        ListBase          greasepencil_modifiers;
        ListBase          fmaps;
        ListBase          shader_fx;
        int               mode;
        int               restore_mode;
        Material **       mat;
        char *            matbits;
        int               totcol;
        int               actcol;
        float             loc[3];
        float             dloc[3];
        float             size[3];
        float             dsize[3];
        float             dscale[3];
        float             rot[3];
        float             drot[3];
        float             quat[4];
        float             dquat[4];
        float             rotAxis[3];
        float             drotAxis[3];
        float             rotAngle;
        float             drotAngle;
        float             obmat[4][4];
        float             parentinv[4][4];
        float             constinv[4][4];
        float             imat[4][4];
        float             imat_ren[4][4];
        int               lay;
        short             flag;
        short             colbits;
        short             transflag;
        short             protectflag;
        short             trackflag;
        short             upflag;
        short             nlaflag;
        char              _pad1;
        char              duplicator_visibility_flag;
        short             base_flag;
        short             base_local_view_bits;
        short             col_group;
        short             col_mask;
        short             rotmode;
        char              boundtype;
        char              collision_boundtype;
        short             dtx;
        char              dt;
        char              empty_drawtype;
        float             empty_drawsize;
        float             dupfacesca;
        short             index;
        short             actdef;
        short             actfmap;
        char              _pad2[2];
        float             col[4];
        short             softflag;
        char              restrictflag;
        char              shapeflag;
        short             shapenr;
        char              _pad3[2];
        ListBase          constraints;
        ListBase          nlastrips;
        ListBase          hooks;
        ListBase          particlesystem;
        PartDeflect *     pd;
        SoftBody *        soft;
        Collection *      dup_group;
        FluidsimSettings *fluidsimSettings;
        DerivedMesh *     derivedDeform;
        DerivedMesh *     derivedFinal;
        ListBase          pc_ids;
        RigidBodyOb *     rigidbody_object;
        RigidBodyCon *    rigidbody_constraint;
        float             ima_ofs[2];
        ImageUser *       iuser;
        char              empty_image_visibility_flag;
        char              empty_image_depth;
        char              empty_image_flag;
        char              _pad8[5];
        ListBase          lodlevels;
        LodLevel *        currentlod;
        PreviewImage *    preview;
        Object_Runtime    runtime;
    };

    struct SceneRenderLayer
    {
        SceneRenderLayer *next;
        SceneRenderLayer *prev;
        char              name[64];
        Material *        mat_override;
        int               lay;
        int               lay_zmask;
        int               lay_exclude;
        int               layflag;
        int               passflag;
        int               pass_xor;
        int               samples;
        float             pass_alpha_threshold;
        IDProperty *      prop;
        FreestyleConfig   freestyleConfig;
    };

    struct BakeData
    {
        ImageFormatData im_format;
        char            filepath[1024];
        short           width;
        short           height;
        short           margin;
        short           flag;
        float           cage_extrusion;
        int             pass_filter;
        char            normal_swizzle[3];
        char            normal_space;
        char            save_mode;
        char            _pad[3];
        Object *        cage_object;
    };

    struct Sculpt
    {
        Paint   paint;
        int     flags;
        int     radial_symm[3];
        float   detail_size;
        int     symmetrize_direction;
        float   gravity_factor;
        float   constant_detail;
        float   detail_percent;
        char    _pad[4];
        Object *gravity_object;
    };

    struct UvSculpt
    {
        Paint paint;
    };

    struct GpPaint
    {
        Paint paint;
    };

    struct VPaint
    {
        Paint paint;
        char  flag;
        char  _pad[3];
        int   radial_symm[3];
    };

    struct ImagePaintSettings
    {
        Paint  paint;
        short  flag;
        short  missing_data;
        short  seam_bleed;
        short  normal_angle;
        short  screen_grab_size[2];
        int    mode;
        void * paintcursor;
        Image *stencil;
        Image *clone;
        Image *canvas;
        float  stencil_col[3];
        float  dither;
        int    interp;
        char   _pad[4];
    };

    struct ToolSettings
    {
        VPaint *                vpaint;
        VPaint *                wpaint;
        Sculpt *                sculpt;
        UvSculpt *              uvsculpt;
        GpPaint *               gp_paint;
        float                   vgroup_weight;
        float                   doublimit;
        char                    automerge;
        char                    object_flag;
        short                   selectmode;
        char                    unwrapper;
        char                    uvcalc_flag;
        char                    uv_flag;
        char                    uv_selectmode;
        float                   uvcalc_margin;
        short                   autoik_chainlen;
        char                    gpencil_flags;
        char                    gpencil_v3d_align;
        char                    gpencil_v2d_align;
        char                    gpencil_seq_align;
        char                    gpencil_ima_align;
        char                    annotate_v3d_align;
        short                   annotate_thickness;
        char                    gpencil_selectmode_edit;
        char                    gpencil_selectmode_sculpt;
        GP_Sculpt_Settings      gp_sculpt;
        GP_Interpolate_Settings gp_interpolate;
        ImagePaintSettings      imapaint;
        ParticleEditSettings    particle;
        float                   proportional_size;
        float                   select_thresh;
        short                   autokey_flag;
        char                    autokey_mode;
        char                    keyframe_type;
        char                    multires_subdiv_type;
        char                    edge_mode;
        char                    edge_mode_live_unwrap;
        char                    _pad1[1];
        char                    transform_pivot_point;
        char                    transform_flag;
        char                    snap_mode;
        char                    snap_node_mode;
        char                    snap_uv_mode;
        char                    snap_flag;
        char                    snap_target;
        char                    snap_transform_mode_flag;
        char                    proportional_edit;
        char                    prop_mode;
        char                    proportional_objects;
        char                    proportional_mask;
        char                    proportional_action;
        char                    proportional_fcurve;
        char                    lock_markers;
        char                    auto_normalize;
        char                    multipaint;
        char                    weightuser;
        char                    vgroupsubset;
        char                    _pad2[3];
        char                    uv_sculpt_settings;
        char                    uv_relax_method;
        short                   sculpt_paint_settings;
        char                    workspace_tool_type;
        char                    _pad5[1];
        int                     sculpt_paint_unified_size;
        float                   sculpt_paint_unified_unprojected_radius;
        float                   sculpt_paint_unified_alpha;
        UnifiedPaintSettings    unified_paint_settings;
        CurvePaintSettings      curve_paint_settings;
        MeshStatVis             statvis;
        float                   normal_vector[3];
        char                    _pad6[4];
        CurveProfile *          custom_bevel_profile_preset;
    };

    struct RenderData
    {
        ImageFormatData im_format;
        AviCodecData *  avicodecdata;
        FFMpegCodecData ffcodecdata;
        int             cfra;
        int             sfra;
        int             efra;
        float           subframe;
        int             psfra;
        int             pefra;
        int             images;
        int             framapto;
        short           flag;
        short           threads;
        float           framelen;
        float           blurfac;
        int             frame_step;
        short           stereomode;
        short           dimensionspreset;
        short           size;
        char            _pad6[2];
        int             xsch;
        int             ysch;
        int             tilex;
        int             tiley;
        short           planes;
        short           imtype;
        short           subimtype;
        short           quality;
        short           displaymode;
        char            use_lock_interface;
        char            _pad7;
        int             scemode;
        int             mode;
        short           frs_sec;
        char            alphamode;
        char            _pad0[1];
        rctf            border;
        ListBase        layers;
        short           actlay;
        char            _pad1[2];
        float           xasp;
        float           yasp;
        float           frs_sec_base;
        float           gauss;
        int             color_mgt_flag;
        float           dither_intensity;
        short           bake_mode;
        short           bake_flag;
        short           bake_filter;
        short           bake_samples;
        float           bake_biasdist;
        float           bake_user_scale;
        char            pic[1024];
        int             stamp;
        short           stamp_font_id;
        char            _pad3[2];
        char            stamp_udata[768];
        float           fg_stamp[4];
        float           bg_stamp[4];
        char            seq_prev_type;
        char            seq_rend_type;
        char            seq_flag;
        char            _pad5[5];
        short           simplify_subsurf;
        short           simplify_subsurf_render;
        short           simplify_gpencil;
        short           simplify_smoke_ignore_highres;
        float           simplify_particles;
        float           simplify_particles_render;
        int             line_thickness_mode;
        float           unit_line_thickness;
        char            engine[32];
        char            _pad2[4];
        BakeData        bake;
        int             preview_start_resolution;
        short           preview_pixel_size;
        short           debug_pass_type;
        ListBase        views;
        short           actview;
        short           views_format;
        short           hair_type;
        short           hair_subdiv;
        CurveMapping    mblur_shutter_curve;
    };

    struct Scene
    {
        ID                             id;
        AnimData *                     adt;
        Object *                       camera;
        World *                        world;
        Scene *                        set;
        ListBase                       base;
        Base *                         basact;
        void *                         _pad1;
        View3DCursor                   cursor;
        int                            lay;
        int                            layact;
        char                           _pad2[4];
        short                          flag;
        char                           use_nodes;
        char                           _pad3[1];
        bNodeTree *                    nodetree;
        Editing *                      ed;
        ToolSettings *                 toolsettings;
        void *                         _pad4;
        DisplaySafeAreas               safe_areas;
        RenderData                     r;
        AudioData                      audio;
        ListBase                       markers;
        ListBase                       transform_spaces;
        TransformOrientationSlot       orientation_slots[4];
        void *                         sound_scene;
        void *                         playback_handle;
        void *                         sound_scrub_handle;
        void *                         speaker_handles;
        void *                         fps_info;
        GHash *                        depsgraph_hash;
        char                           _pad7[4];
        int                            active_keyingset;
        ListBase                       keyingsets;
        UnitSettings                   unit;
        bGPdata *                      gpd;
        MovieClip *                    clip;
        PhysicsSettings                physics_settings;
        void *                         _pad8;
        CustomData_MeshMasks           customdata_mask;
        CustomData_MeshMasks           customdata_mask_modal;
        ColorManagedViewSettings       view_settings;
        ColorManagedDisplaySettings    display_settings;
        ColorManagedColorspaceSettings sequencer_colorspace_settings;
        RigidBodyWorld *               rigidbody_world;
        PreviewImage *                 preview;
        ListBase                       view_layers;
        Collection *                   master_collection;
        SceneCollection *              collection;
        IDProperty *                   layer_properties;
        SceneDisplay                   display;
        SceneEEVEE                     eevee;
    };

    struct SpaceButs
    {
        SpaceLink *next;
        SpaceLink *prev;
        ListBase   regionbase;
        char       spacetype;
        char       link_flag;
        char       _pad0[6];
        View2D     v2d;
        short      space_subtype;
        short      mainb;
        short      mainbo;
        short      mainbuser;
        short      preview;
        char       _pad[5];
        char       flag;
        void *     path;
        int        pathflag;
        int        dataicon;
        ID *       pinid;
        void *     texuser;
    };

    struct SpaceOops
    {
        SpaceLink *   next;
        SpaceLink *   prev;
        ListBase      regionbase;
        char          spacetype;
        char          link_flag;
        char          _pad0[6];
        View2D        v2d;
        ListBase      tree;
        BLI_mempool * treestore;
        char          search_string[64];
        TreeStoreElem search_tse;
        short         flag;
        short         outlinevis;
        short         storeflag;
        char          search_flags;
        char          sync_select_dirty;
        int           filter;
        char          filter_state;
        char          show_restrict_flags;
        short         filter_id_type;
        void *        treehash;
    };

    struct SpaceIpo
    {
        SpaceLink *        next;
        SpaceLink *        prev;
        ListBase           regionbase;
        char               spacetype;
        char               link_flag;
        char               _pad0[6];
        View2D             v2d;
        bDopeSheet *       ads;
        short              mode;
        short              autosnap;
        int                flag;
        float              cursorTime;
        float              cursorVal;
        int                around;
        char               _pad[4];
        SpaceGraph_Runtime runtime;
    };

    struct SpaceNla
    {
        SpaceLink * next;
        SpaceLink * prev;
        ListBase    regionbase;
        char        spacetype;
        char        link_flag;
        char        _pad0[6];
        short       autosnap;
        short       flag;
        char        _pad[4];
        bDopeSheet *ads;
        View2D      v2d;
    };

    struct SpaceSeq
    {
        SpaceLink *     next;
        SpaceLink *     prev;
        ListBase        regionbase;
        char            spacetype;
        char            link_flag;
        char            _pad0[6];
        View2D          v2d;
        float           xof;
        float           yof;
        short           mainb;
        short           render_size;
        short           chanshown;
        short           zebra;
        int             flag;
        float           zoom;
        int             view;
        int             overlay_type;
        int             draw_flag;
        char            _pad[4];
        bGPdata *       gpd;
        SequencerScopes scopes;
        char            multiview_eye;
        char            _pad2[7];
        GPUFX *         compositor;
        void *          _pad3;
    };

    struct SpaceImage
    {
        SpaceLink *   next;
        SpaceLink *   prev;
        ListBase      regionbase;
        char          spacetype;
        char          link_flag;
        char          _pad0[6];
        Image *       image;
        ImageUser     iuser;
        Scopes        scopes;
        Histogram     sample_line_hist;
        bGPdata *     gpd;
        float         cursor[2];
        float         xof;
        float         yof;
        float         zoom;
        float         centx;
        float         centy;
        char          mode;
        char          mode_prev;
        char          pin;
        char          _pad1;
        short         curtile;
        short         lock;
        char          dt_uv;
        char          sticky;
        char          dt_uvstretch;
        char          around;
        int           flag;
        char          pixel_snap_mode;
        char          _pad2[3];
        int           tile_grid_shape[2];
        MaskSpaceInfo mask_info;
    };

    struct SpaceText
    {
        SpaceLink *       next;
        SpaceLink *       prev;
        ListBase          regionbase;
        char              spacetype;
        char              link_flag;
        char              _pad0[6];
        Text *            text;
        int               top;
        int               left;
        char              _pad1[4];
        short             flags;
        short             lheight;
        int               tabnumber;
        char              wordwrap;
        char              doplugins;
        char              showlinenrs;
        char              showsyntax;
        char              line_hlight;
        char              overwrite;
        char              live_edit;
        char              _pad2[1];
        char              findstr[256];
        char              replacestr[256];
        short             margin_column;
        char              _pad3[2];
        SpaceText_Runtime runtime;
    };

    struct SpaceNode
    {
        SpaceLink *        next;
        SpaceLink *        prev;
        ListBase           regionbase;
        char               spacetype;
        char               link_flag;
        char               _pad0[6];
        View2D             v2d;
        ID *               id;
        ID *               from;
        short              flag;
        char               _pad1[2];
        float              aspect;
        char               _pad2[4];
        float              xof;
        float              yof;
        float              zoom;
        float              cursor[2];
        ListBase           treepath;
        bNodeTree *        nodetree;
        bNodeTree *        edittree;
        char               tree_idname[64];
        int                treetype;
        char               _pad3[4];
        short              texfrom;
        short              shaderfrom;
        short              recalc;
        char               insert_ofs_dir;
        char               _pad4;
        ListBase           linkdrag;
        NodeInsertOfsData *iofsd;
        bGPdata *          gpd;
    };

    struct SpaceClip
    {
        SpaceLink *     next;
        SpaceLink *     prev;
        ListBase        regionbase;
        char            spacetype;
        char            link_flag;
        char            _pad0[6];
        char            _pad1[4];
        float           xof;
        float           yof;
        float           xlockof;
        float           ylockof;
        float           zoom;
        MovieClipUser   user;
        MovieClip *     clip;
        MovieClipScopes scopes;
        int             flag;
        short           mode;
        short           view;
        int             path_length;
        float           loc[2];
        float           scale;
        float           angle;
        char            _pad[4];
        float           stabmat[4][4];
        float           unistabmat[4][4];
        int             postproc_flag;
        short           gpencil_src;
        char            _pad2[2];
        int             around;
        char            _pad4[4];
        float           cursor[2];
        MaskSpaceInfo   mask_info;
    };

    struct bTheme
    {
        bTheme *       next;
        bTheme *       prev;
        char           name[32];
        ThemeUI        tui;
        ThemeSpace     tbuts;
        ThemeSpace     tv3d;
        ThemeSpace     tfile;
        ThemeSpace     tipo;
        ThemeSpace     tinfo;
        ThemeSpace     tact;
        ThemeSpace     tnla;
        ThemeSpace     tseq;
        ThemeSpace     tima;
        ThemeSpace     text;
        ThemeSpace     toops;
        ThemeSpace     tnode;
        ThemeSpace     tuserpref;
        ThemeSpace     tconsole;
        ThemeSpace     tclip;
        ThemeSpace     ttopbar;
        ThemeSpace     tstatusbar;
        ThemeWireColor tarm[20];
        int            active_theme_area;
        char           _pad0[4];
    };

    struct UserDef
    {
        int                   versionfile;
        int                   subversionfile;
        int                   flag;
        short                 dupflag;
        char                  pref_flag;
        char                  savetime;
        char                  mouse_emulate_3_button_modifier;
        char                  _pad4[3];
        char                  tempdir[768];
        char                  fontdir[768];
        char                  renderdir[1024];
        char                  render_cachedir[768];
        char                  textudir[768];
        char                  pythondir[768];
        char                  sounddir[768];
        char                  i18ndir[768];
        char                  image_editor[1024];
        char                  anim_player[1024];
        int                   anim_player_preset;
        short                 v2d_min_gridsize;
        short                 timecode_style;
        short                 versions;
        short                 dbl_click_time;
        char                  _pad0[2];
        char                  wheellinescroll;
        char                  mini_axis_type;
        int                   uiflag;
        char                  uiflag2;
        char                  gpu_flag;
        char                  _pad8[6];
        char                  app_flag;
        char                  viewzoom;
        short                 language;
        int                   mixbufsize;
        int                   audiodevice;
        int                   audiorate;
        int                   audioformat;
        int                   audiochannels;
        float                 ui_scale;
        int                   ui_line_width;
        int                   dpi;
        float                 dpi_fac;
        float                 inv_dpi_fac;
        float                 pixelsize;
        int                   virtual_pixel;
        int                   scrollback;
        char                  node_margin;
        char                  _pad2[1];
        short                 transopts;
        short                 menuthreshold1;
        short                 menuthreshold2;
        char                  app_template[64];
        ListBase              themes;
        ListBase              uifonts;
        ListBase              uistyles;
        ListBase              user_keymaps;
        ListBase              user_keyconfig_prefs;
        ListBase              addons;
        ListBase              autoexec_paths;
        ListBase              user_menus;
        char                  keyconfigstr[64];
        short                 undosteps;
        char                  _pad1[2];
        int                   undomemory;
        float                 gpu_viewport_quality;
        short                 gp_manhattendist;
        short                 gp_euclideandist;
        short                 gp_eraser;
        short                 gp_settings;
        char                  _pad13[4];
        SolidLight            light_param[4];
        float                 light_ambient[3];
        char                  _pad3[4];
        short                 gizmo_flag;
        short                 gizmo_size;
        short                 edit_studio_light;
        short                 lookdev_sphere_size;
        short                 vbotimeout;
        short                 vbocollectrate;
        short                 textimeout;
        short                 texcollectrate;
        int                   memcachelimit;
        int                   prefetchframes;
        float                 pad_rot_angle;
        char                  _pad12[4];
        short                 rvisize;
        short                 rvibright;
        short                 recent_files;
        short                 smooth_viewtx;
        short                 glreslimit;
        short                 curssize;
        short                 color_picker_type;
        char                  auto_smoothing_new;
        char                  ipo_new;
        char                  keyhandles_new;
        char                  _pad11[2];
        char                  view_frame_type;
        int                   view_frame_keyframes;
        float                 view_frame_seconds;
        char                  _pad7[6];
        short                 widget_unit;
        short                 anisotropic_filter;
        short                 tablet_api;
        float                 pressure_threshold_max;
        float                 pressure_softness;
        float                 ndof_sensitivity;
        float                 ndof_orbit_sensitivity;
        float                 ndof_deadzone;
        int                   ndof_flag;
        short                 ogl_multisamples;
        short                 image_draw_method;
        float                 glalphaclip;
        short                 autokey_mode;
        short                 autokey_flag;
        char                  text_render;
        char                  navigation_mode;
        char                  _pad9[2];
        float                 view_rotate_sensitivity_turntable;
        float                 view_rotate_sensitivity_trackball;
        ColorBand             coba_weight;
        float                 sculpt_paint_overlay_col[3];
        float                 gpencil_new_layer_col[4];
        char                  drag_threshold_mouse;
        char                  drag_threshold_tablet;
        char                  drag_threshold;
        char                  move_threshold;
        char                  font_path_ui[1024];
        char                  font_path_ui_mono[1024];
        int                   compute_device_type;
        float                 fcu_inactive_alpha;
        short                 pie_tap_timeout;
        short                 pie_initial_timeout;
        short                 pie_animation_timeout;
        short                 pie_menu_confirm;
        short                 pie_menu_radius;
        short                 pie_menu_threshold;
        short                 opensubdiv_compute_type;
        short                 gpencil_multisamples;
        char                  factor_display_type;
        char                  viewport_aa;
        char                  render_display_type;
        char                  filebrowser_display_type;
        char                  _pad5[4];
        WalkNavigation        walk_navigation;
        UserDef_SpaceData     space_data;
        UserDef_FileSpaceData file_space_data;
        UserDef_Experimental  experimental;
        UserDef_Runtime       runtime;
    };

    struct ARegion
    {
        ARegion *       next;
        ARegion *       prev;
        View2D          v2d;
        rcti            winrct;
        rcti            drawrct;
        short           winx;
        short           winy;
        short           visible;
        short           regiontype;
        short           alignment;
        short           flag;
        short           sizex;
        short           sizey;
        short           do_draw;
        short           do_draw_overlay;
        short           overlap;
        short           flagfullscreen;
        ARegionType *   type;
        ListBase        uiblocks;
        ListBase        panels;
        ListBase        panels_category_active;
        ListBase        ui_lists;
        ListBase        ui_previews;
        ListBase        handlers;
        ListBase        panels_category;
        wmGizmoMap *    gizmo_map;
        wmTimer *       regiontimer;
        wmDrawBuffer *  draw_buffer;
        char *          headerstr;
        void *          regiondata;
        ARegion_Runtime runtime;
    };

    struct CurvesModifierData
    {
        SequenceModifierData modifier;
        CurveMapping         curve_mapping;
    };

    struct HueCorrectModifierData
    {
        SequenceModifierData modifier;
        CurveMapping         curve_mapping;
    };

    struct bPoseChannel
    {
        bPoseChannel *        next;
        bPoseChannel *        prev;
        IDProperty *          prop;
        ListBase              constraints;
        char                  name[64];
        short                 flag;
        short                 ikflag;
        short                 protectflag;
        short                 agrp_index;
        char                  constflag;
        char                  selectflag;
        char                  drawflag;
        char                  bboneflag;
        char                  _pad0[4];
        Bone *                bone;
        bPoseChannel *        parent;
        bPoseChannel *        child;
        ListBase              iktree;
        ListBase              siktree;
        bMotionPath *         mpath;
        Object *              custom;
        bPoseChannel *        custom_tx;
        float                 custom_scale;
        char                  _pad1[4];
        float                 loc[3];
        float                 size[3];
        float                 eul[3];
        float                 quat[4];
        float                 rotAxis[3];
        float                 rotAngle;
        short                 rotmode;
        char                  _pad[2];
        float                 chan_mat[4][4];
        float                 pose_mat[4][4];
        float                 disp_mat[4][4];
        float                 disp_tail_mat[4][4];
        float                 constinv[4][4];
        float                 pose_head[3];
        float                 pose_tail[3];
        float                 limitmin[3];
        float                 limitmax[3];
        float                 stiffness[3];
        float                 ikstretch;
        float                 ikrotweight;
        float                 iklinweight;
        float                 roll1;
        float                 roll2;
        float                 curveInX;
        float                 curveInY;
        float                 curveOutX;
        float                 curveOutY;
        float                 ease1;
        float                 ease2;
        float                 scaleIn;
        float                 scale_in_y;
        float                 scaleOut;
        float                 scale_out_y;
        bPoseChannel *        bbone_prev;
        bPoseChannel *        bbone_next;
        void *                temp;
        bPoseChannelDrawData *draw_data;
        bPoseChannel *        orig_pchan;
        bPoseChannel_Runtime  runtime;
    };

    struct SpaceAction
    {
        SpaceLink *         next;
        SpaceLink *         prev;
        ListBase            regionbase;
        char                spacetype;
        char                link_flag;
        char                _pad0[6];
        View2D              v2d;
        bAction *           action;
        bDopeSheet          ads;
        float               timeslide;
        short               flag;
        char                mode;
        char                mode_prev;
        char                autosnap;
        char                cache_display;
        char                _pad1[6];
        SpaceAction_Runtime runtime;
    };

    struct NodeImageFile
    {
        char            name[1024];
        ImageFormatData im_format;
        int             sfra;
        int             efra;
    };

    struct NodeImageMultiFile
    {
        char            base_path[1024];
        ImageFormatData format;
        int             sfra;
        int             efra;
        int             active_input;
        char            _pad[4];
    };

    struct NodeImageMultiFileSocket
    {
        short           use_render_format;
        short           use_node_format;
        char            _pad1[4];
        char            path[1024];
        ImageFormatData format;
        char            layer[30];
        char            _pad2[2];
    };

    struct ColorMapping
    {
        ColorBand coba;
        float     bright;
        float     contrast;
        float     saturation;
        int       flag;
        float     blend_color[3];
        float     blend_factor;
        int       blend_type;
        char      _pad[4];
    };

    struct NodeTexBase
    {
        TexMapping   tex_mapping;
        ColorMapping color_mapping;
    };

    struct NodeTexSky
    {
        NodeTexBase base;
        int         sky_model;
        float       sun_direction[3];
        float       turbidity;
        float       ground_albedo;
    };

    struct NodeTexImage
    {
        NodeTexBase base;
        ImageUser   iuser;
        int         color_space;
        int         projection;
        float       projection_blend;
        int         interpolation;
        int         extension;
        char        _pad[4];
    };

    struct NodeTexChecker
    {
        NodeTexBase base;
    };

    struct NodeTexBrick
    {
        NodeTexBase base;
        int         offset_freq;
        int         squash_freq;
        float       offset;
        float       squash;
    };

    struct NodeTexEnvironment
    {
        NodeTexBase base;
        ImageUser   iuser;
        int         color_space;
        int         projection;
        int         interpolation;
        char        _pad[4];
    };

    struct NodeTexGradient
    {
        NodeTexBase base;
        int         gradient_type;
        char        _pad[4];
    };

    struct NodeTexNoise
    {
        NodeTexBase base;
        int         dimensions;
        char        _pad[4];
    };

    struct NodeTexVoronoi
    {
        NodeTexBase base;
        int         dimensions;
        int         feature;
        int         distance;
        int         coloring;
    };

    struct NodeTexMusgrave
    {
        NodeTexBase base;
        int         musgrave_type;
        int         dimensions;
    };

    struct NodeTexWave
    {
        NodeTexBase base;
        int         wave_type;
        int         wave_profile;
    };

    struct NodeTexMagic
    {
        NodeTexBase base;
        int         depth;
        char        _pad[4];
    };

    struct NodeShaderTexPointDensity
    {
        NodeTexBase  base;
        short        point_source;
        char         _pad[2];
        int          particle_system;
        float        radius;
        int          resolution;
        short        space;
        short        interpolation;
        short        color_source;
        short        ob_color_source;
        char         vertex_attribute_name[64];
        PointDensity pd;
        int          cached_resolution;
        char         _pad2[4];
    };

    struct wmWindowManager
    {
        ID           id;
        wmWindow *   windrawable;
        wmWindow *   winactive;
        ListBase     windows;
        short        initialized;
        short        file_saved;
        short        op_undo_depth;
        short        outliner_sync_select_dirty;
        ListBase     operators;
        ListBase     queue;
        ReportList   reports;
        ListBase     jobs;
        ListBase     paintcursors;
        ListBase     drags;
        ListBase     keyconfigs;
        wmKeyConfig *defaultconf;
        wmKeyConfig *addonconf;
        wmKeyConfig *userconf;
        ListBase     timers;
        wmTimer *    autosavetimer;
        UndoStack *  undo_stack;
        char         is_interface_locked;
        char         _pad[7];
        wmMsgBus *   message_bus;
    };

    struct wmWindow
    {
        wmWindow *             next;
        wmWindow *             prev;
        void *                 ghostwin;
        void *                 gpuctx;
        wmWindow *             parent;
        Scene *                scene;
        Scene *                new_scene;
        char                   view_layer_name[64];
        WorkSpaceInstanceHook *workspace_hook;
        ScrAreaMap             global_areas;
        bScreen *              screen;
        short                  posx;
        short                  posy;
        short                  sizex;
        short                  sizey;
        short                  windowstate;
        short                  monitor;
        short                  active;
        short                  cursor;
        short                  lastcursor;
        short                  modalcursor;
        short                  grabcursor;
        short                  addmousemove;
        int                    winid;
        short                  lock_pie_event;
        short                  last_pie_event;
        wmEvent *              eventstate;
        wmGesture *            tweak;
        wmIMEData *            ime_data;
        ListBase               queue;
        ListBase               handlers;
        ListBase               modalhandlers;
        ListBase               gesture;
        Stereo3dFormat *       stereo3d_format;
        ListBase               drawcalls;
        void *                 cursor_keymap_status;
    };

    struct MovieTracking
    {
        MovieTrackingSettings       settings;
        MovieTrackingCamera         camera;
        ListBase                    tracks;
        ListBase                    plane_tracks;
        MovieTrackingReconstruction reconstruction;
        MovieTrackingStabilization  stabilization;
        MovieTrackingTrack *        act_track;
        MovieTrackingPlaneTrack *   act_plane_track;
        ListBase                    objects;
        int                         objectnr;
        int                         tot_object;
        MovieTrackingStats *        stats;
        MovieTrackingDopesheet      dopesheet;
    };

    struct MovieClip
    {
        ID                             id;
        AnimData *                     adt;
        char                           name[1024];
        int                            source;
        int                            lastframe;
        int                            lastsize[2];
        float                          aspx;
        float                          aspy;
        Anim *                         anim;
        MovieClipCache *               cache;
        bGPdata *                      gpd;
        MovieTracking                  tracking;
        void *                         tracking_context;
        MovieClipProxy                 proxy;
        int                            flag;
        int                            len;
        int                            start_frame;
        int                            frame_offset;
        ColorManagedColorspaceSettings colorspace_settings;
        MovieClip_Runtime              runtime;
    };

    struct ViewLayer
    {
        ViewLayer *      next;
        ViewLayer *      prev;
        char             name[64];
        short            flag;
        char             _pad[6];
        ListBase         object_bases;
        SceneStats *     stats;
        Base *           basact;
        ListBase         layer_collections;
        LayerCollection *active_collection;
        int              layflag;
        int              passflag;
        float            pass_alpha_threshold;
        int              samples;
        Material *       mat_override;
        IDProperty *     id_properties;
        FreestyleConfig  freestyle_config;
        ListBase         drawdata;
        Base **          object_bases_array;
        GHash *          object_bases_hash;
    };

#pragma endregion

}  // namespace Blender
#endif  //_Blender_
