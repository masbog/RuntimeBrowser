/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSettingsViewController : UIViewController <PUSlideshowMusicDelegate, PUSlideshowSettingsViewModelChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowThemeDelegate, PUViewControllerSpecChangeObserver, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL __needsUpdateMediaItem;
    BOOL __needsUpdateMusicOn;
    BOOL __needsUpdateNavigationBar;
    BOOL __needsUpdatePreset;
    BOOL __needsUpdateSpec;
    BOOL __needsUpdateTableView;
    PUSlideshowMediaItem *__pendingMediaItem;
    OKProducerPreset *__pendingPreset;
    _UIBackdropView *_backdropView;
    <PUSlideshowSettingsViewControllerDelegate> *_delegate;
    PUSlideshowSession *_session;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
}

@property (setter=_setNeedsUpdateMediaItem:, nonatomic) BOOL _needsUpdateMediaItem;
@property (setter=_setNeedsUpdateMusicOn:, nonatomic) BOOL _needsUpdateMusicOn;
@property (setter=_setNeedsUpdateNavigationBar:, nonatomic) BOOL _needsUpdateNavigationBar;
@property (setter=_setNeedsUpdatePreset:, nonatomic) BOOL _needsUpdatePreset;
@property (setter=_setNeedsUpdateSpec:, nonatomic) BOOL _needsUpdateSpec;
@property (setter=_setNeedsUpdateTableView:, nonatomic) BOOL _needsUpdateTableView;
@property (setter=_setPendingMediaItem:, nonatomic, retain) PUSlideshowMediaItem *_pendingMediaItem;
@property (setter=_setPendingPreset:, nonatomic, retain) OKProducerPreset *_pendingPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSlideshowSettingsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;
- (void)_didTapDoneButton:(id)arg1;
- (void)_invalidateMediaItem;
- (void)_invalidateMusicOn;
- (void)_invalidateNavigationBar;
- (void)_invalidatePreset;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateMediaItem;
- (BOOL)_needsUpdateMusicOn;
- (BOOL)_needsUpdateNavigationBar;
- (BOOL)_needsUpdatePreset;
- (BOOL)_needsUpdateSpec;
- (BOOL)_needsUpdateTableView;
- (id)_pendingMediaItem;
- (id)_pendingPreset;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateMediaItem:(BOOL)arg1;
- (void)_setNeedsUpdateMusicOn:(BOOL)arg1;
- (void)_setNeedsUpdateNavigationBar:(BOOL)arg1;
- (void)_setNeedsUpdatePreset:(BOOL)arg1;
- (void)_setNeedsUpdateSpec:(BOOL)arg1;
- (void)_setNeedsUpdateTableView:(BOOL)arg1;
- (void)_setPendingMediaItem:(id)arg1;
- (void)_setPendingPreset:(id)arg1;
- (void)_synchronizedChangedSettings;
- (void)_toggleMusic:(id)arg1;
- (void)_toggleRepeat:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateMediaItemIfNeeded;
- (void)_updateMusicOnIfNeeded;
- (void)_updateNavigationBarIfNeeded;
- (void)_updatePresetIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)initWithSession:(id)arg1;
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;
- (void)musicPickerDidFinish:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;
- (void)themePickerDidFinish:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
