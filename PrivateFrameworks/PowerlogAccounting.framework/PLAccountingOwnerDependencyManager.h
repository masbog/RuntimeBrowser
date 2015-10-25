/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingOwnerDependencyManager : NSObject <PLAccountingDependencyManager, PLAccountingOwnerManager> {
    NSMutableDictionary *_dependencyIDToDependencies;
    NSMutableDictionary *_dependencyIDToObservingOwners;
    PLMonotonicTimer *_freeTimer;
    int _numDependencies;
    NSMutableDictionary *_ownerIDToLastOwner;
    NSMutableDictionary *_ownerIDToObservingDependencies;
    NSMutableSet *_ownersRepository;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableDictionary *dependencyIDToDependencies;
@property (retain) NSMutableDictionary *dependencyIDToObservingOwners;
@property (readonly, copy) NSString *description;
@property (retain) PLMonotonicTimer *freeTimer;
@property (readonly) unsigned int hash;
@property int numDependencies;
@property (retain) NSMutableDictionary *ownerIDToLastOwner;
@property (retain) NSMutableDictionary *ownerIDToObservingDependencies;
@property (retain) NSMutableSet *ownersRepository;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (double)freeTimerInterval;
+ (int)maxDependencies;
+ (int)maxOwners;

- (void).cxx_destruct;
- (void)addDependency:(id)arg1;
- (void)addOwner:(id)arg1;
- (void)canFreeDependency:(id)arg1;
- (void)canFreeOwner:(id)arg1;
- (id)dependenciesWithDependencyID:(id)arg1 withRange:(id)arg2;
- (id)dependencyIDToDependencies;
- (id)dependencyIDToObservingOwners;
- (id)dependencyIDsForOwner:(id)arg1;
- (void)freeExpiredDependenciesAtNow:(id)arg1;
- (void)freeExpiredOwnersAtNow:(id)arg1;
- (id)freeTimer;
- (id)init;
- (id)lastDependencyForDependencyID:(id)arg1;
- (id)lastOwnerForOwnerID:(id)arg1;
- (void)notifyDependenciesWithOwner:(id)arg1;
- (void)notifyOwnersWithDependency:(id)arg1;
- (int)numDependencies;
- (id)ownerIDToLastOwner;
- (id)ownerIDToObservingDependencies;
- (id)ownerIDsForDependency:(id)arg1;
- (id)ownersRepository;
- (void)reloadDependenciesNewerThanDate:(id)arg1;
- (void)setDependencyIDToDependencies:(id)arg1;
- (void)setDependencyIDToObservingOwners:(id)arg1;
- (void)setFreeTimer:(id)arg1;
- (void)setNumDependencies:(int)arg1;
- (void)setOwnerIDToLastOwner:(id)arg1;
- (void)setOwnerIDToObservingDependencies:(id)arg1;
- (void)setOwnersRepository:(id)arg1;
- (void)startObservingDependencyID:(id)arg1 forOwner:(id)arg2;
- (void)startObservingOwnerID:(id)arg1 forDependency:(id)arg2;
- (void)stopObservingDependencyID:(id)arg1 forOwner:(id)arg2;
- (void)stopObservingOwnerID:(id)arg1 forDependency:(id)arg2;
- (void)updateLastDependencyID:(id)arg1 withEndDate:(id)arg2;
- (id)workQueue;

@end
