/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allCells;
- (id)cellForRow:(int)arg1;
- (id)cellLabels;
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(int)arg3;
- (void)dividedGridViewControllerDidLayout:(id)arg1;
- (BOOL)drawBackgroundForRow:(int)arg1;
- (int)gridViewType;
- (float)heightForRow:(int)arg1;
- (void)prepareForDisplay;
- (void)refreshCells;
- (void)selectCell:(id)arg1 atIndex:(int)arg2;
- (id)tableViewCell;

@end
