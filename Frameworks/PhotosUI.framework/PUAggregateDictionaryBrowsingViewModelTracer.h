/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAggregateDictionaryBrowsingViewModelTracer : NSObject <PUBrowsingViewModelChangeObserver> {
    BOOL __didScheduleCurrentAssetChange;
    BOOL __didScheduleViewUpdate;
    BOOL __isApplicationActive;
    BOOL __isPerformingChanges;
    BOOL __isPerformingUpdate;
    BOOL __isPlayingStreamedVideo;
    BOOL __isPlayingVideo;
    BOOL __isStreamedVideoActuallyPlaying;
    BOOL __isStreamedVideoStalled;
    BOOL __needsUpdateOneUpSessionActive;
    BOOL __needsUpdatePlayingVideo;
    BOOL __needsUpdateViewedAsset;
    BOOL __needsUpdateViewedAssetLongEnough;
    BOOL __oneUpSessionActive;
    double __oneUpSessionStartTime;
    <PUDisplayAsset> *__viewedAsset;
    BOOL __viewedAssetLongEnough;
    double __viewedAssetStartTime;
    NSHashTable *__viewingContexts;
    PUBrowsingViewModel *_browsingViewModel;
}

@property (setter=_setDidScheduleCurrentAssetChange:, nonatomic) BOOL _didScheduleCurrentAssetChange;
@property (setter=_setDidScheduleViewUpdate:, nonatomic) BOOL _didScheduleViewUpdate;
@property (setter=_setApplicationActive:, nonatomic) BOOL _isApplicationActive;
@property (setter=_setPerformingChanges:, nonatomic) BOOL _isPerformingChanges;
@property (setter=_setPerformingUpdate:, nonatomic) BOOL _isPerformingUpdate;
@property (setter=_setPlayingStreamedVideo:, nonatomic) BOOL _isPlayingStreamedVideo;
@property (setter=_setPlayingVideo:, nonatomic) BOOL _isPlayingVideo;
@property (setter=_setStreamedVideoActuallyPlaying:, nonatomic) BOOL _isStreamedVideoActuallyPlaying;
@property (setter=_setStreamedVideoStalled:, nonatomic) BOOL _isStreamedVideoStalled;
@property (setter=_setNeedsUpdateOneUpSessionActive:, nonatomic) BOOL _needsUpdateOneUpSessionActive;
@property (setter=_setNeedsUpdatePlayingVideo:, nonatomic) BOOL _needsUpdatePlayingVideo;
@property (setter=_setNeedsUpdateViewedAsset:, nonatomic) BOOL _needsUpdateViewedAsset;
@property (setter=_setNeedsUpdateViewedAssetLongEnough:, nonatomic) BOOL _needsUpdateViewedAssetLongEnough;
@property (setter=_setOneUpSessionActive:, nonatomic) BOOL _oneUpSessionActive;
@property (setter=_setOneUpSessionStartTime:, nonatomic) double _oneUpSessionStartTime;
@property (setter=_setViewedAsset:, nonatomic, retain) <PUDisplayAsset> *_viewedAsset;
@property (setter=_setViewedAssetLongEnough:, nonatomic) BOOL _viewedAssetLongEnough;
@property (setter=_setViewedAssetStartTime:, nonatomic) double _viewedAssetStartTime;
@property (nonatomic, readonly) NSHashTable *_viewingContexts;
@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_assertInsideChangeBlock;
- (BOOL)_didScheduleCurrentAssetChange;
- (BOOL)_didScheduleViewUpdate;
- (void)_handleScheduledCurrentAssetChange;
- (void)_handleScheduledViewUpdate;
- (void)_invalidateOneUpSessionActive;
- (void)_invalidatePlayingVideo;
- (void)_invalidateViewedAsset;
- (void)_invalidateViewedAssetLongEnough;
- (BOOL)_isApplicationActive;
- (BOOL)_isPerformingChanges;
- (BOOL)_isPerformingUpdate;
- (BOOL)_isPlayingStreamedVideo;
- (BOOL)_isPlayingVideo;
- (BOOL)_isStreamedVideoActuallyPlaying;
- (BOOL)_isStreamedVideoStalled;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateOneUpSessionActive;
- (BOOL)_needsUpdatePlayingVideo;
- (BOOL)_needsUpdateViewedAsset;
- (BOOL)_needsUpdateViewedAssetLongEnough;
- (BOOL)_oneUpSessionActive;
- (double)_oneUpSessionStartTime;
- (void)_scheduleCurrentAssetChange;
- (void)_scheduleViewUpdate;
- (void)_setApplicationActive:(BOOL)arg1;
- (void)_setDidScheduleCurrentAssetChange:(BOOL)arg1;
- (void)_setDidScheduleViewUpdate:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateOneUpSessionActive:(BOOL)arg1;
- (void)_setNeedsUpdatePlayingVideo:(BOOL)arg1;
- (void)_setNeedsUpdateViewedAsset:(BOOL)arg1;
- (void)_setNeedsUpdateViewedAssetLongEnough:(BOOL)arg1;
- (void)_setOneUpSessionActive:(BOOL)arg1;
- (void)_setOneUpSessionStartTime:(double)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (void)_setPerformingUpdate:(BOOL)arg1;
- (void)_setPlayingStreamedVideo:(BOOL)arg1;
- (void)_setPlayingVideo:(BOOL)arg1;
- (void)_setStreamedVideoActuallyPlaying:(BOOL)arg1;
- (void)_setStreamedVideoStalled:(BOOL)arg1;
- (void)_setViewedAsset:(id)arg1;
- (void)_setViewedAssetLongEnough:(BOOL)arg1;
- (void)_setViewedAssetStartTime:(double)arg1;
- (void)_updateIfNeeded;
- (void)_updateOneUpSessionActive;
- (void)_updatePlayingVideoIfNeeded;
- (void)_updateViewedAssetIfNeeded;
- (void)_updateViewedAssetLongEnoughIfNeeded;
- (id)_viewedAsset;
- (BOOL)_viewedAssetLongEnough;
- (double)_viewedAssetStartTime;
- (id)_viewingContexts;
- (void)addViewingContext:(id)arg1;
- (id)browsingViewModel;
- (void)dealloc;
- (id)init;
- (id)initWithBrowsingViewModel:(id)arg1;
- (void)performChanges:(id /* block */)arg1;
- (void)removeViewingContext:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
