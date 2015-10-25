/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKTable : NSObject {
    unsigned long _count;
    struct _gktableitem { unsigned int x1; id x2; double x3; } *_items;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    unsigned long _size;
}

@property (readonly) unsigned long count;

- (id)allObjects;
- (unsigned long)count;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(unsigned long)arg1;
- (void)lock;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)objectForKey:(unsigned int)arg1;
- (void)print;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (void)touchObject:(id)arg1;
- (void)touchObjectForKey:(unsigned int)arg1;
- (void)unlock;

@end