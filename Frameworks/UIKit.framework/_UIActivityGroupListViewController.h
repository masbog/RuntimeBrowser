/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityGroupListViewController : UICollectionViewController {
    NSArray *_activityGroupViewControllers;
    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    UILabel *_placeholderLabel;
    NSArray *_visibleActivityGroupViewControllers;
}

@property (nonatomic, copy) NSArray *activityGroupViewControllers;
@property (nonatomic) BOOL darkStyleOnLegacyApp;
@property (getter=isEmbedded, nonatomic) BOOL embedded;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (nonatomic, copy) NSArray *visibleActivityGroupViewControllers;

- (void).cxx_destruct;
- (id)activityGroupViewControllers;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)darkStyleOnLegacyApp;
- (float)displayHeight;
- (id)initWithActivityGroupViewControllers:(id)arg1 embedded:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isAirdropViewController:(id)arg1;
- (BOOL)isEmbedded;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)placeholderLabel;
- (float)preferredContentHeightForViewController:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setActivityGroupViewControllers:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setEmbedded:(BOOL)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setVisibleActivityGroupViewControllers:(id)arg1;
- (BOOL)shouldShowNoActionsPlaceholder;
- (void)updateVisibleActivityGroupViewControllers;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (id)visibleActivityGroupViewControllers;

@end
