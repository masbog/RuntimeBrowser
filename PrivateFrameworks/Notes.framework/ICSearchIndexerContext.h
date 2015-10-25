/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSearchIndexerContext : NSObject {
    BOOL _alwaysRunInDispatchQueue;
    BOOL _canUpdateIndexClientState;
    BOOL _canUpdateMigrationState;
    NSDictionary *_changeNotifyingManagedObjectContextMap;
    NSOperationQueue *_chooseToMigrateOperationQueue;
    BOOL _coreSpotlightDisabled;
    <ICSearchIndexerContextDelegate> *_delegate;
    ICSearchIndexableMutableIdentifiers *_didChangeAddedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_didChangeDeletedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_didChangeUpdatedIdentifiers;
    BOOL _enumerateAllObjectsFromMainContextOnly;
    ICSearchIndexableMutableIdentifiers *_immediateIdentifiers;
    BOOL _indexCommunicationSupportEnabled;
    ICThreadBlockDispatcher *_indexerBlockDispatcher;
    BOOL _indexingDisabled;
    BOOL _legacyObjectsOnly;
    NSMutableSet *_migrationStateUpdatedLegacyAccountObjectIDs;
    BOOL _nonBlocking;
    int _pauseLevel;
    BOOL _shouldCreateIndexerOnDemand;
    BOOL _shouldPurgeMemoryAfterIndexingEachObject;
    BOOL _supportsCompletionHandling;
    BOOL _wasEverPaused;
}

@property (nonatomic, readonly) BOOL alwaysRunInDispatchQueue;
@property (nonatomic) BOOL canUpdateIndexClientState;
@property (nonatomic) BOOL canUpdateMigrationState;
@property (copy) NSDictionary *changeNotifyingManagedObjectContextMap;
@property (nonatomic, retain) NSOperationQueue *chooseToMigrateOperationQueue;
@property (nonatomic) BOOL coreSpotlightDisabled;
@property (nonatomic) <ICSearchIndexerContextDelegate> *delegate;
@property (nonatomic, retain) ICSearchIndexableMutableIdentifiers *didChangeAddedIdentifiers;
@property (nonatomic, retain) ICSearchIndexableMutableIdentifiers *didChangeDeletedIdentifiers;
@property (nonatomic, retain) ICSearchIndexableMutableIdentifiers *didChangeUpdatedIdentifiers;
@property (nonatomic) BOOL enumerateAllObjectsFromMainContextOnly;
@property (nonatomic, retain) ICSearchIndexableMutableIdentifiers *immediateIdentifiers;
@property (nonatomic) BOOL indexCommunicationSupportEnabled;
@property (nonatomic, retain) ICThreadBlockDispatcher *indexerBlockDispatcher;
@property (nonatomic) BOOL indexingDisabled;
@property (nonatomic) BOOL legacyObjectsOnly;
@property (nonatomic, retain) NSMutableSet *migrationStateUpdatedLegacyAccountObjectIDs;
@property (nonatomic) BOOL nonBlocking;
@property (nonatomic) int pauseLevel;
@property (nonatomic) BOOL shouldCreateIndexerOnDemand;
@property (nonatomic) BOOL shouldPurgeMemoryAfterIndexingEachObject;
@property (nonatomic) BOOL supportsCompletionHandling;
@property (nonatomic) BOOL wasEverPaused;

+ (id)changeNotifyingManagedObjectContextForKey:(id)arg1;
+ (id)keyForChangeNotifyingManagedObjectContext:(id)arg1;
+ (id)searchIndexableIdentifiersForLegacyManagedObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 changeNotifyingManagedObjectContextMap:(id)arg3;
+ (id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2 changeNotifyingManagedObjectContext:(id)arg3 changeNotifyingManagedObjectContextMap:(id)arg4 enumerateWithBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (void)addSearchIndexableNoteContext:(id)arg1 withChangeNotifyingManagedObjectContext:(id)arg2;
- (BOOL)alwaysRunInDispatchQueue;
- (BOOL)canUpdateIndexClientState;
- (BOOL)canUpdateMigrationState;
- (id)changeNotifyingManagedObjectContextMap;
- (id)chooseToMigrateOperationQueue;
- (BOOL)coreSpotlightDisabled;
- (void)dealloc;
- (id)delegate;
- (id)didChangeAddedIdentifiers;
- (id)didChangeDeletedIdentifiers;
- (id)didChangeUpdatedIdentifiers;
- (BOOL)enumerateAllObjectsFromMainContextOnly;
- (void)enumerateAllObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (BOOL)evaluateObjectForSearchIndexableIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 mainContextOnly:(BOOL)arg4 usingBlock:(id /* block */)arg5;
- (BOOL)evaluateObjectWithObjectIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 mainContextOnly:(BOOL)arg4 usingBlock:(id /* block */)arg5;
- (id)immediateIdentifiers;
- (BOOL)indexCommunicationSupportEnabled;
- (id)indexerBlockDispatcher;
- (BOOL)indexingDisabled;
- (id)init;
- (id)integerIDForNote:(id)arg1;
- (void)invalidateAllNoteContexts;
- (BOOL)legacyObjectsOnly;
- (void)localAccountMigrationStateDidChange:(id)arg1;
- (id)migrationStateUpdatedLegacyAccountObjectIDs;
- (BOOL)nonBlocking;
- (id)noteForIntegerID:(id)arg1;
- (void)notifyDelegateAboutIdentifiersUpdates;
- (void)notifyDelegateAboutIdentifiersUpdatesIfPossibleWithUpdateCount:(unsigned int)arg1;
- (void)notifyDelegateAboutUpdatedIdentifiersWithResults:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectsDidChange:(id)arg1;
- (id)objectsDidChangeResultsForDidChooseToMigrateAccount:(BOOL)arg1 legacyAccountType:(int)arg2;
- (void)pauseIndexing;
- (int)pauseLevel;
- (void)performUpdateWithResults:(id)arg1;
- (void)removeSearchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1;
- (void)resetChangedIdentifiers;
- (void)resetPauseLevel;
- (id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2 changeNotifyingManagedObjectContext:(id)arg3;
- (id)searchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1;
- (id)searchIndexableNoteContextOfClass:(Class)arg1 forSearchIndexableObject:(id)arg2;
- (id)searchIndexableNoteContextsFromMap:(id)arg1 passingTest:(id /* block */)arg2;
- (id)searchIndexableObjectInMainContextForObjectIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3;
- (void)setAlwaysRunInDispatchQueue;
- (void)setAlwaysRunInDispatchQueueIfNeeded;
- (void)setCanUpdateIndexClientState:(BOOL)arg1;
- (void)setCanUpdateMigrationState:(BOOL)arg1;
- (void)setChangeNotifyingManagedObjectContextMap:(id)arg1;
- (void)setChooseToMigrateOperationQueue:(id)arg1;
- (void)setCoreSpotlightDisabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidChangeAddedIdentifiers:(id)arg1;
- (void)setDidChangeDeletedIdentifiers:(id)arg1;
- (void)setDidChangeUpdatedIdentifiers:(id)arg1;
- (void)setEnumerateAllObjectsFromMainContextOnly:(BOOL)arg1;
- (void)setImmediateIdentifiers:(id)arg1;
- (void)setIndexCommunicationSupportEnabled:(BOOL)arg1;
- (void)setIndexerBlockDispatcher:(id)arg1;
- (void)setIndexingDisabled:(BOOL)arg1;
- (void)setLegacyObjectsOnly:(BOOL)arg1;
- (void)setMigrationStateUpdatedLegacyAccountObjectIDs:(id)arg1;
- (void)setNonBlocking:(BOOL)arg1;
- (void)setPauseLevel:(int)arg1;
- (void)setShouldCreateIndexerOnDemand:(BOOL)arg1;
- (void)setShouldPurgeMemoryAfterIndexingEachObject:(BOOL)arg1;
- (void)setSupportsCompletionHandling:(BOOL)arg1;
- (void)setWasEverPaused:(BOOL)arg1;
- (BOOL)shouldCreateIndexerOnDemand;
- (BOOL)shouldPurgeMemoryAfterIndexingEachObject;
- (BOOL)supportsCompletionHandling;
- (void)unpauseIndexing;
- (void)updateResultsForDidChooseToMigrateAccount:(BOOL)arg1 legacyAccountType:(int)arg2;
- (void)updateWithDeletedLegacyObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2;
- (void)updateWithDeletedObjects:(id)arg1 addedObjects:(id)arg2 updatedObjects:(id)arg3 changeNotifyingManagedObjectContext:(id)arg4;
- (void)updateWithResults:(id)arg1;
- (BOOL)wasEverPaused;

@end
