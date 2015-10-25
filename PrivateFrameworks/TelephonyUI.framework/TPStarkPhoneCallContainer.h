/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkPhoneCallContainer : UIView {
    <TPStarkPhoneCallContainerDataSource> *_dataSource;
    <TPStarkPhoneCallContainerDelegate> *_delegate;
    BOOL _merging;
    BOOL _shouldMerge;
    NSMutableArray *_visibleCells;
}

@property (nonatomic) <TPStarkPhoneCallContainerDataSource> *dataSource;
@property (nonatomic) <TPStarkPhoneCallContainerDelegate> *delegate;
@property (getter=isMerging) BOOL merging;
@property BOOL shouldMerge;
@property (retain) NSMutableArray *visibleCells;

- (void).cxx_destruct;
- (id)_reloadQueue;
- (void)addConstraintsForNewCell:(id)arg1;
- (void)addRelationForLeftOfCell:(id)arg1;
- (void)addRelationForRightOfCell:(id)arg1;
- (void)addRelationForWidthOfCell:(id)arg1;
- (void)animateLayoutOfViewWithCompletionBlock:(id /* block */)arg1;
- (id)constraintToFillContainerWithLeftOfCell:(id)arg1;
- (id)constraintToFillContainerWithRightOfCell:(id)arg1;
- (void)createVisibleCells:(unsigned int)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isMerging;
- (void)mergeAllCellConstraints;
- (void)mergeVisibleCells;
- (void)phoneCallViewCellTapped:(id)arg1;
- (void)reloadData;
- (void)reloadDataAnimated:(BOOL)arg1;
- (void)removeAllConstraintsForCell:(id)arg1;
- (void)removeVisibleCells:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMerging:(BOOL)arg1;
- (void)setNeedsMerge;
- (void)setShouldMerge:(BOOL)arg1;
- (void)setVisibleCells:(id)arg1;
- (BOOL)shouldMerge;
- (BOOL)shouldReloadCellsWithNumberOfCells:(unsigned int)arg1;
- (void)updateAllCellConstraints;
- (void)updateCell:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)updateLayoutAnimated:(BOOL)arg1;
- (void)updateNumberOfCellsWithNewValue:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)visibleCells;

@end
