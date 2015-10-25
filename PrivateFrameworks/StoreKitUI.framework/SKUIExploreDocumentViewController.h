/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate> {
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    BOOL _nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_contentInsetDidChange:(id)arg1;
- (void)_endAllPendingActiveImpression;
- (void)_getPageComponents:(id*)arg1 title:(id*)arg2 forViewControllerAtIndex:(int)arg3;
- (id)_leftPageComponentsAtIndex:(int)arg1;
- (id)_newSectionsViewControllerAtIndex:(int)arg1;
- (id)_pageComponentsAtIndex:(int)arg1;
- (void)_reloadData;
- (void)_reloadLeftViewControllers;
- (void)_reloadRightViewController;
- (void)_reloadSelectionForViewController:(id)arg1;
- (id)_rightPageComponents;
- (id)_rightVCColorScheme;
- (id)_rootNavigationTitle;
- (void)_updateChildViewControllers;
- (id)contentScrollView;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (BOOL)managesNavigationBarContents;
- (id)navigationBarTintColor;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)selectGenreListComponent:(id)arg1;
- (void)setClientContext:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(int)arg3;
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
