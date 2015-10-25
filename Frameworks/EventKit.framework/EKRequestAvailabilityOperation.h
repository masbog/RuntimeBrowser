/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRequestAvailabilityOperation : NSOperation {
    NSArray *_addresses;
    EKAvailabilityCache *_availabilityCache;
    NSDate *_endDate;
    NSError *_error;
    NSString *_ignoredEventID;
    BOOL _isExecuting;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_queue;
    id _requestID;
    id /* block */ _resultsBlock;
    NSDate *_startDate;
}

@property (nonatomic, retain) NSError *error;

- (void)_finishWithError:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(id /* block */)arg6;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)setError:(id)arg1;
- (void)start;

@end
