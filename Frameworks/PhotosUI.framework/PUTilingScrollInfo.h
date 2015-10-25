/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingScrollInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    } _interpageSpacing;
    float _pagingFrictionAdjustment;
    float _pagingSpringPullAdjustment;
    int _scrollDirections;
    BOOL _shouldEnablePaging;
}

@property (nonatomic) struct CGSize { float x1; float x2; } interpageSpacing;
@property (nonatomic) float pagingFrictionAdjustment;
@property (nonatomic) float pagingSpringPullAdjustment;
@property (nonatomic) int scrollDirections;
@property (nonatomic) BOOL shouldEnablePaging;

+ (id)scrollInfoWithScrollDirections:(int)arg1;
+ (id)scrollInfoWithScrollDirections:(int)arg1 enabledPagingWithInterpageSpacing:(struct CGSize { float x1; float x2; })arg2;
+ (id)scrollInfoWithScrollDirections:(int)arg1 enabledPagingWithInterpageSpacing:(struct CGSize { float x1; float x2; })arg2 pagingSpringPullAdjustment:(float)arg3 pagingFrictionAdjustment:(float)arg4;

- (void)_setInterpageSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)_setPagingFrictionAdjustment:(float)arg1;
- (void)_setPagingSpringPullAdjustment:(float)arg1;
- (void)_setScrollDirections:(int)arg1;
- (void)_setShouldEnablePaging:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })interpageSpacing;
- (float)pagingFrictionAdjustment;
- (float)pagingSpringPullAdjustment;
- (int)scrollDirections;
- (BOOL)shouldEnablePaging;

@end
