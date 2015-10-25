/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {
    id /* block */ _perUploadCompletionBlock;
}

@property (copy) id /* block */ perUploadCompletionBlock;

- (void).cxx_destruct;
- (id)actionPrettyName;
- (void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)finishedTransfer:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1;
- (void)mainWithTransfers:(id)arg1;
- (id /* block */)perUploadCompletionBlock;
- (void)setPerUploadCompletionBlock:(id /* block */)arg1;
- (unsigned long long)startActivity;

@end
