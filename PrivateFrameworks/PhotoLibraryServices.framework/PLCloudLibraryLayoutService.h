/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutService : PLCloudService {
    PLCloudLibraryDistribution *_currentDistribution;
    unsigned int _lastBudgetUpdate;
    unsigned int _layoutMode;
    PLCloudLibraryLayoutStore *_layoutStore;
    PLPhotoLibrary *_localLibrary;
    PLCloudCoalescingQueue *_messageQueue;
    PLCloudPhotoLibraryManager *_remoteLibrary;
    unsigned long long _version;
}

- (void)activate;
- (BOOL)agentRunning;
- (void)assetInserted:(id)arg1;
- (void)assetRemoved:(id)arg1;
- (void)assetsStable:(id)arg1;
- (unsigned long long)availableBudget;
- (void)dealloc;
- (void)enqueueSyncStepsBetween:(id)arg1 and:(id)arg2;
- (void)enqueueSyncStepsBetween:(id)arg1 and:(id)arg2 forAssetChange:(struct { BOOL x1; unsigned int x2; unsigned int x3; id x4; })arg3;
- (void)layoutStoreChanged:(struct { BOOL x1; unsigned int x2; unsigned int x3; id x4; })arg1;
- (id)newLibraryDistribution;
- (id)newLoadOrCreateLibraryDistribution;
- (void)resetPersistedLibraryDistribution;
- (void)resetSync:(id)arg1;
- (void)spaceBudgetUpdated:(id)arg1;
- (void)systemStarted:(id)arg1;
- (void)tearDown;

@end
