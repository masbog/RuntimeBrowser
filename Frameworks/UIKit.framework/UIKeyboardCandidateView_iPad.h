/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {
    UIKBInputBackdropView *_backdropView;
    UIKeyboardCandidatePageControl *_pageControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (float)defaultExtendedControlHeight;

- (float)_additionalClipHeight;
- (int)_clipCornersOfView:(id)arg1;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)candidateBarDidScroll:(id)arg1;
- (void)dealloc;
- (void)didEndSplitTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)rightButtonYOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (void)updatePageControlStatus;

@end
