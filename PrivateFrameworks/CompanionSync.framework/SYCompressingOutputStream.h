/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYCompressingOutputStream : NSOutputStream <NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamProgress, SYStreamThroughputCounter, _SYStreamRunLoopSourceHandler> {
    unsigned long long _byteCount;
    _SYZlibStreamInternal *_internal;
    int _level;
    id /* block */ _onBytesAvailable;
    id /* block */ _onClose;
    id /* block */ _onEndOfFile;
    id /* block */ _onError;
    id /* block */ _onOpenComplete;
    id /* block */ _onSpaceAvailable;
    NSProgress *_progress;
    NSOutputStream *_stream;
}

@property (nonatomic, readonly) unsigned long long bytesThroughput;
@property (nonatomic) int compressionLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int inputBufferSize;
@property (getter=_internal, nonatomic, readonly) _SYStreamGuts *internal;
@property (nonatomic, copy) id /* block */ onBytesAvailable;
@property (nonatomic, copy) id /* block */ onClose;
@property (nonatomic, copy) id /* block */ onEndOfFile;
@property (nonatomic, copy) id /* block */ onError;
@property (nonatomic, copy) id /* block */ onOpenComplete;
@property (nonatomic, copy) id /* block */ onSpaceAvailable;
@property (nonatomic) unsigned int outputBufferSize;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)_dispatchMyEvent:(unsigned int)arg1;
- (int)_handlePendingInput;
- (id)_internal;
- (void)_postEventToDelegate:(unsigned int)arg1;
- (unsigned long long)bytesThroughput;
- (void)close;
- (int)compressionLevel;
- (void)dealloc;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToMemory;
- (id)initWithDestinationStream:(id)arg1;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (unsigned int)inputBufferSize;
- (id /* block */)onBytesAvailable;
- (id /* block */)onClose;
- (id /* block */)onEndOfFile;
- (id /* block */)onError;
- (id /* block */)onOpenComplete;
- (id /* block */)onSpaceAvailable;
- (void)open;
- (unsigned int)outputBufferSize;
- (id)progress;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setCompressionLevel:(int)arg1;
- (void)setInputBufferSize:(unsigned int)arg1;
- (void)setOnBytesAvailable:(id /* block */)arg1;
- (void)setOnClose:(id /* block */)arg1;
- (void)setOnEndOfFile:(id /* block */)arg1;
- (void)setOnError:(id /* block */)arg1;
- (void)setOnOpenComplete:(id /* block */)arg1;
- (void)setOnSpaceAvailable:(id /* block */)arg1;
- (void)setOutputBufferSize:(unsigned int)arg1;
- (void)setProgress:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end
