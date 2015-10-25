/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate> {
    BOOL __hasAccurateCounts;
    BOOL __isCountingAssetTypes;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    struct NSObject { Class x1; } *_album;
    PHAssetCollection *_assetCollection;
}

@property (setter=_setHasAccurateCounts:, nonatomic) BOOL _hasAccurateCounts;
@property (setter=_setCountingAssetTypes:, nonatomic) BOOL _isCountingAssetTypes;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_countAssetTypesIfNeeded;
- (id)_globalHeaderTitle;
- (BOOL)_hasAccurateCounts;
- (BOOL)_isCountingAssetTypes;
- (void)_setCountingAssetTypes:(BOOL)arg1;
- (void)_setHasAccurateCounts:(BOOL)arg1;
- (struct NSObject { Class x1; }*)album;
- (BOOL)allowSelectAllButton;
- (id)assetCollection;
- (id)assetCollectionAssets;
- (BOOL)canBeginStackCollapseTransition;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (float)globalHeaderHeight;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithSpec:(id)arg1;
- (BOOL)isCameraRoll;
- (BOOL)isTrashBinViewController;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1 existingFetchResults:(id)arg2;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setupScrubber;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsGlobalFooter;

@end
