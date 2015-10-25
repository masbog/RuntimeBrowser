/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFramerateIndicatorView : UIView {
    UIImageView *__borderImageView;
    UILabel *__bottomLabel;
    UILabel *__topLabel;
    int _style;
}

@property (nonatomic, readonly) UIImageView *_borderImageView;
@property (nonatomic, readonly) UILabel *_bottomLabel;
@property (nonatomic, readonly) UILabel *_topLabel;
@property (nonatomic) int style;

- (void).cxx_destruct;
- (id)_borderImageView;
- (id)_bottomLabel;
- (void)_commonCAMFramerateIndicatorViewInitialization;
- (int)_framesPerSecond;
- (id)_labelText;
- (id)_topLabel;
- (void)_updateLabels;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setStyle:(int)arg1;
- (int)style;

@end
