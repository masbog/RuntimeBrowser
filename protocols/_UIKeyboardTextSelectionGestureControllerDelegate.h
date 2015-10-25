/* Generated by RuntimeBrowser.
 */

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>

@required

- (UIKeyboardTaskQueue *)taskQueue;
- (_UIKeyboardTextSelectionController *)textSelectionController;

@optional

- (void)didEndGesture;
- (BOOL)hasMarkedText;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 toBegin:(BOOL)arg3;
- (double)timestampOfLastTouchesEnded;
- (BOOL)transitionInProgress;
- (void)willBeginGesture;

@end
