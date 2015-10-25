/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoControllerProtocol, UIModalViewDelegate> {
    UIAlertController *_alertController;
    unsigned int _allowsDetailScrubbing;
    unsigned int _allowsTVOutInBackground;
    unsigned int _allowsWirelessPlayback;
    unsigned int _alwaysAllowHidingControlsOverlay;
    int _artworkImageStyle;
    unsigned int _attemptAutoPlayWhenControlsHidden;
    unsigned int _backgroundTaskId;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    MPSwipableView *_backstopView;
    BOOL _batteryMonitoringWasEnabled;
    unsigned int _canAnimateControlsOverlay;
    unsigned int _canShowControlsOverlay;
    MPClosedCaptionDisplay *_captionView;
    unsigned long long _desiredParts;
    unsigned int _disableAutoRotation;
    unsigned int _disableControlsAutohide;
    unsigned long long _disabledParts;
    unsigned int _displayPlaybackErrorAlerts;
    unsigned int _hasShownFirstVideoFrame;
    unsigned int _inlinePlaybackUsesTVOut;
    unsigned int _itemTypeOverride;
    UIActivityIndicatorView *_loadingIndicator;
    unsigned int _playAfterPop;
    UIImage *_posterImage;
    unsigned int _scaleMode;
    unsigned int _scaleModeOverride;
    unsigned int _scheduledLoadingIndicator;
    unsigned int _tvOutEnabled;
    MPTVOutWindow *_tvOutWindow;
    unsigned long long _visibleParts;
}

@property (nonatomic) BOOL TVOutEnabled;
@property (nonatomic) BOOL allowsDetailScrubbing;
@property (nonatomic) BOOL allowsTVOutInBackground;
@property (nonatomic) BOOL allowsWirelessPlayback;
@property (nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property (nonatomic) int artworkImageStyle;
@property (nonatomic, readonly) UIView *artworkImageView;
@property (nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) UIColor *backstopColor;
@property (nonatomic) BOOL canAnimateControlsOverlay;
@property (nonatomic, readonly) BOOL canChangeScaleMode;
@property (nonatomic) BOOL canShowControlsOverlay;
@property (nonatomic, readonly) BOOL canShowQTAudioOnlyUI;
@property (nonatomic) BOOL controlsOverlayVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) BOOL disableAutoRotation;
@property (nonatomic) BOOL disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic) BOOL displayPlaybackErrorAlerts;
@property (getter=isFullscreen, nonatomic) BOOL fullscreen;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) _UIHostedWindow *hostedWindow;
@property (nonatomic, readonly) unsigned int hostedWindowContextID;
@property (nonatomic) BOOL inlinePlaybackUsesTVOut;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic) unsigned int itemTypeOverride;
@property (nonatomic) int orientation;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, retain) UIImage *posterImage;
@property (nonatomic) unsigned int scaleMode;
@property (nonatomic, readonly) BOOL showArtworkForTVOut;
@property (nonatomic, readonly) BOOL showArtworkInImageView;
@property (readonly) Class superclass;
@property (getter=isTransitioningFromFullscreen, nonatomic, readonly) BOOL transitioningFromFullscreen;
@property (getter=isTransitioningToFullscreen, nonatomic, readonly) BOOL transitioningToFullscreen;
@property (nonatomic, readonly, retain) UIView<MPVideoOverlay> *videoOverlayView;
@property (nonatomic, readonly) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;
@property (nonatomic, readonly, retain) MPVideoView *videoView;
@property (nonatomic, readonly, retain) UIView *view;
@property (nonatomic, readonly) BOOL viewControllerWillRequestExit;
@property (nonatomic) unsigned long long visibleParts;

+ (int)_activityIndicatorViewStyle;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateArtworkImageViewFrameInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)supportsFullscreenDisplay;

- (void).cxx_destruct;
- (BOOL)TVOutEnabled;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (void)_delayedUpdateBackgroundView;
- (void)_endBackgroundTask;
- (void)_exitPlayerForPlaybackError;
- (void)_fixupViewHierarchyIfNecessary;
- (void)_hideLoadingIndicator;
- (void)_itemDurationDidChange:(id)arg1;
- (unsigned int)_itemTypeWithActualTypePreference;
- (void)_popForTimeJump:(id)arg1;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (BOOL)_showDestinationPlaceholder;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)_updateClosedCaptionDisplay;
- (void)_updateIdleTimerDisabledFromPlaybackState:(int)arg1;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsTVOutInBackground;
- (BOOL)allowsWirelessPlayback;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (int)artworkImageStyle;
- (id)artworkImageView;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (id)backgroundView;
- (void)backgroundViewDidUpdate;
- (id)backstopColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateArtworkImageViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateFullScreenArtworkImageViewFrame;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canChangeScaleMode;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canShowControlsOverlay;
- (BOOL)canShowQTAudioOnlyUI;
- (BOOL)controlsOverlayVisible;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (unsigned long long)desiredParts;
- (BOOL)disableAutoRotation;
- (BOOL)disableControlsAutohide;
- (unsigned long long)disabledParts;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (int)displayArtworkImageStyle;
- (BOOL)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)exitFullscreen;
- (void)handleScaleModeChange;
- (id)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (id)init;
- (BOOL)inlinePlaybackUsesTVOut;
- (BOOL)isFullscreen;
- (BOOL)isFullscreenForLayoutPurposes;
- (BOOL)isTransitioningFromFullscreen;
- (BOOL)isTransitioningToFullscreen;
- (unsigned int)itemTypeOverride;
- (void)loadView;
- (id)newAlternateTracksTransition;
- (id)newArtworkImageView;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)posterImage;
- (void)prepareToDisplayVideo;
- (void)registerForPlayerNotifications;
- (void)reloadArtworkImageView;
- (void)removeChildViewController:(id)arg1;
- (unsigned int)scaleMode;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsTVOutInBackground:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setBackstopColor:(id)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisableAutoRotation:(BOOL)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setItemTypeOverride:(unsigned int)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)showAlternateTracksController:(id)arg1;
- (BOOL)showArtworkForTVOut;
- (BOOL)showArtworkInImageView;
- (void)tearDownTVOutWindow;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)unregisterForPlayerNotifications;
- (id)videoOverlayView;
- (id)videoOverlayViewIfLoaded;
- (id)videoView;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (BOOL)viewControllerWillRequestExit;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (unsigned long long)visibleParts;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;

@end
