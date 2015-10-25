/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface __PGButton : UIButton {
    _UIBackdropView *_backdropView;
    UIImage *_backgroundImage;
    int _buttonStyle;
    UIImageView *_foregroundImageView;
    UIImageView *_highlightImageView;
}

@property (nonatomic, readonly) int buttonStyle;

- (void).cxx_destruct;
- (void)_updateHighlightImageView;
- (int)buttonStyle;
- (id)initWithButtonStyle:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;

@end
