/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITimeZonePane : PSEditingPane <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray *_cities;
    UITableView *_completionTable;
    UISearchBar *_searchBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (readonly) Class superclass;

+ (void)setTimeZone:(id)arg1;

- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)searchBar;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textValueChanged:(id)arg1;
- (void)updateTableInsets;

@end
