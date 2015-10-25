/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMultiOrientationImageView : UIView {
    BOOL _allowsEdgeAntialiasing;
    UIView *_currentOrientedSubview;
    UIImage *_image;
    NSArray *_orientedSubviews;
}

@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateSubviews;
- (BOOL)allowsEdgeAntialiasing;
- (id)image;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentMode:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;

@end
