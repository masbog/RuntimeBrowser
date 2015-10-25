/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountHandler : NSObject {
    NSString *_currentAccountID;
    <BRCAccountHandlerDelegate> *_delegate;
    BOOL _hasSetMigrationComplete;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    NSObject<OS_dispatch_queue> *_queue;
    BRCAccountSession *_session;
}

@property (nonatomic) <BRCAccountHandlerDelegate> *delegate;
@property (nonatomic, readonly) BRCAccountSession *session;

+ (void)_migrateAccountIfNecessaryForAccountID:(id)arg1;
+ (id)icloudDriveAccountID;
+ (id)primaryiCloudAccount;
+ (id)primaryiCloudAccountID;

- (void).cxx_destruct;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1;
- (void)_updateAccountToAccountID:(id)arg1;
- (id)accountIDPath;
- (BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)destroyCurrentSessionSynchronously;
- (id)init;
- (void)jetsamCloudDocsApps;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (id)onDiskAccountID;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(id /* block */)arg4;
- (BOOL)setOnDiskAccountID:(id)arg1;
- (void)startAndLoadCurrentAccountSynchronously;

@end
