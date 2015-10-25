/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyBadgeOperation : CKOperation {
    unsigned int _badgeValue;
    id /* block */ _modifyBadgeCompletionBlock;
}

@property (nonatomic) unsigned int badgeValue;
@property (nonatomic, copy) id /* block */ modifyBadgeCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (unsigned long long)activityStart;
- (unsigned int)badgeValue;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithBadgeValue:(unsigned int)arg1;
- (id /* block */)modifyBadgeCompletionBlock;
- (void)performCKOperation;
- (void)setBadgeValue:(unsigned int)arg1;
- (void)setModifyBadgeCompletionBlock:(id /* block */)arg1;

@end
