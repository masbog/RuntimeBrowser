/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlaybackSpec : NSObject {
    BOOL _aggressivelyCachesVideoFrames;
    BOOL _allowAudio;
    BOOL _allowVitality;
    NSHashTable *_observers;
    double _playbackPostDuration;
    double _playbackPreDuration;
    float _playbackTransitionBlurRadius;
    double _playbackTransitionCrossfadeDelay;
    double _playbackTransitionDuration;
    float _playbackTransitionScale;
    BOOL _reversesMoreVideoFramesInMemory;
    double _settleTransitionDuration;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionBlurTimingFunctionControlPoint1;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionBlurTimingFunctionControlPoint2;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionFadeTimingFunctionControlPoint1;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionFadeTimingFunctionControlPoint2;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionScaleTimingFunctionControlPoint1;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionScaleTimingFunctionControlPoint2;
    BOOL _useForcePlayratePlayback;
    BOOL _useForceScrubPlayback;
    BOOL _useForceTouchInitiatedPlayback;
    BOOL _useTransition;
    BOOL _useVitalityBuffer;
    double _vitalityPostDuration;
    double _vitalityPreDuration;
    double _vitalityTransitionDuration;
    BOOL _wantsCrossfadeLayer;
}

@property (nonatomic) BOOL aggressivelyCachesVideoFrames;
@property (nonatomic) BOOL allowAudio;
@property (nonatomic) BOOL allowVitality;
@property (nonatomic) double playbackPostDuration;
@property (nonatomic) double playbackPreDuration;
@property (nonatomic) float playbackTransitionBlurRadius;
@property (nonatomic) double playbackTransitionCrossfadeDelay;
@property (nonatomic) double playbackTransitionDuration;
@property (nonatomic) float playbackTransitionScale;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic) double settleTransitionDuration;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionBlurTimingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionBlurTimingFunctionControlPoint2;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionFadeTimingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionFadeTimingFunctionControlPoint2;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionScaleTimingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionScaleTimingFunctionControlPoint2;
@property (nonatomic) BOOL useForcePlayratePlayback;
@property (nonatomic) BOOL useForceScrubPlayback;
@property (nonatomic) BOOL useForceTouchInitiatedPlayback;
@property (nonatomic) BOOL useTransition;
@property (nonatomic) BOOL useVitalityBuffer;
@property (nonatomic) double vitalityPostDuration;
@property (nonatomic) double vitalityPreDuration;
@property (nonatomic) double vitalityTransitionDuration;
@property (nonatomic) BOOL wantsCrossfadeLayer;

- (void).cxx_destruct;
- (void)_didChange;
- (BOOL)aggressivelyCachesVideoFrames;
- (BOOL)allowAudio;
- (BOOL)allowVitality;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (double)playbackPostDuration;
- (double)playbackPreDuration;
- (float)playbackTransitionBlurRadius;
- (double)playbackTransitionCrossfadeDelay;
- (double)playbackTransitionDuration;
- (float)playbackTransitionScale;
- (void)registerObserver:(id)arg1;
- (BOOL)reversesMoreVideoFramesInMemory;
- (void)setAggressivelyCachesVideoFrames:(BOOL)arg1;
- (void)setAllowAudio:(BOOL)arg1;
- (void)setAllowVitality:(BOOL)arg1;
- (void)setDefaultValues;
- (void)setPlaybackPostDuration:(double)arg1;
- (void)setPlaybackPreDuration:(double)arg1;
- (void)setPlaybackTransitionBlurRadius:(float)arg1;
- (void)setPlaybackTransitionCrossfadeDelay:(double)arg1;
- (void)setPlaybackTransitionDuration:(double)arg1;
- (void)setPlaybackTransitionScale:(float)arg1;
- (void)setReversesMoreVideoFramesInMemory:(BOOL)arg1;
- (void)setSettleTransitionDuration:(double)arg1;
- (void)setTransitionBlurTimingFunctionControlPoint1:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionBlurTimingFunctionControlPoint2:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionFadeTimingFunctionControlPoint1:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionFadeTimingFunctionControlPoint2:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionScaleTimingFunctionControlPoint1:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionScaleTimingFunctionControlPoint2:(struct CGPoint { float x1; float x2; })arg1;
- (void)setUseForcePlayratePlayback:(BOOL)arg1;
- (void)setUseForceScrubPlayback:(BOOL)arg1;
- (void)setUseForceTouchInitiatedPlayback:(BOOL)arg1;
- (void)setUseTransition:(BOOL)arg1;
- (void)setUseVitalityBuffer:(BOOL)arg1;
- (void)setVitalityPostDuration:(double)arg1;
- (void)setVitalityPreDuration:(double)arg1;
- (void)setVitalityTransitionDuration:(double)arg1;
- (void)setWantsCrossfadeLayer:(BOOL)arg1;
- (double)settleTransitionDuration;
- (struct CGPoint { float x1; float x2; })transitionBlurTimingFunctionControlPoint1;
- (struct CGPoint { float x1; float x2; })transitionBlurTimingFunctionControlPoint2;
- (struct CGPoint { float x1; float x2; })transitionFadeTimingFunctionControlPoint1;
- (struct CGPoint { float x1; float x2; })transitionFadeTimingFunctionControlPoint2;
- (struct CGPoint { float x1; float x2; })transitionScaleTimingFunctionControlPoint1;
- (struct CGPoint { float x1; float x2; })transitionScaleTimingFunctionControlPoint2;
- (void)unregisterObserver:(id)arg1;
- (BOOL)useForcePlayratePlayback;
- (BOOL)useForceScrubPlayback;
- (BOOL)useForceTouchInitiatedPlayback;
- (BOOL)useTransition;
- (BOOL)useVitalityBuffer;
- (double)vitalityPostDuration;
- (double)vitalityPreDuration;
- (double)vitalityTransitionDuration;
- (BOOL)wantsCrossfadeLayer;

@end
