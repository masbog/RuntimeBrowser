/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioFairPlayKBSyncManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _activeAccountIdentifier;
    NSMutableArray *_dpInfoKeyBagSyncDataBlobs;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)popDPInfoKeyBagSyncDataWithCount:(int)arg1 returningAccountIdentifier:(unsigned long long*)arg2 error:(id*)arg3;
- (void)pushDPInfoKeyBagSyncData:(id)arg1 forAccountIdentifier:(unsigned long long)arg2;

@end
