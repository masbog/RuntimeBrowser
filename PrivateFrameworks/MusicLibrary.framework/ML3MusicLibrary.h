/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {
    ML3AccountCacheDatabase *_accountCacheDatabase;
    ML3DatabaseConnectionPool *_connectionPool;
    NSString *_databasePath;
    <ML3MusicLibraryDelegate> *_delegate;
    BOOL _isHomeSharingLibrary;
    BOOL _isHomeSharingLibraryLoaded;
    NSArray *_libraryContainerFilterPredicates;
    NSArray *_libraryEntityFilterPredicates;
    NSArray *_libraryPublicContainerFilterPredicates;
    NSArray *_libraryPublicEntityFilterPredicates;
    NSString *_libraryUID;
    ML3LibraryNotificationManager *_notificationManager;
    NSMutableDictionary *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMutableDictionary *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
    NSMutableDictionary *_optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct iPhoneSortKeyBuilder { } *_sortKeyBuilder;
    NSString *_syncLibraryUID;
}

@property (nonatomic, readonly) long long autoFilledTracksTotalSize;
@property (nonatomic, readonly) ML3DatabaseConnectionPool *connectionPool;
@property (nonatomic, readonly) long long currentContentRevision;
@property (nonatomic, readonly) ML3Container *currentDevicePlaybackHistoryPlaylist;
@property (nonatomic, readonly) ML3Container *currentDevicePurchasesPlaylist;
@property (nonatomic, readonly) long long currentRevision;
@property (nonatomic, readonly) ML3DatabaseMetadata *databaseInfo;
@property (nonatomic, readonly) NSString *databasePath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ML3MusicLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isHomeSharingLibrary;
@property (nonatomic, retain) NSArray *libraryContainerFilterPredicates;
@property (getter=isLibraryEmpty, nonatomic, readonly) BOOL libraryEmpty;
@property (nonatomic, retain) NSArray *libraryEntityFilterPredicates;
@property (nonatomic, retain) NSArray *libraryPublicContainerFilterPredicates;
@property (nonatomic, retain) NSArray *libraryPublicEntityFilterPredicates;
@property (nonatomic, readonly) NSString *libraryUID;
@property (nonatomic, readonly) NSArray *localizedSectionIndexTitles;
@property (nonatomic, readonly) BOOL mediaRestrictionEnabled;
@property (nonatomic, readonly) NSArray *preferredAudioTracks;
@property (nonatomic, readonly) NSArray *preferredSubtitleTracks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsUbiquitousPlaybackPositions;
@property (nonatomic) long long syncGenerationID;
@property (nonatomic) NSString *syncLibraryID;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)allPragmaSQL;
+ (id)allSchemaSQL;
+ (id)allTables;
+ (id)allTriggersSQL;
+ (BOOL)companionDeviceActiveStoreAccountIsSubscriber;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2;
+ (BOOL)deviceSupportsMultipleLibraries;
+ (void)disableAutomaticDatabaseValidation;
+ (void)disableSharedLibrary;
+ (BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char *)arg2;
+ (void)enableAutomaticDatabaseValidation;
+ (void)enumerateSortMapTablesUsingBlock:(id /* block */)arg1;
+ (id)indexSchemaSQL;
+ (id)itemIndexSchemaSQL;
+ (id)itemNewSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)mediaFolderPath;
+ (id)mediaFolderPathByAppendingPathComponent:(id)arg1;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (id)pathForBaseLocationPath:(long long)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (void)setCompanionDeviceActiveStoreAccountSubscriber:(BOOL)arg1;
+ (id)sharedLibrary;
+ (id)sharedLibraryDatabasePath;
+ (id)sortMapNewSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)storeLinkSchemaSQL;
+ (id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3;
+ (BOOL)updateTrackIntegrityOnConnection:(id)arg1;
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;

- (void).cxx_destruct;
- (id)_allArtworkVariantDirectories;
- (id)_allKeepLocalPlaylistTracks;
- (void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(int)arg2 mediaType:(unsigned long)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1;
- (long long)_clearAllCloudAssets;
- (BOOL)_clearAllRowsFromTables:(id)arg1;
- (long long)_clearDatabaseFileFreeSpace;
- (long long)_clearOrphanedAssetsOfAmount:(long long)arg1 withUrgency:(unsigned int)arg2;
- (long long)_clearPurgeableArtworkOfAmount:(long long)arg1 withUrgency:(unsigned int)arg2;
- (long long)_clearPurgeableDatabaseFilesOfAmount:(long long)arg1 withUrgency:(unsigned int)arg2;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned int)arg2 includeAutoFilledTracks:(BOOL)arg3;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned int)arg2 includeCloudAssets:(BOOL)arg3 includeAutoFilledTracks:(BOOL)arg4;
- (BOOL)_coalesceMismatchedCollectionClass:(Class)arg1 usingConnection:(id)arg2;
- (void)_configureMediaLibraryDatabaseConnection:(id)arg1;
- (void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1;
- (BOOL)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6;
- (void)_effectiveSettingsDidChangeNotification:(id)arg1;
- (void)_enumeratePurgeableTracksForUrgency:(unsigned int)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3 usingBlock:(id /* block */)arg4;
- (long long)_getArtworkTotalSize;
- (long long)_getCloudAssetsTotalSize;
- (long long)_getDatabaseFileFreeSpace;
- (long long)_getPurgeableArtworkTotalSizeWithUrgency:(unsigned int)arg1;
- (long long)_getPurgeableDatabaseFileSizeWithUrgency:(unsigned int)arg1;
- (long long)_getPurgeableTracksTotalSizeWithUrgency:(unsigned int)arg1 includeAutoFilledTracks:(BOOL)arg2;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(int)arg2 sourceType:(int)arg3 relativePath:(id)arg4;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(int)arg2 sourceType:(int)arg3 relativePath:(id)arg4 usingConnection:(id)arg5;
- (void)_loggingSettingsDidChangeNotification:(id)arg1;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (id)_notInKeepLocalCollectionPredicate;
- (void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2;
- (id)_purgeableTrackPredicateWithUrgency:(unsigned int)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3;
- (BOOL)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg1;
- (BOOL)_removeOrphanedArtworkAssetsUsingConnection:(id)arg1;
- (BOOL)_removeOrphanedArtworkMetadataUsingConnection:(id)arg1;
- (BOOL)_removeOrphanedArtworkTokensUsingConnection:(id)arg1;
- (id)_systemUnicodeVersionData;
- (void)_teardownMediaLibraryDatabaseConnection:(id)arg1;
- (BOOL)_updateBestArtworkTokensForArtworkToken:(id)arg1 artworkType:(int)arg2 sourceType:(int)arg3 usingConnection:(id)arg4;
- (void)_updateDatabaseConnectionsProfilingLevel;
- (BOOL)_validateDatabaseUsingConnection:(id)arg1 error:(id*)arg2;
- (void)accessSortKeyBuilder:(id /* block */)arg1;
- (id)accountCacheDatabase;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (long long)autoFilledTracksTotalSize;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned int)arg1;
- (void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1;
- (BOOL)automaticDatabaseValidationDisabled;
- (void)checkInDatabaseConnection:(id)arg1;
- (id)checkoutReaderConnection;
- (id)checkoutWriterConnection;
- (BOOL)cleanupArtworkWithOptions:(unsigned int)arg1;
- (BOOL)cleanupArtworkWithOptions:(unsigned int)arg1 usingConnection:(id)arg2;
- (BOOL)clearAllGeniusData;
- (long long)clearAllRemovedTracks;
- (long long)clearPurgeableStorageAmount:(long long)arg1;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned int)arg2;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned int)arg2 includeAutoFilledTracks:(BOOL)arg3;
- (BOOL)coalesceMismatchedCollectionsUsingConnection:(id)arg1;
- (BOOL)coerceValidDatabaseWithError:(id*)arg1;
- (id)composerForComposerName:(id)arg1;
- (void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;
- (void)connectionDidBeginDatabaseTransaction:(id)arg1;
- (void)connectionDidOpenDatabase:(id)arg1;
- (id)connectionPool;
- (void)connectionPool:(id)arg1 createdNewConnection:(id)arg2;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
- (unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3;
- (BOOL)createIndexes;
- (long long)currentContentRevision;
- (int)currentDatabaseVersion;
- (id)currentDevicePlaybackHistoryPlaylist;
- (id)currentDevicePurchasesPlaylist;
- (long long)currentRevision;
- (void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (id)databaseInfo;
- (id)databasePath;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteArtworkToken:(id)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned int)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned int)arg2 respectSongMattress:(BOOL)arg3;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (void)deletePresignedValidity;
- (BOOL)dropItemIndexes;
- (BOOL)emptyAllTables;
- (void)enumerateArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 usingBlock:(id /* block */)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 inUsersLibrary:(BOOL)arg5 usingBlock:(id /* block */)arg6;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3 usingBlock:(id /* block */)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)genreForGenre:(id)arg1;
- (BOOL)getAutoFilledTracksArePurgeable;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(int)arg2 maximumRevisionType:(int)arg3 usingBlock:(id /* block */)arg4;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(int)arg2 usingBlock:(id /* block */)arg3;
- (long long)getPurgeableStorageSize;
- (long long)getPurgeableStorageSizeWithUrgency:(unsigned int)arg1;
- (long long)getPurgeableStorageSizeWithUrgency:(unsigned int)arg1 includeAutoFilledTracks:(BOOL)arg2;
- (id)groupingKeyForString:(id)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (BOOL)hasPresignedValidity;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkToken:(id)arg3 artworkType:(int)arg4 sourceType:(int)arg5;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkToken:(id)arg3 artworkType:(int)arg4 sourceType:(int)arg5 usingConnection:(id)arg6;
- (BOOL)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(int)arg2 sourceType:(int)arg3 mediaType:(unsigned long)arg4;
- (BOOL)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned long)arg5;
- (BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned long)arg5;
- (BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1;
- (BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(id /* block */)arg3;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2;
- (BOOL)isArtworkTokenAvailable:(id)arg1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)isHomeSharingLibrary;
- (BOOL)isLibraryEmpty;
- (id)libraryContainerFilterPredicates;
- (id)libraryEntityFilterPredicates;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1;
- (id)libraryPublicContainerFilterPredicates;
- (id)libraryPublicEntityFilterPredicates;
- (id)libraryUID;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (BOOL)mediaRestrictionEnabled;
- (void)migrateExistingArtworkToken:(id)arg1 newArtworkToken:(id)arg2 newSourceType:(int)arg3;
- (void)migratePresignedValidity;
- (struct { long long x1; int x2; })nameOrderForString:(id)arg1;
- (void)notifyCloudLibraryAvailabilityDidChange;
- (void)notifyContentsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyLibraryImportDidFinish;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifySectionsDidChange;
- (void)performDatabaseTransactionWithBlock:(id /* block */)arg1;
- (void)performReadOnlyDatabaseTransactionWithBlock:(id /* block */)arg1;
- (BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(int)arg3;
- (BOOL)populateStaticItemsOfDynamicContainers;
- (id)preferredAudioTracks;
- (id)preferredSubtitleTracks;
- (BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2;
- (void)reconnectToDatabase;
- (BOOL)removeArtworkAssetWithToken:(id)arg1;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 sourceType:(int)arg4;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 sourceType:(int)arg4 usingConnection:(id)arg5;
- (void)removeItemsWithFamilyAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 downloaderAccountID:(unsigned long long)arg3;
- (void)removeOrphanedTracks;
- (void)removeOrphanedTracksOnlyInCaches:(BOOL)arg1;
- (void)removeSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)removeSource:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeTombstonesForDeletedItems;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)repairAlbumArtistRelationshipsWithConnection:(id)arg1;
- (BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1;
- (BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1;
- (void)retrieveBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 retrievalTime:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)savePlaylists;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (unsigned int)sectionIndexTitleIndexForSectionIndex:(unsigned int)arg1;
- (void)setAutoFilledTracksArePurgeable:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsHomeSharingLibrary:(BOOL)arg1;
- (void)setLibraryContainerFilterPredicates:(id)arg1;
- (void)setLibraryEntityFilterPredicates:(id)arg1;
- (void)setLibraryPublicContainerFilterPredicates:(id)arg1;
- (void)setLibraryPublicEntityFilterPredicates:(id)arg1;
- (void)setLibraryUID:(id)arg1;
- (void)setSyncGenerationID:(long long)arg1;
- (void)setSyncLibraryID:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (BOOL)supportsUbiquitousPlaybackPositions;
- (long long)syncGenerationID;
- (long long)syncIdFromMultiverseId:(id)arg1;
- (id)syncLibraryID;
- (unsigned int)unknownSectionIndex;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 retrievalTime:(double)arg4 usingConnection:(id)arg5;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)updateSortMap;
- (BOOL)updateSortMapOnConnection:(id)arg1;
- (BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
- (BOOL)updateSystemPlaylistNamesForCurrentLanguage;
- (void)updateTrackIntegrity;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (id)uppService;
- (BOOL)validateDatabase;
- (BOOL)validateSortMapUnicodeVersionOnConnection:(id)arg1;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)verifyPresignedValidity;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4;

- (void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)executeUpdateSQL:(id)arg1;
- (void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(id /* block */)arg3;

@end