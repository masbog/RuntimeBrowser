/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCStageRegistry : NSObject <BRCLowDiskDelegate, BRCModule> {
    NSMutableSet *_activeDownloadStageIDs;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_containersWithUnflushedFileIDs;
    int _deviceID;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BOOL _isCancelled;
    NSMutableDictionary *_lockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    BOOL _lowDiskSpace;
    BRCStagePersistedState *_persistedState;
    NSObject<OS_dispatch_queue> *_queue;
    BRCAccountSession *_session;
    unsigned long long _stageDirectoryFileID;
    NSString *_stageDirectoryPath;
    int _suspendCount;
    brc_task_tracker *_tracker;
    NSMutableSet *_unflushedStagedFileIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceID;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;

+ (void)migrateStageToVersion2_0WithSession:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3;
- (int)_openStageDirectory:(unsigned char)arg1;
- (id)_pathInStage:(unsigned long long)arg1 index:(unsigned char*)arg2 generationID:(unsigned int*)arg3;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(id /* block */)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)_testLockedFiles;
- (void)_watchLockedRelpath:(id)arg1;
- (void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 container:(id)arg3 statInfo:(id)arg4 version:(id)arg5;
- (void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2;
- (void)associateUploadStageID:(id)arg1 withOperation:(id)arg2;
- (void)cancel;
- (void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2;
- (void)cleanupStagedUploadWithID:(id)arg1;
- (void)close;
- (BOOL)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2;
- (id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (int)deviceID;
- (BOOL)didFlushStagedFileID:(unsigned long long)arg1;
- (void)disarmLockedTestTimer;
- (BOOL)existsInOldVersionStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (BOOL)existsInStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (void)forgetWatchedLockedFileID:(unsigned long long)arg1;
- (void)forgetWatchedLockedFileIDsForContainer:(id)arg1;
- (long long)garbageCollectSpace:(long long)arg1 withUrgency:(int)arg2;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isCancelled;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (BOOL)makeDirectoryInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 inContainer:(id)arg3 error:(id*)arg4;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 container:(id)arg2 statInfo:(id)arg3 version:(id)arg4 error:(id*)arg5;
- (BOOL)makeSideFaultInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 documentID:(unsigned int*)arg3 properties:(id)arg4 inContainer:(id)arg5 forCreation:(BOOL)arg6 error:(id*)arg7;
- (BOOL)mayLockFileID:(unsigned long long)arg1;
- (BOOL)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id*)arg4;
- (BOOL)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2;
- (BOOL)moveOldVersionFromPath:(id)arg1 error:(id*)arg2;
- (BOOL)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id*)arg3;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (void)open;
- (long long)purgableSpace;
- (long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (BOOL)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 documentID:(unsigned int*)arg4 container:(id)arg5 error:(id*)arg6;
- (void)resume;
- (void)setIsCancelled:(BOOL)arg1;
- (void)suspend;
- (BOOL)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (void)willFlushAllStagedFileIDs;

@end
