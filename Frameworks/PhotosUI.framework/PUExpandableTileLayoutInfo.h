/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo {
    struct CGSize { 
        float width; 
        float height; 
    } _expandedSize;
    BOOL _isExpanded;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } expandedSize;
@property (nonatomic, readonly) BOOL isExpanded;

- (id)clone;
- (struct CGSize { float x1; float x2; })expandedSize;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 center:(struct CGPoint { float x1; float x2; })arg4 size:(struct CGSize { float x1; float x2; })arg5 alpha:(float)arg6 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg7 zPosition:(float)arg8 coordinateSystem:(id)arg9;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 center:(struct CGPoint { float x1; float x2; })arg4 size:(struct CGSize { float x1; float x2; })arg5 alpha:(float)arg6 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg7 zPosition:(float)arg8 coordinateSystem:(id)arg9 isExpanded:(BOOL)arg10 expandedSize:(struct CGSize { float x1; float x2; })arg11;
- (BOOL)isExpanded;
- (BOOL)isGeometryEqualToLayoutInfo:(id)arg1;

@end
