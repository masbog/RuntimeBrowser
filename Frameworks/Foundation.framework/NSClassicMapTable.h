/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSClassicMapTable : NSMapTable {
    struct __CFBasicHash { } *_ht;
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
        void *notAKeyMarker; 
    } _keyCallBacks;
    struct { 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _valueCallBacks;
}

- (id)allKeys;
- (id)allValues;
- (id)copy;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (unsigned int)getKeys:(const void**)arg1 values:(const void**)arg2;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (id)objectForKey:(id)arg1;
- (void)removeAllItems;
- (void)removeObjectForKey:(id)arg1;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
