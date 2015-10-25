/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {
    int _backgroundReadersWaiting;
    NSMutableSet *_cache;
    unsigned int _cacheGeneration;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    unsigned int _cacheSize;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    <HDSQLiteDatabasePoolDelegate> *_delegate;
    unsigned int _maxConcurrentBackgroundReaders;
    unsigned int _maxConcurrentWriters;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    int _writersWaiting;
}

@property (readonly) unsigned int backgroundReadersWaiting;
@property unsigned int cacheSize;
@property (readonly, copy) NSString *debugDescription;
@property <HDSQLiteDatabasePoolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) unsigned int maxConcurrentBackgroundReaders;
@property (readonly) unsigned int maxConcurrentWriters;
@property (readonly) Class superclass;
@property (readonly) unsigned int writersWaiting;

- (void).cxx_destruct;
- (id)_databaseWithType:(int)arg1 error:(id*)arg2;
- (id)_semaphoreForDatabaseType:(int)arg1 waitCounter:(int**)arg2;
- (unsigned int)backgroundReadersWaiting;
- (unsigned int)cacheSize;
- (void)checkInDatabase:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)flush;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned int)arg2;
- (unsigned int)maxConcurrentBackgroundReaders;
- (unsigned int)maxConcurrentWriters;
- (id)readerDatabaseWithPriority:(int)arg1 error:(id*)arg2;
- (void)setCacheSize:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (id)writerDatabaseWithError:(id*)arg1;
- (unsigned int)writersWaiting;

@end
