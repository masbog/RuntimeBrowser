/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {
    UICollectionView *_collectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    BOOL _rendersWithParallax;
    BOOL _rendersWithPerspective;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective;
@property (readonly) Class superclass;

+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)collectionView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)layoutSubviews;
- (BOOL)rendersWithParallax;
- (BOOL)rendersWithPerspective;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setRendersWithParallax:(BOOL)arg1;
- (void)setRendersWithPerspective:(BOOL)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end
