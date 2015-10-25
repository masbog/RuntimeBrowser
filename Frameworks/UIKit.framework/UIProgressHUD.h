/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressHUD : UIView {
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    struct { 
        unsigned int isShowing : 1; 
        unsigned int isShowingText : 1; 
        unsigned int fixedFrame : 1; 
        unsigned int reserved : 30; 
    } _progressHUDFlags;
    UIProgressIndicator *_progressIndicator;
    UILabel *_progressMessage;
}

- (id)_progressIndicator;
- (void)dealloc;
- (void)done;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithWindow:(id)arg1;
- (void)layoutSubviews;
- (void)setFontSize:(int)arg1;
- (void)setShowsText:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)show:(BOOL)arg1;
- (void)showInView:(id)arg1;

@end
