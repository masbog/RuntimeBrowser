/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdates : NSObject <NSCopying> {
    PSSpecifierUpdateContext *_context;
    NSMutableArray *_currentSpecifiers;
    PSSpecifierGroupIndex *_groupIndex;
    NSArray *_originalSpecifiers;
    NSMutableArray *_updates;
    BOOL _wantsDebugCallbacks;
}

@property (nonatomic, copy) PSSpecifierUpdateContext *context;
@property (nonatomic, readonly, copy) NSArray *currentSpecifiers;
@property (nonatomic, readonly, copy) PSSpecifierGroupIndex *groupIndex;
@property (nonatomic, readonly, copy) NSArray *originalSpecifiers;
@property (nonatomic, readonly, copy) NSArray *updates;

+ (void)_assertSpecifierIDsAreUnique:(id)arg1;
+ (Class)_groupIndexClass;
+ (BOOL)_wantsDebugCallbacks;
+ (id)updatesByDiffingSpecifiers:(id)arg1 withSpecifiers:(id)arg2 changedBlock:(id /* block */)arg3;
+ (id)updatesWithSpecifiers:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_addAndApplyOperation:(id)arg1;
- (void)_didApplyOperation:(id)arg1;
- (BOOL)_enumerateArrayWithConjuctionalResult:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_groupIndexCreatingIfNecessary;
- (id)_init;
- (id)_initForCopyWithOriginalSpecifiers:(id)arg1 currentSpecifiers:(id)arg2 updates:(id)arg3;
- (void)_operationFailed:(id)arg1 reason:(id)arg2;
- (BOOL)appendSpecifier:(id)arg1;
- (BOOL)appendSpecifier:(id)arg1 toGroup:(id)arg2;
- (BOOL)appendSpecifier:(id)arg1 toGroupAtGroupIndex:(unsigned int)arg2;
- (BOOL)appendSpecifier:(id)arg1 toGroupWithID:(id)arg2;
- (BOOL)appendSpecifiers:(id)arg1;
- (BOOL)appendSpecifiers:(id)arg1 toGroup:(id)arg2;
- (BOOL)appendSpecifiers:(id)arg1 toGroupAtGroupIndex:(unsigned int)arg2;
- (BOOL)appendSpecifiers:(id)arg1 toGroupWithID:(id)arg2;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpecifiers;
- (id)description;
- (void)enumerateUpdatesUsingBlock:(id /* block */)arg1;
- (id)groupIndex;
- (unsigned int)indexOfSpecifier:(id)arg1;
- (unsigned int)indexOfSpecifierWithID:(id)arg1;
- (id)init;
- (id)initWithSpecifiers:(id)arg1;
- (id)initWithSpecifiers:(id)arg1 applyUpdates:(id)arg2;
- (BOOL)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (BOOL)insertContiguousSpecifiers:(id)arg1 afterSpecifierWithID:(id)arg2;
- (BOOL)insertContiguousSpecifiers:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (BOOL)insertSpecifier:(id)arg1 afterSpecifierWithID:(id)arg2;
- (BOOL)insertSpecifier:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)insertSpecifier:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)moveSpecifier:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)moveSpecifierAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)moveSpecifierAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)originalSpecifiers;
- (BOOL)reloadSpecifier:(id)arg1;
- (BOOL)reloadSpecifierAtIndex:(unsigned int)arg1;
- (BOOL)reloadSpecifierAtIndexPath:(id)arg1;
- (BOOL)reloadSpecifierWithID:(id)arg1;
- (BOOL)reloadSpecifiers:(id)arg1;
- (BOOL)reloadSpecifiersInGroup:(id)arg1;
- (BOOL)reloadSpecifiersInGroupAtGroupIndex:(unsigned int)arg1;
- (BOOL)reloadSpecifiersInGroupWithID:(id)arg1;
- (BOOL)reloadSpecifiersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)reloadSpecifiersWithIDs:(id)arg1;
- (BOOL)removeSpecifier:(id)arg1;
- (BOOL)removeSpecifierAtIndex:(unsigned int)arg1;
- (BOOL)removeSpecifierAtIndexPath:(id)arg1;
- (BOOL)removeSpecifierWithID:(id)arg1;
- (BOOL)removeSpecifiers:(id)arg1;
- (BOOL)removeSpecifiersInGroup:(id)arg1;
- (BOOL)removeSpecifiersInGroupAtGroupIndex:(unsigned int)arg1;
- (BOOL)removeSpecifiersInGroupWithID:(id)arg1;
- (BOOL)removeSpecifiersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)removeSpecifiersWithIDs:(id)arg1;
- (void)setContext:(id)arg1;
- (id)specifierForID:(id)arg1;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned int)arg1;
- (id)stepByStepDescription;
- (BOOL)swapSpecifier:(id)arg1 withSpecifier:(id)arg2;
- (BOOL)swapSpecifierAtIndex:(unsigned int)arg1 withSpecifierAtIndex:(unsigned int)arg2;
- (id)updates;

@end
