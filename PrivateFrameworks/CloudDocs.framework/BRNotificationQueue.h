/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    unsigned int _dequeued;
    NSMutableDictionary *_index;
}

@property (nonatomic, readonly) unsigned int count;

- (void)_filterIndex:(id)arg1;
- (void)addDequeueCallback:(id /* block */)arg1;
- (void)addNotification:(id)arg1 asDead:(BOOL)arg2;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)dequeue:(unsigned int)arg1 block:(id /* block */)arg2;
- (id)description;
- (id)init;
- (void)processDequeueCallbacks;
- (void)removeAllObjects;

@end
