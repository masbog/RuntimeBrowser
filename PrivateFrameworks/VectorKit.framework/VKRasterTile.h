/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTile : VKTile {
    NSData *_data;
    int _genericTileType;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _gglTexture;
    BOOL _hasGenericTileType;
    struct RenderItem { 
        int (**_vptr$RenderItem)(); 
        char *_name; 
        struct RenderState {} *_renderState; 
        struct ShaderSetup {} *_shaderSetup; 
        unsigned int _stencilRefValue; 
        unsigned int _renderOrder; 
        float _lineWidth; 
        struct Mesh {} *_mesh; 
        struct Range { 
            unsigned int _start; 
            unsigned int _count; 
        } _range; 
        struct Range {} *_ranges; 
        unsigned int _rangeCount; 
    } _renderItem;
    struct unique_ptr<ggl::TextureWithReverseAlpha::Shader::Setup, std::__1::default_delete<ggl::TextureWithReverseAlpha::Shader::Setup> > { 
        struct __compressed_pair<ggl::TextureWithReverseAlpha::Shader::Setup *, std::__1::default_delete<ggl::TextureWithReverseAlpha::Shader::Setup> > { 
            struct Setup {} *__first_; 
        } __ptr_; 
    } _shaderReverseAlphaSetup;
    struct unique_ptr<ggl::Texture::Shader::Setup, std::__1::default_delete<ggl::Texture::Shader::Setup> > { 
        struct __compressed_pair<ggl::Texture::Shader::Setup *, std::__1::default_delete<ggl::Texture::Shader::Setup> > { 
            struct Setup {} *__first_; 
        } __ptr_; 
    } _shaderSetup;
    struct unique_ptr<ggl::Clut::Shader::Setup, std::__1::default_delete<ggl::Clut::Shader::Setup> > { 
        struct __compressed_pair<ggl::Clut::Shader::Setup *, std::__1::default_delete<ggl::Clut::Shader::Setup> > { 
            struct Setup {} *__first_; 
        } __ptr_; 
    } _shaderSetupCLUT;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _styleManager;
}

@property (nonatomic, readonly) int genericTileType;
@property (nonatomic) struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; } gglTexture;
@property (nonatomic, readonly) BOOL hasGenericTileType;
@property (nonatomic, readonly) struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct Range {} *x10; unsigned int x11; }*renderItem;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TextureData2D { int (**x1)(); unsigned int x2; int x3; unsigned int x4; unsigned int x5; char *x6; char **x7; unsigned int x8; }*)buildTextureDataFromCGImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (int)genericTileType;
- (void)gglBuildTexture:(struct Device { int (**x1)(); int x2; }*)arg1;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })gglTexture;
- (BOOL)hasGenericTileType;
- (void)immediateLoad:(struct Device { int (**x1)(); int x2; }*)arg1;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 imageData:(id)arg2 styleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 imageData:(id)arg2 styleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg3 genericTileType:(int)arg4;
- (struct CGImage { }*)newCGImageFromData:(id)arg1;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct Range {} *x10; unsigned int x11; }*)renderItem;
- (void)setGglTexture:(struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setupClutShaderWithRenderState:(struct RenderState { int (**x1)(); char *x2; struct DepthState { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; bool x_3_1_4; bool x_3_1_5; float x_3_1_6; float x_3_1_7; } x3; struct ColorState { int (**x_4_1_1)(); bool x_4_1_2; bool x_4_1_3; bool x_4_1_4; bool x_4_1_5; } x4; struct BlendState { int (**x_5_1_1)(); bool x_5_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_5_1_3; int x_5_1_4; int x_5_1_5; int x_5_1_6; int x_5_1_7; int x_5_1_8; int x_5_1_9; } x5; struct StencilState { int (**x_6_1_1)(); bool x_6_1_2; bool x_6_1_3; unsigned int x_6_1_4; int x_6_1_5; int x_6_1_6; unsigned int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; struct ScissorState { int (**x_7_1_1)(); bool x_7_1_2; struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_3_1[2]; } x_3_2_1; struct Matrix<float, 2, 1> { float x_2_3_1[2]; } x_3_2_2; } x_7_1_3; } x7; struct PolygonState { int (**x_8_1_1)(); bool x_8_1_2; int x_8_1_3; int x_8_1_4; unsigned int x_8_1_5; } x8; }*)arg1 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg2 clutTexture:(struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*)arg3 clutBlend:(float)arg4;
- (void)setupNormalShaderWithRenderState:(struct RenderState { int (**x1)(); char *x2; struct DepthState { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; bool x_3_1_4; bool x_3_1_5; float x_3_1_6; float x_3_1_7; } x3; struct ColorState { int (**x_4_1_1)(); bool x_4_1_2; bool x_4_1_3; bool x_4_1_4; bool x_4_1_5; } x4; struct BlendState { int (**x_5_1_1)(); bool x_5_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_5_1_3; int x_5_1_4; int x_5_1_5; int x_5_1_6; int x_5_1_7; int x_5_1_8; int x_5_1_9; } x5; struct StencilState { int (**x_6_1_1)(); bool x_6_1_2; bool x_6_1_3; unsigned int x_6_1_4; int x_6_1_5; int x_6_1_6; unsigned int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; struct ScissorState { int (**x_7_1_1)(); bool x_7_1_2; struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_3_1[2]; } x_3_2_1; struct Matrix<float, 2, 1> { float x_2_3_1[2]; } x_3_2_2; } x_7_1_3; } x7; struct PolygonState { int (**x_8_1_1)(); bool x_8_1_2; int x_8_1_3; int x_8_1_4; unsigned int x_8_1_5; } x8; }*)arg1 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg2;
- (void)setupReverseAlphaShaderWithRenderState:(struct RenderState { int (**x1)(); char *x2; struct DepthState { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; bool x_3_1_4; bool x_3_1_5; float x_3_1_6; float x_3_1_7; } x3; struct ColorState { int (**x_4_1_1)(); bool x_4_1_2; bool x_4_1_3; bool x_4_1_4; bool x_4_1_5; } x4; struct BlendState { int (**x_5_1_1)(); bool x_5_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_5_1_3; int x_5_1_4; int x_5_1_5; int x_5_1_6; int x_5_1_7; int x_5_1_8; int x_5_1_9; } x5; struct StencilState { int (**x_6_1_1)(); bool x_6_1_2; bool x_6_1_3; unsigned int x_6_1_4; int x_6_1_5; int x_6_1_6; unsigned int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; struct ScissorState { int (**x_7_1_1)(); bool x_7_1_2; struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_3_1[2]; } x_3_2_1; struct Matrix<float, 2, 1> { float x_2_3_1[2]; } x_3_2_2; } x_7_1_3; } x7; struct PolygonState { int (**x_8_1_1)(); bool x_8_1_2; int x_8_1_3; int x_8_1_4; unsigned int x_8_1_5; } x8; }*)arg1 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg2 roadAlpha:(float)arg3;

@end
