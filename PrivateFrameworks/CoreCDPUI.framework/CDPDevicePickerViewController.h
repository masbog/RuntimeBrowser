/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    <CDPDevicePickerDelegate> *_delegate;
    NSArray *_devices;
    UILabel *_encryptedLabel;
    UIButton *_remoteApprovalButton;
    BOOL _shouldOfferRemoteApproval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldOfferRemoteApproval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceTapped:(id)arg1;
- (id)devices;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setShouldOfferRemoteApproval:(BOOL)arg1;
- (BOOL)shouldOfferRemoteApproval;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)viewWillLayoutSubviews;

@end
