/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKWorkQueue : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _performingWork;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remainingWork;
    BOOL _takeOutTransactions;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL performingWork;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *remainingWork;
@property (nonatomic) BOOL takeOutTransactions;

- (void).cxx_destruct;
- (void)_onQueue_doWorkIfNecessary;
- (id)callbackQueue;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 takeOutTransactions:(BOOL)arg2;
- (void)performWork:(id /* block */)arg1;
- (BOOL)performingWork;
- (id)queue;
- (id)remainingWork;
- (void)setCallbackQueue:(id)arg1;
- (void)setPerformingWork:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemainingWork:(id)arg1;
- (void)setTakeOutTransactions:(BOOL)arg1;
- (BOOL)takeOutTransactions;

@end
