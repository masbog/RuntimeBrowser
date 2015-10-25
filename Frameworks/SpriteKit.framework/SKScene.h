/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKScene : SKEffectNode {
    BOOL __needsRender;
    BOOL __needsUpdate;
    PKPhysicsWorld *__pkPhysicsWorld;
    NSMutableArray *_allChildenWithConstraints;
    AVAudioEngine *_audioEngine;
    AVAudioEnvironmentNode *_avAudioEnvironmentNode;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    SKCameraNode *_camera;
    <SKSceneDelegate> *_delegate;
    BOOL _isSetup;
    double _lastUpdate;
    SKNode *_listener;
    double _pausedTime;
    SKPhysicsWorld *_physicsWorld;
    SKPhysicsBody *_scenePinBody;
    struct SKCSceneNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; id x4; struct SKCNode {} *x5; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_6_1_1; struct SKCNode {} **x_6_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_6_1_3; } x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_7_1_1; struct SKCNode {} **x_7_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_7_1_3; } x7; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_8_1_1; struct SKCNode {} **x_8_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_8_1_3; } x8; id x9; float x10; bool x11; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_12_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_12_1_2; } x12; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_13_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_13_1_2; } x13; bool x14; id x15; short x16; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x17; void*x18; const void*x19; double x20; void*x21; void*x22; void*x23; const void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; struct PKPath {} *x33; struct __shared_weak_count {} *x34; } *_skcSceneNode;
    NSMapTable *_touchMap;
    BOOL _usesExplicitRender;
    BOOL _usesExplicitUpdate;
    id _view;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleRect;
}

@property BOOL _needsRender;
@property BOOL _needsUpdate;
@property (nonatomic, retain) PKPhysicsWorld *_pkPhysicsWorld;
@property BOOL _usesExplicitRender;
@property BOOL _usesExplicitUpdate;
@property (nonatomic) struct CGPoint { float x1; float x2; } anchorPoint;
@property (nonatomic, readonly, retain) AVAudioEngine *audioEngine;
@property (nonatomic, retain) AVAudioEnvironmentNode *avAudioEnvironmentNode;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) SKCameraNode *camera;
@property (nonatomic) <SKSceneDelegate> *delegate;
@property (nonatomic) SKNode *listener;
@property (nonatomic, readonly) SKPhysicsWorld *physicsWorld;
@property (nonatomic) int scaleMode;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) SKView *view;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct CGPoint { float x1; float x2; } visibleRectCenter;
@property (nonatomic) struct CGSize { float x1; float x2; } visibleRectSize;

+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)sceneWithSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (void)_didMoveToView:(id)arg1;
- (BOOL)_hasConstraints;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; id x4; struct SKCNode {} *x5; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_6_1_1; struct SKCNode {} **x_6_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_6_1_3; } x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_7_1_1; struct SKCNode {} **x_7_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_7_1_3; } x7; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_8_1_1; struct SKCNode {} **x_8_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_8_1_3; } x8; id x9; float x10; bool x11; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_12_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_12_1_2; } x12; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_13_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_13_1_2; } x13; bool x14; id x15; short x16; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x17; void*x18; const void*x19; double x20; void*x21; void*x22; void*x23; const void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; struct PKPath {} *x33; struct __shared_weak_count {} *x34; }*)_makeBackingNode;
- (BOOL)_needsRender;
- (BOOL)_needsUpdate;
- (id)_pkPhysicsWorld;
- (void)_registerConstraintsForNode:(id)arg1;
- (void)_removeConstraintsForNode:(id)arg1;
- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
- (void)_update:(double)arg1;
- (BOOL)_usesExplicitRender;
- (BOOL)_usesExplicitUpdate;
- (void)_willMoveFromView:(id)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (id)audioEngine;
- (id)avAudioEnvironmentNode;
- (id)backgroundColor;
- (id)camera;
- (struct CGPoint { float x1; float x2; })convertPointFromParent:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointFromView:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointToParent:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointToView:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didApplyConstraints;
- (void)didChangeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)didContinueContact:(id)arg1;
- (void)didEvaluateActions;
- (void)didFinishUpdate;
- (void)didMoveToView:(id)arg1;
- (void)didSimulatePhysics;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)listener;
- (id)physicsWorld;
- (struct CGPoint { float x1; float x2; })position;
- (int)scaleMode;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAvAudioEnvironmentNode:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScale:(float)arg1;
- (void)setScaleMode:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setVisibleRectCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setVisibleRectSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setXScale:(float)arg1;
- (void)setYScale:(float)arg1;
- (void)setZPosition:(float)arg1;
- (void)setZRotation:(float)arg1;
- (void)set_anchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)set_needsRender:(BOOL)arg1;
- (void)set_needsUpdate:(BOOL)arg1;
- (void)set_pkPhysicsWorld:(id)arg1;
- (void)set_usesExplicitRender:(BOOL)arg1;
- (void)set_usesExplicitUpdate:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)update:(double)arg1;
- (id)view;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGPoint { float x1; float x2; })visibleRectCenter;
- (struct CGSize { float x1; float x2; })visibleRectSize;
- (void)willMoveFromView:(id)arg1;
- (void)willRenderContent;
- (float)xScale;
- (float)yScale;
- (float)zPosition;
- (float)zRotation;

@end
