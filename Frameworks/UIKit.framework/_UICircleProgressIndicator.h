/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICircleProgressIndicator : UIView {
    float _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    float _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    BOOL _highlighted;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    float _progress;
    UIColor *_unhighlightedBackgroundColor;
}

@property (nonatomic, retain) UIImage *borderImage;
@property (nonatomic, retain) UIImage *fillImage;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property (getter=isIndeterminate, nonatomic) BOOL indeterminate;
@property (nonatomic) float progress;

+ (id)_borderImage;
+ (id)_fillImage;
+ (id)_indeterminateImage;

- (void).cxx_destruct;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_setHidesBorderView:(BOOL)arg1;
- (void)_startIndeterminateAnimation;
- (id)borderImage;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)fillImage;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (BOOL)isIndeterminate;
- (void)layoutSubviews;
- (float)progress;
- (void)setBorderImage:(id)arg1;
- (void)setFillImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;

@end
