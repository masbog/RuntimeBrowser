/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragger : NSObject {
    SEL _action;
    id _delegate;
    double _duration;
    UIImageView *_fingerView;
    int (*_interpolator;
    unsigned long long _lastTimestamp;
    NSArray *_modes;
    unsigned int _port;
    BOOL _showFinger;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    unsigned long long _startTimestamp;
    struct CGPoint { 
        float x; 
        float y; 
    } _stopLocation;
    unsigned long long _stopTimestamp;
    UIView *_target;
    BOOL _waitingForSmoothScrolling;
}

- (void).cxx_destruct;
- (void)_continueDrag:(id)arg1;
- (double)_delayUntilNextEvent;
- (void)_postMouseEvent:(int)arg1 timestamp:(unsigned long long)arg2 location:(struct CGPoint { float x1; float x2; })arg3;
- (void)_smoothScrollingDidEnd:(id)arg1;
- (void)_smoothScrollingWillStart:(id)arg1;
- (void)_stopDrag:(id)arg1;
- (void)dealloc;
- (void)dragDidEnd;
- (id)init;
- (void)run;
- (void)setAction:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setInterpolation:(int (*)arg1;
- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStopLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTarget:(id)arg1;
- (void)showFinger;

@end
