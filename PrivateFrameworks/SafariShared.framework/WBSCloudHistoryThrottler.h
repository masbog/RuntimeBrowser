/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryThrottler : NSObject {
    <WBSCloudHistoryThrottlerDataStore> *_dataStore;
    unsigned int _maximumNumberOfOperationWithinMonitoredPeriod;
    double _numberOfSecondsToMonitor;
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
}

@property (nonatomic, retain) <WBSCloudHistoryThrottlerDataStore> *dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (BOOL)policyStringRepresentsValidPolicy:(id)arg1;

- (void).cxx_destruct;
- (void)_addOperationAtDate:(id)arg1;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (BOOL)_loadDistributionConfiguration:(id)arg1;
- (void)_loadRecordOfPastOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)arg1;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_saveRecordOfPastOperations;
- (unsigned int)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)_throttlerIsActive;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)arg1;
- (id)dataStore;
- (id)dateOfNextPermittedOperationWithPriority:(int)arg1;
- (id)description;
- (id)init;
- (id)initWithPolicyString:(id)arg1;
- (void)operationWithPriority:(int)arg1 didCompleteWithResult:(int)arg2;
- (BOOL)permitsOperationWithPriority:(int)arg1;
- (void)reloadRecordOfPastOperations;
- (void)setDataStore:(id)arg1;
- (void)setPolicyString:(id)arg1;

@end
