/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchAgent : NSObject <MCProfileConnectionObserver, SPDaemonQueryDelegate> {
    BOOL _activeCachedZKW;
    SPSearchResult *_appStoreSearchThroughResult;
    NSMutableArray *_cachedSections;
    NSMutableArray *_cachedZKW1;
    NSMutableArray *_cachedZKW2;
    SPDaemonQueryToken *_currentToken;
    int _currentZKWLevel;
    BOOL _defaultSearchEnabled;
    NSObject<SPSearchAgentDelegate> *_delegate;
    NSString *_fbq;
    BOOL _hasCachedUpdate;
    BOOL _isActivated;
    NSDictionary *_lastParsecResults;
    NSString *_lastVoiceQuery;
    BOOL _liveAndCached;
    SPSearchResult *_mapsSearchThroughResult;
    BOOL _newQuery;
    BOOL _observersAdded;
    BOOL _oneShotZKWSEnabled;
    int _options;
    NSDate *_parsecNewsExpireTime;
    NSString *_prefixWithNoResults;
    int _prefsToken;
    NSString *_previousQuery;
    NSString *_previousQueryAnySession;
    BOOL _queryComplete;
    NSObject<OS_dispatch_queue> *_queryProcessor;
    unsigned int _resultCount;
    NSMutableArray *_savedSections;
    NSArray *_searchDomains;
    BOOL _searchThroughAllowed;
    SPSearchResultSection *_searchThroughSection;
    NSMutableArray *_sections;
    BOOL _shouldCacheResults;
    SPSearchResultSection *_topHitResultSection;
    BOOL _voiceQueryHasBeenStable;
    SPSearchResult *_webSearchThroughResult;
    NSString *_web_fbq;
    BOOL _willNotify;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SPSearchAgentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fbq;
@property (readonly) unsigned int hash;
@property (nonatomic) int options;
@property (nonatomic, readonly) BOOL queryComplete;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queryProcessor;
@property (nonatomic, retain) NSArray *searchDomains;
@property (readonly) NSArray *sections;
@property (readonly) Class superclass;
@property (readonly) NSString *web_fbq;

+ (void)activate;
+ (void)deactivate;
+ (BOOL)hasSeenZKWApps;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_indexesOfCompatibleSection:(id)arg1;
- (BOOL)_shouldIgnoreQuery:(id)arg1;
- (void)activate;
- (void)addDeserializer:(id)arg1;
- (void)addSearchThroughSectionWithQuery:(id)arg1;
- (void)addSections:(id)arg1;
- (void)cacheZKWQueryLive:(BOOL)arg1 allowInternet:(BOOL)arg2;
- (void)cachedZKWAvailable:(BOOL)arg1;
- (void)cancelCurrentQuery;
- (BOOL)cleanupObsoleteResults;
- (void)clear;
- (void)clearParsecResultsIfStale;
- (int)contentFilters;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)fbq;
- (void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3;
- (void)handleOptionsForNewSections:(id)arg1;
- (BOOL)hasParsecNews;
- (BOOL)hasResults;
- (id)init;
- (id)initWithZKWLevel:(int)arg1 andOptions:(int)arg2;
- (void)internetDomainsChanged;
- (void)invalidateCurrentQuery;
- (int)levelZKW;
- (void)mergeSections;
- (int)options;
- (void)performZKWQueryWithKeyboardLanguage:(id)arg1 allowInternet:(BOOL)arg2;
- (void)postSearchAgentClearedResultsToDelegate;
- (void)postSearchAgentUpdatedResultsToDelegate;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (BOOL)promoteCachedQuery;
- (BOOL)queryComplete;
- (id)queryId;
- (id)queryProcessor;
- (id)queryString;
- (void)removeSectionAtIndex:(unsigned int)arg1;
- (void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize { float x1; float x2; })arg3 completion:(id /* block */)arg4;
- (void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize { float x1; float x2; })arg3 completion:(id /* block */)arg4;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (void)searchDaemonQueryReset:(id)arg1;
- (id)searchDomains;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned int)sectionCount;
- (BOOL)sectionNeedsMoreMapsOption:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(int)arg1;
- (void)setQueryProcessor:(id)arg1;
- (BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 levelZKW:(int)arg4 allowInternet:(BOOL)arg5;
- (BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 withResponse:(id)arg4 isStable:(BOOL)arg5;
- (BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 levelZKW:(int)arg3 allowInternet:(BOOL)arg4;
- (BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 withResponse:(id)arg3 isStable:(BOOL)arg4;
- (BOOL)setQueryString:(id)arg1 withResponse:(id)arg2 keyboardLanguage:(id)arg3 keyboardPrimaryLanguage:(id)arg4 isStable:(BOOL)arg5 levelZKW:(int)arg6 allowInternet:(BOOL)arg7;
- (void)setSearchDomains:(id)arg1;
- (void)stuffChanged;
- (void)testPermuteSection:(id)arg1 domain:(unsigned int)arg2 count:(int)arg3;
- (void)testRestoreCacheZKW;
- (void)testSaveCachedZKWPermUsers:(int)arg1 appLinks:(int)arg2 apps:(int)arg3;
- (void)updateEpilog:(id)arg1;
- (void)updateProlog:(id)arg1;
- (void)updateResultsThroughDelegate;
- (void)updateSearchThroughSectionWithQuery:(id)arg1;
- (id)web_fbq;

@end