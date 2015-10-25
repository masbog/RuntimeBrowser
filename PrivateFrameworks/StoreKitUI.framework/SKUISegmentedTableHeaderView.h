/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISegmentedTableHeaderView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    UIView *_segmentedControl;
}

@property (nonatomic, readonly) _UIBackdropView *backdropView;
@property (nonatomic) BOOL hidesBorderView;
@property (nonatomic, retain) UIView *segmentedControl;

- (void).cxx_destruct;
- (id)_borderView;
- (id)backdropView;
- (BOOL)hidesBorderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setHidesBorderView:(BOOL)arg1;
- (void)setSegmentedControl:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
