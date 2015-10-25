/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchModel : SPSearchAgent <PRSImageSource, SPDaemonQueryDelegate> {
    NSObject<OS_dispatch_semaphore> *_cacheResultLock;
    CPLRUDictionary *_cachedResultImages;
    NSArray *_deferredResults;
    BOOL _isDeferredQUeryComplete;
    NSOperationQueue *_loadOperationQueue;
    NSOperationQueue *_prefetchOperationQueue;
    NSOperation *_waitOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)cacheZKWQueryLive:(BOOL)arg1 allowInternet:(BOOL)arg2;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)arg1;
+ (id)sharedFullZWKInstance;
+ (id)sharedGeneralInstance;
+ (id)sharedInstance;
+ (id)sharedPartialZKWInstance;

- (void).cxx_destruct;
- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (id)_customImageForPath:(id)arg1;
- (BOOL)_getCachedImageForKey:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_imageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_uniqueKeyForResult:(id)arg1 withSearchDomain:(unsigned int)arg2;
- (void)activate;
- (void)cacheImage:(id)arg1 forResult:(id)arg2 inSection:(id)arg3;
- (id)cachedImageForResult:(id)arg1 inSection:(id)arg2;
- (void)cachedZKWAvailable:(BOOL)arg1;
- (void)cancelPrefetchingAndStartNewBatch;
- (void)clearImageCache;
- (int)contentFilters;
- (id)currentToken;
- (void)deactivate;
- (void)dealloc;
- (void)fetchCardDataForResult:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchImageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)getImageWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)handleOptionsForNewSections:(id)arg1;
- (id)initForZKWLevel:(int)arg1;
- (void)invalidateCurrentQuery;
- (BOOL)itemInLibrary:(id)arg1;
- (id)operationFetchingImageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)placeholderImageForResult:(id)arg1;
- (BOOL)prefetchImageForResult:(id)arg1 inSection:(id)arg2;
- (void)transferZKWResults:(id)arg1 wasSimilar:(BOOL)arg2;

@end
