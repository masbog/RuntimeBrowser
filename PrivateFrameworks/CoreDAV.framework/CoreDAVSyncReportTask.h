/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
    BOOL _moreToSync;
    NSString *_nextSyncToken;
    NSString *_previousSyncToken;
    BOOL _wasInvalidSyncToken;
}

@property (nonatomic, readonly) BOOL moreToSync;
@property (nonatomic, readonly) NSString *nextSyncToken;
@property (nonatomic, readonly) BOOL wasInvalidSyncToken;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;
- (BOOL)moreToSync;
- (id)nextSyncToken;
- (id)notFoundHREFs;
- (id)requestBody;
- (BOOL)wasInvalidSyncToken;

@end
