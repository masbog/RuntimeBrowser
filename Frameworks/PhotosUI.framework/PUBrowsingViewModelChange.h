/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingViewModelChange : PUViewModelChange {
    BOOL _assetsDataSourceDidChange;
    BOOL _browsingSpeedRegimeDidChange;
    BOOL _chromeVisibilityDidChange;
    BOOL _commentsVisibilityDidChange;
    BOOL _currentAssetDidChange;
    BOOL _currentAssetTransitionProgressDidChange;
    BOOL _isAnimatingAnyTransitionDidChange;
    BOOL _isScrollingDidChange;
    BOOL _isScrubbingDidChange;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    BOOL _presentingOverOneUpDidChange;
    BOOL _secondScreenSizeDidChange;
    BOOL _transitionDriverIdentifierDidChange;
}

@property (nonatomic, readonly) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property (nonatomic, readonly) NSMutableDictionary *_mutableViewModelChangesByAssetReference;
@property (nonatomic, readonly) NSMapTable *assetSharedViewModelChangesByAsset;
@property (nonatomic, readonly) NSDictionary *assetViewModelChangesByAssetReference;
@property (nonatomic) BOOL assetsDataSourceDidChange;
@property (nonatomic) BOOL browsingSpeedRegimeDidChange;
@property (nonatomic) BOOL chromeVisibilityDidChange;
@property (nonatomic) BOOL commentsVisibilityDidChange;
@property (nonatomic) BOOL currentAssetDidChange;
@property (nonatomic) BOOL currentAssetTransitionProgressDidChange;
@property (nonatomic) BOOL isAnimatingAnyTransitionDidChange;
@property (nonatomic) BOOL isScrollingDidChange;
@property (nonatomic) BOOL isScrubbingDidChange;
@property (nonatomic) BOOL presentingOverOneUpDidChange;
@property (nonatomic) BOOL secondScreenSizeDidChange;
@property (nonatomic) BOOL transitionDriverIdentifierDidChange;

- (void).cxx_destruct;
- (id)_mutableSharedViewModelChangesByAsset;
- (id)_mutableViewModelChangesByAssetReference;
- (void)_setAnimatingAnyTransitionDidChange:(BOOL)arg1;
- (void)_setAssetsDataSourceDidChange:(BOOL)arg1;
- (void)_setBrowsingSpeedRegimeDidChange:(BOOL)arg1;
- (void)_setChromeVisibilityDidChange:(BOOL)arg1;
- (void)_setCommentsVisibilityDidChange:(BOOL)arg1;
- (void)_setCurrentAssetDidChange:(BOOL)arg1;
- (void)_setCurrentAssetTransitionProgressDidChange:(BOOL)arg1;
- (void)_setIsScrollingDidChange:(BOOL)arg1;
- (void)_setIsScrubbingDidChange:(BOOL)arg1;
- (void)_setPresentingOverOneUpDidChange:(BOOL)arg1;
- (void)_setSecondScreenSizeDidChange:(BOOL)arg1;
- (void)_setTransitionDriverIdentifierDidChange:(BOOL)arg1;
- (id)assetSharedViewModelChangesByAsset;
- (id)assetViewModelChangesByAssetReference;
- (BOOL)assetsDataSourceDidChange;
- (BOOL)browsingSpeedRegimeDidChange;
- (BOOL)chromeVisibilityDidChange;
- (BOOL)commentsVisibilityDidChange;
- (BOOL)currentAssetDidChange;
- (BOOL)currentAssetTransitionProgressDidChange;
- (BOOL)hasChanges;
- (BOOL)isAnimatingAnyTransitionDidChange;
- (BOOL)isScrollingDidChange;
- (BOOL)isScrubbingDidChange;
- (BOOL)presentingOverOneUpDidChange;
- (BOOL)secondScreenSizeDidChange;
- (BOOL)transitionDriverIdentifierDidChange;

@end
