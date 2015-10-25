/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    id /* block */ _completion;
    BOOL _waitingForAuthorizationCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(id /* block */)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(id /* block */)arg2;
- (void)_fetchNamesForToken:(id)arg1 completion:(id /* block */)arg2;
- (id)authURLForUsername:(id)arg1;
- (id)requestForAuthURL:(id)arg1;
- (void)setAuthFlowCompletion:(id /* block */)arg1;
- (BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (BOOL)wantsInitialRedirect;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)arg1;

@end
