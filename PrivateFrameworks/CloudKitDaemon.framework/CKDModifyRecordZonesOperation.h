/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    BOOL _allowDefaultZoneSave;
    id /* block */ _deleteCompletionBlock;
    BOOL _markZonesAsUserPurged;
    int _maxZoneSaveAttempts;
    int _numZoneSaveAttempts;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableArray *_recordZonesToSave;
    id /* block */ _saveCompletionBlock;
}

@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic, copy) id /* block */ deleteCompletionBlock;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) int maxZoneSaveAttempts;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic, retain) NSArray *recordZoneIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneID;
@property (nonatomic, retain) NSMutableArray *recordZonesToSave;
@property (nonatomic, copy) id /* block */ saveCompletionBlock;

- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (BOOL)_saveZonesToServer;
- (void)_sendErrorForFailedZones;
- (unsigned long long)activityStart;
- (BOOL)allowDefaultZoneSave;
- (id /* block */)deleteCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (BOOL)markZonesAsUserPurged;
- (int)maxZoneSaveAttempts;
- (id)nameForState:(unsigned int)arg1;
- (int)numZoneSaveAttempts;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneID;
- (id)recordZonesToSave;
- (id /* block */)saveCompletionBlock;
- (void)setAllowDefaultZoneSave:(BOOL)arg1;
- (void)setDeleteCompletionBlock:(id /* block */)arg1;
- (void)setMarkZonesAsUserPurged:(BOOL)arg1;
- (void)setMaxZoneSaveAttempts:(int)arg1;
- (void)setNumZoneSaveAttempts:(int)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg1;

@end
