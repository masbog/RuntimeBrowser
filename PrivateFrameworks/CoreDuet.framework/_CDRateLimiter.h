/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {
    int _balance;
    int _count;
    NSDate *_lastRecorded;
    double _period;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) double period;
@property (readonly) Class superclass;

+ (id)sharedRateLimiter;

- (void).cxx_destruct;
- (int)count;
- (BOOL)credit;
- (BOOL)debited;
- (id)description;
- (id)init;
- (id)initWithCount:(int)arg1 perPeriod:(double)arg2;
- (double)period;
- (void)recordTimeAndRefillIfNeeded;
- (void)resetRateLimitWithTimeStamp:(id)arg1;

@end
