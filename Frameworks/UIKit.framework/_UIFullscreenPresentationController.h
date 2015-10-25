/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {
    float _counterRotatedAngle;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _counterRotatedOriginalBounds;
    UIView *_counterRotatedView;
    int _originalOrientation;
    id /* block */ finalRotationBlock;
}

- (void).cxx_destruct;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (BOOL)_invokesDelegatesOnOrientationChange;
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(int)arg3 toOrientation:(int)arg4 force:(BOOL)arg5;
- (void)_removeCounterRotation;
- (void)_setPresentedViewController:(id)arg1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (int)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;

@end
