/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIRemoteUIRepairFlow : NSObject <AAUIAccountRepairRemoteUIDelegate> {
    ACAccount *_account;
    id /* block */ _completion;
    <AAUIRemoteUIRepairFlowDelegate> *_delegate;
    AAUIAccountRepairRemoteUI *_remoteUI;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIRemoteUIRepairFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3;
- (void)accountRepairRemoteUIWillAppear:(id)arg1;
- (void)accountRepairRemoteUIWillDismiss:(id)arg1;
- (id)delegate;
- (id)initWithAccount:(id)arg1;
- (void)presentFlowFromViewController:(id)arg1 modal:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
