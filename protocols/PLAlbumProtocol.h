/* Generated by RuntimeBrowser.
 */

@protocol PLAlbumProtocol <PLAssetContainer>

@required

- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (BOOL)canContributeToCloudSharedAlbum;
- (NSURL *)groupURL;
- (BOOL)hasUnseenContentBoolValue;
- (NSString *)importSessionID;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isFolder;
- (BOOL)isInTrash;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRecentlyAddedAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isUserLibraryAlbum;
- (BOOL)isWallpaperAlbum;
- (NSNumber *)kind;
- (int)kindValue;
- (NSMutableOrderedSet *)mutableAssets;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (UIImage *)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setImportSessionID:(NSString *)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSlideshowSettings:(NSDictionary *)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (NSDictionary *)slideshowSettings;
- (id /* block */)sortingComparator:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL

@optional

- (unsigned int)batchSize;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
- (NSString *)name;
- (void)setBatchSize:(unsigned int)arg1;
- (void)setUINotificationsEnabled:(BOOL)arg1;

@end
