/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURegularAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource> {
    NSArray *__availableSupermodes;
    NSArray *__visibleSliderModes;
    UIButton *_expansionButton;
    NSArray *_expansionButtonConstraints;
    PUSlidersCollectionView *_modeDetailSlidersCollectionView;
    NSArray *_modeDetailSlidersCollectionViewConstraints;
    UIView *_modeDetailView;
    NSArray *_modeDetailViewConstraints;
    NSMapTable *_supermodeButtonsByMode;
    NSArray *_supermodeButtonsConstraints;
    NSMapTable *_supermodeLabelsByMode;
    NSMapTable *_supermodeTitleBackgroundByMode;
}

@property (nonatomic, readonly) PUAdjustmentsMode *_expandedSupermode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableSupermodes;
- (void)_createNewModeDetailViewAndSubviews;
- (id)_expandedSupermode;
- (void)_handleModeButton:(id)arg1;
- (id)_layoutConstraintsForCollapsedModeDetailView:(id)arg1 mode:(id)arg2;
- (id)_layoutConstraintsForExpandedModeDetailView:(id)arg1 mode:(id)arg2;
- (float)_slidersViewLongSideLength;
- (void)_updateSupermodeButtons;
- (void)_updateViewsForExpandedSupermode:(id)arg1 fromOldSupermode:(id)arg2 animated:(BOOL)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)currentSlidersCollectionView;
- (id)newConstraintsForModePickerList:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSelectedMode:(id)arg1 animated:(BOOL)arg2;
- (void)setSlidersLongContentLength:(float)arg1;
- (void)updateConstraints;
- (void)updateEnabledForCurrentMode;
- (id)visibleSliderAdjustmentModes;
- (BOOL)wantsToHandleEventAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)willMoveToWindow:(id)arg1;

@end
