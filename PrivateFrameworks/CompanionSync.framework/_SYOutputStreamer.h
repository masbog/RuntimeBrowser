/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYOutputStreamer : NSObject <NSStreamDelegate> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasWrittenData;
    NSMutableArray *_items;
    id /* block */ _onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    SYCompressedFileOutputStream *_stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasWrittenData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeAllItemsWithError:(id)arg1;
- (void)_tryToSendData;
- (void)close;
- (BOOL)hasWrittenData;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)whenComplete:(id /* block */)arg1;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;

@end
