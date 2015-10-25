/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLAppWishlistController : NSObject {
    id /* block */ _accountStoreChangeHandler;
    NSArray *_appIdentifiers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (BOOL)_isAccountStateError:(id)arg1;
- (void)_observeChangedInAccountStoreWithChangeHandler:(id /* block */)arg1;
- (void)_sendWishListToStoreWithShouldRetryOnAccountStateFailure:(BOOL)arg1;
- (void)_stopObservingChangeInAccountStore;
- (void)addMigratableAppsToWishlist:(id)arg1;

@end
