/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCDecoder : NSXPCCoder {
    int _allowedClassesIndex;
    /* Warning: unhandled array encoding: '[128@]' */ id _allowedClassesList;
    unsigned int _collectionPointer;
    struct { /* ? */ } *_collections;
    NSXPCConnection *_connection;
    void **_decoder;
    unsigned long long _genericIndex;
    NSXPCInterface *_interface;
    NSObject<OS_xpc_object> *_oolObjects;
    SEL _replyToSelector;
    struct { 
        unsigned int offset; 
        int type; 
    } _rootObject;
}

@property NSXPCConnection *_connection;
@property (retain) NSXPCInterface *interface;
@property SEL replyToSelector;

+ (id)_createXPCObjectWithData:(id)arg1;

- (id)_connection;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (const char *)_decodeCStringForKey:(id)arg1;
- (id)_initWithRootXPCObject:(id)arg1;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (id)decodeInvocation;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (void)finalize;
- (id)interface;
- (SEL)replyToSelector;
- (void)setInterface:(id)arg1;
- (void)setReplyToSelector:(SEL)arg1;
- (void)set_connection:(id)arg1;

@end
