/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSuggestedContactStore : CNContactStore {
    SGSuggestionsService *_suggestionService;
}

@property (nonatomic, retain) SGSuggestionsService *suggestionService;

+ (void)initialize;
+ (BOOL)isSuggestionsSupported;
+ (id)storeIdentifier;
+ (id)storeInfoClasses;

- (BOOL)_processSuggestions:(id)arg1 error:(id*)arg2 withBlock:(id /* block */)arg3;
- (void)dealloc;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithSuggestionsService:(id)arg1;
- (id)originForSuggestion:(id)arg1 error:(id*)arg2;
- (void)setSuggestionService:(id)arg1;
- (id)suggestionService;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

@end
