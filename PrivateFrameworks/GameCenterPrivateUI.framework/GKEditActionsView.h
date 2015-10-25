/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKEditActionsView : UIView {
    NSArray *_actionButtons;
    GKCollectionViewCell *_cell;
    NSArray *_editActionConstraints;
    CALayer *_maskLayer;
    float _visibleWidth;
}

@property (nonatomic, retain) NSArray *actionButtons;
@property (nonatomic) GKCollectionViewCell *cell;
@property (nonatomic, retain) NSArray *editActionConstraints;
@property (nonatomic, retain) CALayer *maskLayer;
@property (nonatomic) float visibleWidth;

- (id)actionButtons;
- (id)cell;
- (void)dealloc;
- (void)didTouchEditAction:(id)arg1;
- (void)didTouchMoreEditAction:(id)arg1;
- (id)editActionConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cell:(id)arg2;
- (id)maskLayer;
- (void)prepareActionButtons;
- (void)setActionButtons:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setEditActionConstraints:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setVisibleWidth:(float)arg1;
- (float)visibleWidth;

@end
