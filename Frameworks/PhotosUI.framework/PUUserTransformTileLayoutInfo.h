/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUserTransformTileLayoutInfo : PUTileLayoutInfo {
    PUDisplayTileTransform *_displayTileTransform;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _passthroughRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _untransformedContentFrame;
}

@property (nonatomic, readonly) PUDisplayTileTransform *displayTileTransform;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } passthroughRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } untransformedContentFrame;

- (void).cxx_destruct;
- (id)clone;
- (id)description;
- (id)displayTileTransform;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 center:(struct CGPoint { float x1; float x2; })arg4 size:(struct CGSize { float x1; float x2; })arg5 alpha:(float)arg6 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg7 zPosition:(float)arg8 coordinateSystem:(id)arg9;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 center:(struct CGPoint { float x1; float x2; })arg4 size:(struct CGSize { float x1; float x2; })arg5 alpha:(float)arg6 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg7 zPosition:(float)arg8 coordinateSystem:(id)arg9 untransformedContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10 displayTileTransform:(id)arg11 passthroughRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg12;
- (BOOL)isGeometryEqualToLayoutInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })passthroughRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })untransformedContentFrame;

@end
