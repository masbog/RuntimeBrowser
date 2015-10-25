/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackdropView : _UIBackdropView {
    UIKeyboardBackdropCornerView *_backdropCornerView;
    BOOL _hasUpdatedFrame;
    BOOL _primaryBackdrop;
    NSMutableArray *_secondaryBackdrops;
}

@property (nonatomic, readonly) BOOL _hasUpdatedFrame;

+ (void)_registerSecondaryBackdropView:(id)arg1;
+ (void)_unregisterSecondaryBackdropView:(id)arg1;
+ (void)_updatedSecondaryBackdropsWithSettings:(id)arg1;
+ (void)overlayRelevantSettings:(id)arg1 ontoSettings:(id)arg2;
+ (id)triggerNotificationNames;
+ (id)unconditionalTriggerNotificationNames;

- (BOOL)_hasUpdatedFrame;
- (void)_setRenderConfig:(id)arg1;
- (void)applySettings:(id)arg1;
- (void)dealloc;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 primaryBackdrop:(BOOL)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(int)arg1;
- (void)triggerUpdate:(id)arg1;
- (void)updateFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCorners:(int)arg2;
- (void)willCallRenderInContextOnBackdropViewLayer;

@end
