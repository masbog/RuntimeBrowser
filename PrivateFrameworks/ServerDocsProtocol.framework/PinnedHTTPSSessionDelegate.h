/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface PinnedHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    BOOL _failed;
    NSData *_trustedCertData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL failed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *trustedCertData;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)failed;
- (void)setFailed:(BOOL)arg1;
- (void)setTrustedCertData:(id)arg1;
- (id)trustedCertData;

@end
