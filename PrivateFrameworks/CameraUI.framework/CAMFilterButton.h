/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFilterButton : UIButton {
    UIImageView *__circlesImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIImageView *_circlesImageView;
@property (getter=isOn, nonatomic) BOOL on;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tappableEdgeInsets;

+ (id)filterButton;

- (void).cxx_destruct;
- (id)_circlesImageView;
- (void)_commonCAMFilterButtonInitialization;
- (id)_filterImage;
- (id)_filterOnImage;
- (float)_selectedIndicatorAlpha;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tappableEdgeInsets;

@end
