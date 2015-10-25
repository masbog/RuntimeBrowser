/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoEditViewController : PUEditViewController <PUEditPluginSessionDelegate, PUOneUpAssetTransitionViewController, PUPhotoLibraryUIChangeObserver, PUVideoEditScrubberControllerDelegate, PUVideoPlayerViewDelegate, PUViewControllerSpecChangeObserver, PUViewModelChangeObserver, UIPopoverPresentationControllerDelegate> {
    PUAudioSessionCategoryToken *__audioCategoryToken;
    AVAsset *__avAsset;
    AVPlayer *__avPlayer;
    AVPlayerItem *__avPlayerItem;
    BOOL __isAwaitingSlomoUpdate;
    BOOL __isAwaitingVideoPlayerUpdate;
    BOOL __isSeeking;
    struct CGSize { 
        float width; 
        float height; 
    } __layoutReferenceSize;
    unsigned int __loadingState;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } __startingTime;
    PHAsset *__videoAsset;
    PUResourceDownloadRequest *__videoDownloadRequest;
    float __videoExportProgress;
    PUVideoEditMaker *__videoExporter;
    <PUVideoEditViewControllerDelegate> *_delegate;
    BOOL _hasPendingTime;
    unsigned int _inUseScrubberHandle;
    BOOL _isScrubbing;
    UIButton *_mainActionButton;
    unsigned int _mainButtonAction;
    PUPhotoEditToolbar *_mainToolbar;
    NSArray *_mainToolbarConstraints;
    int _outstandingPlaceholderImageRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _pendingTime;
    UIButton *_playButton;
    id _playerObserver;
    UIButton *_pluginButton;
    PUVideoEditPluginDataSource *_pluginDataSource;
    PUVideoEditPluginSession *_pluginSession;
    UIAlertController *_revertToOriginalActionSheet;
    PUProgressIndicatorView *_saveOperationProgressIndicator;
    NSArray *_saveOperationProgressIndicatorConstraints;
    NSArray *_scrubberConstraints;
    PUVideoEditScrubberController *_scrubberController;
    PUVideoEditScrubberImageSource *_scrubberImageSource;
    UIButton *_secondaryActionButton;
    UIView *_toolbarWrapper;
    NSArray *_toolbarWrapperConstraints;
    UIAlertController *_trimTypeActionSheet;
    PUProgressIndicatorView *_videoDownloadProgressIndicator;
    NSArray *_videoDownloadProgressIndicatorConstraints;
    PUVideoEditModel *_videoEditModel;
    PUVideoPlayerView *_videoEditPlayerView;
    NSArray *_videoEditPlayerViewConstraints;
    PUVideoEditViewControllerSpec *_videoEditSpec;
}

@property (setter=_setAudioCategoryToken:, nonatomic, retain) PUAudioSessionCategoryToken *_audioCategoryToken;
@property (setter=_setAVAsset:, nonatomic, retain) AVAsset *_avAsset;
@property (setter=_setAVPlayer:, nonatomic, retain) AVPlayer *_avPlayer;
@property (setter=_setAVPlayerItem:, nonatomic, retain) AVPlayerItem *_avPlayerItem;
@property (setter=_setIsAwaitingSlomoUpdate:, nonatomic) BOOL _isAwaitingSlomoUpdate;
@property (setter=_setAwaitingVideoPlayerUpdate:, nonatomic) BOOL _isAwaitingVideoPlayerUpdate;
@property (setter=_setSeeking:, nonatomic) BOOL _isSeeking;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { float x1; float x2; } _layoutReferenceSize;
@property (setter=_setLoadingState:, nonatomic) unsigned int _loadingState;
@property (setter=_setStartingTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _startingTime;
@property (nonatomic, readonly) PHAsset *_videoAsset;
@property (setter=_setVideoDownloadRequest:, nonatomic, retain) PUResourceDownloadRequest *_videoDownloadRequest;
@property (setter=_setVideoExportProgress:, nonatomic) float _videoExportProgress;
@property (setter=_setVideoExporter:, nonatomic, retain) PUVideoEditMaker *_videoExporter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUVideoEditViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioCategoryToken;
- (id)_avAsset;
- (id)_avPlayer;
- (id)_avPlayerItem;
- (void)_configureAudioSession:(id)arg1;
- (void)_createNewPlayerItem;
- (void)_createPluginSession;
- (void)_didFinishDownloadingVideoWithSuccess:(BOOL)arg1 canceled:(BOOL)arg2 error:(id)arg3;
- (void)_didFinishSavingWithSuccess:(BOOL)arg1 duplicatedAsset:(id)arg2;
- (void)_didLoadContentEditingInput:(id)arg1;
- (void)_dismissWithChanges:(BOOL)arg1 duplicatedAsset:(id)arg2;
- (void)_downloadVideo;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleSaveButton:(id)arg1;
- (void)_handleSecondaryActionButton:(id)arg1;
- (BOOL)_isAwaitingSlomoUpdate;
- (BOOL)_isAwaitingVideoPlayerUpdate;
- (BOOL)_isSeeking;
- (struct CGSize { float x1; float x2; })_layoutReferenceSize;
- (void)_loadAVAsset;
- (void)_loadAVAssetValues;
- (void)_loadVideo;
- (unsigned int)_loadingState;
- (void)_pausePlayer;
- (void)_playPlayer;
- (BOOL)_playerIsAtEnd;
- (BOOL)_playerIsPlaying;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)_presentAlertForVideoLoadFailure;
- (void)_presentErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_recordAggdStatsForSave;
- (void)_refetchPlaceholderImage;
- (void)_revertToOriginal;
- (void)_saveEditsWithInPlaceTrim:(BOOL)arg1;
- (void)_seekPlayerToBeginning;
- (void)_seekToTime:(double)arg1;
- (void)_setAVAsset:(id)arg1;
- (void)_setAVPlayer:(id)arg1;
- (void)_setAVPlayerItem:(id)arg1;
- (void)_setAudioCategoryToken:(id)arg1;
- (void)_setAwaitingVideoPlayerUpdate:(BOOL)arg1;
- (void)_setIsAwaitingSlomoUpdate:(BOOL)arg1;
- (void)_setLayoutReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setLoadingState:(unsigned int)arg1;
- (void)_setSeeking:(BOOL)arg1;
- (void)_setStartingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoDownloadRequest:(id)arg1;
- (void)_setVideoExportProgress:(float)arg1;
- (void)_setVideoExporter:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_startingTime;
- (void)_updateButtons;
- (void)_updateDownloadProgressIndicator;
- (void)_updateEnabledStateForEditControls;
- (void)_updateFromPendingTime;
- (void)_updatePlayerItemEndFromModel;
- (void)_updateSaveProgressIndicator;
- (void)_updateScrubber;
- (void)_updateScrubberThumbVisibility;
- (void)_updateScrubberTime;
- (void)_updateSlomoEditorFromModelTimes;
- (void)_updateSpec;
- (void)_updateSubviewOrdering;
- (void)_updateToolbar;
- (void)_updateVideoEditPlayerView;
- (id)_videoAsset;
- (id)_videoDownloadRequest;
- (double)_videoDuration;
- (float)_videoExportProgress;
- (id)_videoExporter;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned int)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithVideoAsset:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)scrubberController:(id)arg1 didBeginScrubbingWithHandle:(unsigned int)arg2;
- (void)scrubberController:(id)arg1 didEndScrubbingWithHandle:(unsigned int)arg2;
- (void)scrubberController:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)scrubberController:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)scrubberController:(id)arg1 slomoRegionsDidChangeWithHandle:(unsigned int)arg2;
- (void)scrubberController:(id)arg1 valueDidChange:(double)arg2;
- (void)scrubberControllerDidBeginEditingSlomoRegions:(id)arg1;
- (void)scrubberControllerDidEndEditingSlomoRegions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(BOOL)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
