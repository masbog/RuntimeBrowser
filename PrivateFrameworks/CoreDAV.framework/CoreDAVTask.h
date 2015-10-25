/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVTask : NSObject <CoreDAVSubmittable> {
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    BOOL _allowAutomaticRedirects;
    id /* block */ _completionBlock;
    BOOL _compressedRequestFailed;
    NSURLConnection *_connection;
    id _context;
    NSDate *_dateConnectionWentOut;
    <CoreDAVTaskDelegate> *_delegate;
    int _depth;
    BOOL _didCancel;
    BOOL _didFailWithError;
    BOOL _didFinishLoading;
    BOOL _didReceiveData;
    BOOL _didReceiveResponse;
    BOOL _didRetryWithClientToken;
    BOOL _didSendRequest;
    NSError *_error;
    BOOL _everTriedTokenAuth;
    NSData *_fakeResponseData;
    BOOL _finished;
    CoreDAVErrorItem *_forbiddenErrorItem;
    BOOL _haveParsedFakeResponseData;
    BOOL _justTriedTokenAuth;
    CoreDAVRequestLogger *_logger;
    int _numDownloadedElements;
    NSMutableDictionary *_overriddenHeaders;
    NSError *_passwordNotificationError;
    BOOL _receivedBadPasswordResponse;
    NSMutableArray *_redirectHistory;
    NSURLRequest *_request;
    BOOL _requestIsCompressed;
    id /* block */ _requestProgressBlock;
    NSDictionary *_requestProperties;
    NSHTTPURLResponse *_response;
    <CoreDAVResponseBodyParser> *_responseBodyParser;
    id /* block */ _responseProgressBlock;
    int _responseStatusCode;
    BOOL _shouldRetryWithClientToken;
    <CoreDAVTaskManager> *_taskManager;
    double _timeoutInterval;
    unsigned int _totalBytesReceived;
    BOOL _triedRenewingCredential;
    NSString *_uniqueID;
    NSURL *_url;
}

@property (nonatomic) <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (nonatomic) BOOL allowAutomaticRedirects;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic) int depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isFinished, nonatomic, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ requestProgressBlock;
@property (nonatomic, retain) NSDictionary *requestProperties;
@property (nonatomic, retain) <CoreDAVResponseBodyParser> *responseBodyParser;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, copy) id /* block */ responseProgressBlock;
@property (nonatomic) int responseStatusCode;
@property (readonly) Class superclass;
@property (nonatomic) <CoreDAVTaskManager> *taskManager;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned int totalBytesReceived;
@property (nonatomic, readonly) NSURL *url;

+ (id)stringFromDepth:(int)arg1;
+ (unsigned int)uniqueQueryID;

- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (id)_applyStorageSession:(struct __CFURLStorageSession { }*)arg1 toRequest:(id)arg2;
- (id)_compressBodyData:(id)arg1;
- (id)_connectionForLogging;
- (id)_createBodyData;
- (void)_failImmediately;
- (void)_handleBadPasswordResponse;
- (BOOL)_handleUnauthorizedAccessError:(id)arg1;
- (BOOL)_includeGeneralHeaders;
- (id)_requestForLogging;
- (void)_sendTimeSpentInNetworkingToProvider;
- (BOOL)_shouldHandleStatusCode:(int)arg1;
- (id)accountInfoProvider;
- (id)additionalHeaderValues;
- (BOOL)allowAutomaticRedirects;
- (unsigned int)cachePolicy;
- (id /* block */)completionBlock;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (id)context;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)credentialForClientCertificateChallenge:(id)arg1;
- (id)credentialForOAuthChallenge:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)depth;
- (id)description;
- (id)error;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)finishEarlyWithError:(id)arg1;
- (void)handleWebLoginRequestWithCompletionBlock:(id /* block */)arg1;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (BOOL)isFinished;
- (id)lastRedirectURL;
- (void)loadRequest:(id)arg1;
- (BOOL)markAsFinished;
- (int)numDownloadedElements;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (void)performCoreDAVTask;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (id /* block */)requestProgressBlock;
- (id)requestProperties;
- (void)reset;
- (id)responseBodyParser;
- (id)responseHeaders;
- (id /* block */)responseProgressBlock;
- (int)responseStatusCode;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setAllowAutomaticRedirects:(BOOL)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepth:(int)arg1;
- (void)setError:(id)arg1;
- (void)setRequestProgressBlock:(id /* block */)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)setResponseProgressBlock:(id /* block */)arg1;
- (void)setResponseStatusCode:(int)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTotalBytesReceived:(unsigned int)arg1;
- (BOOL)shouldLogResponseBody;
- (void)startModal;
- (void)submitWithTaskManager:(id)arg1;
- (id)taskManager;
- (void)tearDownResources;
- (double)timeoutInterval;
- (unsigned int)totalBytesReceived;
- (id)url;
- (BOOL)validate:(id*)arg1;

@end
