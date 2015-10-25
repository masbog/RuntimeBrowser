/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCPreviewController : NSObject <RCAVPlayerDelegate> {
    RCAVPlayer *_AVPlayer;
    AVPlayerItem *_AVPlayerItem;
    double _AVPlayerItemCachedDuration;
    RCAVState *_AVState;
    NSString *_activePlaybackContextName;
    RCAudioSessionRoutingAssertion *_activePreviewRouteAssertion;
    double _currentRateTarget;
    double _currentTimeDelegateUpdateRate;
    double _currentTimeTarget;
    BOOL _isPreparingForPreview;
    NSURL *_lastPlayedAssetReferenceURL;
    NSString *_lastRouteKeyForRouteUsageLog;
    BOOL _logNextRouteUsageStatisticForced;
    NSMutableDictionary *_monitoredDispatchSourcesByURL;
    RCAudioSessionRoutingAssertion *_preparingToPreviewRouteAssertion;
    NSUUID *_preparingToPreviewRouteAssertionSessionUUID;
    BOOL _resetUseVoiceMemoSettingsValue;
    BOOL _useVoiceMemoSettings;
    BOOL _voiceMemoSettingEnabledNeedsReset;
    NSHashTable *_weakObservers;
}

@property (nonatomic, readonly) RCAVPlayer *AVPlayer;
@property (nonatomic, retain) AVPlayerItem *AVPlayerItem;
@property (nonatomic, retain) RCAVState *AVState;
@property (nonatomic) double currentTime;
@property (nonatomic) double currentTimeDelegateUpdateRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct { double x1; double x2; } playableTimeRange;
@property (nonatomic, readonly) float rate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useVoiceMemoSettings;

- (void).cxx_destruct;
- (id)AVPlayer;
- (id)AVPlayerItem;
- (id)AVState;
- (id)_AVPlayerIfActive;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1;
- (void)_audioRouteControllerWillDeactivateAudioSessionNotification:(id)arg1;
- (void)_beginActivePreviewRouteAssertion;
- (void)_beginPreparingToPreviewRouteAssertion;
- (void)_endActivePreviewRouteAssertion;
- (void)_handleDidStopPlaybackWithError:(id)arg1;
- (void)_handleUnderlyingAssetDisappeared;
- (BOOL)_monitorUnderlyingAssetPathInPlayerItem:(id)arg1 assetDisappearedBlock:(id /* block */)arg2;
- (void)_performWithObserversBlock:(id /* block */)arg1;
- (void)_playbackUsageStatisticsIncrementPlaybackIfNecessary;
- (void)_playbackUsageStatisticsPrepareForPlaybackContextName:(id)arg1;
- (void)_playbackUsageStatisticsPrepareForStartingNewPlayback;
- (void)_playerCurrentRateDidChangeToRate:(float)arg1 hadPlaybackItem:(BOOL)arg2;
- (void)_postDelegateCurrentTimeUpdate;
- (void)_postDelegateDidBeginPlaybackWithRate:(float)arg1;
- (void)_readyToPlay_playPlayer:(id)arg1;
- (id)_recreateAVPlayer;
- (void)_setPreparingToPlay:(BOOL)arg1 notifyObservers:(BOOL)arg2;
- (void)_stopMonitoringUnderylingAssetPath;
- (void)addObserver:(id)arg1;
- (double)currentTime;
- (double)currentTimeDelegateUpdateRate;
- (void)dealloc;
- (void)handlePreviewEnded;
- (id)init;
- (void)pause;
- (void)playWithTimeRange:(struct { double x1; double x2; })arg1 startTime:(double)arg2 playbackContextName:(id)arg3;
- (struct { double x1; double x2; })playableTimeRange;
- (void)playerCurrentItemDidBecomeReadyToPlay:(id)arg1;
- (void)playerCurrentRateDidChange:(id)arg1;
- (void)playerCurrentTimeDidChange:(id)arg1;
- (void)playerDidBecomeInvalid:(id)arg1;
- (float)rate;
- (void)removeObserver:(id)arg1;
- (void)setAVPlayerItem:(id)arg1;
- (void)setAVState:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeDelegateUpdateRate:(double)arg1;
- (void)setPlayableTimeRange:(struct { double x1; double x2; })arg1;
- (void)setRate:(float)arg1;
- (void)setUseVoiceMemoSettings:(BOOL)arg1;
- (void)stop;
- (BOOL)useVoiceMemoSettings;

@end
