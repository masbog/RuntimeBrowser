/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAuthoringEnvironment : NSObject {
    unsigned short _arrowIndicesCount;
    const void *_arrowIndicesOffset;
    int _authoringDisplayMask;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _boldLogsInfo;
    struct { 
        struct { 
            struct __C3DImage {} *texture; 
            struct CGSize { 
                float width; 
                float height; 
            } textureSize; 
            bool isRetina; 
        } textureInfo; 
        float lineHeight; 
        short characterWidth_texture; 
        float characterWidth_typography; 
        short characterHeight_texture; 
        struct { /* ? */ } *symbolRects; 
    } _boldTextInfo;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } *_colorAndTextureProgram;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } *_colorOnlyProgram;
    Class _componentType;
    id _delegate;
    struct __C3DRasterizerStates { } *_depthOffCullOffStates;
    struct __C3DRasterizerStates { } *_depthOffCullOnStates;
    struct __C3DRasterizerStates { } *_depthOnCullOffStates;
    struct __C3DRasterizerStates { } *_depthOnCullOnStates;
    float _drawScale;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _dynamicLinesInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _dynamicTrianglesInfo;
    int _editingSpace;
    struct __C3DEngineContext { } *_engineContext;
    BOOL _graphicalSelectionEnabled;
    float _gridUnit;
    unsigned int _hasLighting;
    NSSet *_initialSelection;
    NSSet *_initialSubSelection;
    BOOL _isEditingSubComponent;
    float _lastGridDistance;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _lightProbesInfo;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } *_lightProbesProgram;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _logsInfo;
    SCNManipulator *_manipulator;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } *_noColorProgram;
    struct { 
        struct { 
            struct __C3DImage {} *texture; 
            struct CGSize { 
                float width; 
                float height; 
            } textureSize; 
            bool isRetina; 
        } textureInfo; 
        float lineHeight; 
        short characterWidth_texture; 
        float characterWidth_typography; 
        short characterHeight_texture; 
        struct { /* ? */ } *symbolRects; 
    } _normalTextInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _overlayDynamicLinesInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _overlayDynamicTriangleInfo;
    struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; } *_pass;
    unsigned short _quadrantIndicesCount;
    const void *_quadrantIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    const void *_quadrantRingIndicesOffset;
    <SCNSceneRenderer> *_sceneRenderer;
    NSArray *_selectedNodes;
    BOOL _selecting;
    NSMutableOrderedSet *_selection;
    BOOL _selectionIsReadonly;
    void_selectionP0;
    void_selectionP1;
    BOOL _shouldSnapOnGrid;
    BOOL _shouldSnapToAlign;
    struct { 
        bool initialized; 
        bool showFullStatistics; 
        float fps; 
        float waitDisplayLinkTime; 
        int pressedButtonIndex; 
        struct __CFString {} *fpsString; 
        struct __CFString {} *shortString; 
        unsigned int lightingStatistics[9]; 
        struct __C3DEngineStats { 
            unsigned int verticesProcessed; 
            unsigned int primitivesProcessed; 
            unsigned int drawCount; 
            unsigned int drawStep; 
            unsigned int frameCount; 
            unsigned int fboSwitches; 
            unsigned int vboSwitches; 
            unsigned int attSwitches; 
            unsigned int attEnabling; 
            unsigned int iboSwitches; 
            unsigned int vaoSwitches; 
            unsigned int prgSwitches; 
            unsigned int texSwitches; 
            unsigned int rssSwitches; 
            unsigned int getCount; 
            unsigned int uniformFloatSent; 
            unsigned int uniformIntSent; 
            unsigned int uniformVector2Sent; 
            unsigned int uniformVector3Sent; 
            unsigned int uniformVector4Sent; 
            unsigned int uniformMatrix4Sent; 
            unsigned int vboUploaded; 
            unsigned int iboUploaded; 
            unsigned int texUploaded; 
            double cpuTime; 
            double cstrTime; 
            double phyTime; 
            double prtTime; 
            double animTime; 
            double syncTime; 
            double cullTime; 
            double liteTime; 
            double sortTime; 
            double twoDTime; 
            double delegateTime; 
            double glFlushTime; 
            double waitDisplayLinkTime; 
            double lastDisplayLinkTime; 
            unsigned int prgCount; 
            unsigned int texCount; 
            unsigned int fboCount; 
            unsigned int vboCount; 
            unsigned int rboCount; 
            unsigned int iboCount; 
            unsigned int cboCount; 
            unsigned int vaoCount; 
            unsigned int fboMemory; 
            unsigned int rboMemory; 
            unsigned int vboMemory; 
            unsigned int iboMemory; 
            unsigned int cboMemory; 
            unsigned int texMemory; 
            unsigned int backBufferMemory; 
            unsigned int depthBuffersMemory; 
            double frmAvgTime; 
            double frmMinTime; 
            double frmMaxTime; 
            double frameTimeHistory[60]; 
            unsigned int frameTimeCurrentIndex; 
            double startTime; 
            double lastFrameTime; 
        } stats; 
    } _statisticsInfo;
    NSMutableOrderedSet *_subSelection;
    BOOL _surroundToSelect;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _textInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _upArrowInfo;
    NSMutableArray *_visibleManipulableItems;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } *_wireframeProgram;
    void *_wireframeRenderer;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _xyQuadrantInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned int drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned int verticesStride; 
            unsigned int colorsStride; 
            unsigned int uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    } _xyQuadrantRingInfo;
}

@property (nonatomic) int authoringDisplayMask;
@property (nonatomic) Class componentType;
@property (nonatomic) <SCNAuthoringEnvironmentDelegate> *delegate;
@property (nonatomic) int editingSpace;
@property (nonatomic) BOOL graphicalSelectionEnabled;
@property (nonatomic, readonly) float gridUnit;
@property (nonatomic, readonly) BOOL isEditingSubComponent;
@property (nonatomic, readonly) SCNManipulator *manipulator;
@property (readonly) <SCNSceneRenderer> *sceneRenderer;
@property (nonatomic, readonly) NSArray *selectedNodes;
@property (nonatomic) BOOL selectionIsReadonly;
@property (nonatomic) BOOL shouldSnapOnGrid;
@property (nonatomic) BOOL shouldSnapToAlign;
@property (nonatomic, retain) NSOrderedSet *subSelection;
@property (nonatomic, readonly) NSIndexSet *subSelectionIndexes;
@property (nonatomic) BOOL surroundToSelect;
@property (nonatomic, readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } viewMatrix;

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;
+ (int)defaultAuthoringDisplayMask;

- (id)_initWithEngineContext:(struct __C3DEngineContext { }*)arg1;
- (void)_updateManipulatorTargets;
- (int)authoringDisplayMask;
- (void)beginEditingNode:(id)arg1;
- (void)beginEditingNodeComponents:(id)arg1;
- (void)beginEditingNodes:(id)arg1;
- (void)cancelEdition;
- (Class)componentType;
- (void)dealloc;
- (id)delegate;
- (BOOL)didTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawLineFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 color:(id)arg3;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 color:(id)arg3;
- (int)editingSpace;
- (BOOL)graphicalSelectionEnabled;
- (float)gridUnit;
- (id)init;
- (BOOL)isEditingSubComponent;
- (id)manipulator;
- (void)saveInitialSelection;
- (id)sceneRenderer;
- (id)selectedItems;
- (id)selectedNodes;
- (BOOL)selectionIsReadonly;
- (void)setAuthoringDisplayMask:(int)arg1;
- (void)setComponentType:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingSpace:(int)arg1;
- (void)setGraphicalSelectionEnabled:(BOOL)arg1;
- (void)setSelectionIsReadonly:(BOOL)arg1;
- (void)setShouldSnapOnGrid:(BOOL)arg1;
- (void)setShouldSnapToAlign:(BOOL)arg1;
- (void)setSubSelection:(id)arg1;
- (void)setSurroundToSelect:(BOOL)arg1;
- (BOOL)shouldSnapOnGrid;
- (BOOL)shouldSnapToAlign;
- (id)subSelection;
- (id)subSelectionIndexes;
- (BOOL)surroundToSelect;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })viewMatrix;

@end
