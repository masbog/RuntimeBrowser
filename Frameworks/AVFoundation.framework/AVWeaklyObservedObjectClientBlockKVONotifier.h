/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier> {
    id /* block */ _block;
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSString *_keyPath;
    NSObject *_observer;
    unsigned int _options;
    NSObject<AVWeakObservable> *_unsafeUnretainedObject;
    AVWeakReference *_weakReferenceToObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)cancelCallbacks;
- (void)dealloc;
- (void)finalize;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned int)arg5 block:(id /* block */)arg6;
- (void)start;

@end
