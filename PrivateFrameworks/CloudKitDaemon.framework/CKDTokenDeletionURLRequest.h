/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenDeletionURLRequest : CKDURLRequest {
    NSString *_bundleID;
    NSData *_token;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithToken:(id)arg1 bundleID:(id)arg2;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (BOOL)requiresTokenRegistration;
- (void)setBundleID:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
