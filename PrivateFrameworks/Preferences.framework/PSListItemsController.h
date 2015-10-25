/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSListItemsController : PSListController {
    BOOL _deferItemSelection;
    PSSpecifier *_lastSelectedSpecifier;
    BOOL _restrictionList;
    id _retainedTarget;
    int _rowToSelect;
}

- (void).cxx_destruct;
- (void)_addStaticText:(id)arg1;
- (void)didLock;
- (BOOL)isRestrictionList;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)listItemSelected:(id)arg1;
- (void)prepareSpecifiersMetadata;
- (void)scrollToSelectedCell;
- (void)setIsRestrictionList:(BOOL)arg1;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end