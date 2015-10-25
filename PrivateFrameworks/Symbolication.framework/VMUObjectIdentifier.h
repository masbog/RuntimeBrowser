/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectIdentifier : NSObject {
    unsigned int _cfClassCount;
    unsigned long _coreFoundationCFTypeIsa;
    unsigned long _foundationCFTypeIsa;
    NSMapTable *_isaToObjectLabelHandlerMap;
    id /* block */ _isaTranslator;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id /* block */ _memoryReader;
    unsigned int *_nonPointerIndexMapping;
    NSMutableDictionary *_nonobjectClassInfosDict;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    VMUClassInfoMap *_realizedIsaToClassInfo;
    void *_remoteObjectBuffer;
    unsigned long _remoteObjectBufferSize;
    struct VMULabelUniquingDataForStringType { id x1; } *_stringToLabelStringUniquingData;
    NSMutableSet *_stringUniquingSet;
    unsigned int _swiftClassCount;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    unsigned int _task;
    VMUClassInfoMap *_unrealizedClassInfos;
}

@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;

- (unsigned int)CFTypeCount;
- (unsigned int)ObjCclassCount;
- (unsigned int)SwiftClassCount;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (id)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)classInfoForCFType:(struct __CFRuntimeBase { unsigned int x1; unsigned char x2[4]; }*)arg1;
- (id)classInfoForIsaPointer:(unsigned int)arg1;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned int)arg2;
- (id)classInfoForNonobjectMemory:(void*)arg1 length:(unsigned int)arg2;
- (id)classInfoForObject:(unsigned long long)arg1;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
- (id)labelForItemCount:(long)arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 usingHandlerBlock:(id /* block */)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned int)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned int)arg2 usingHandlerBlock:(id /* block */)arg3;
- (id)labelForNSArray:(id)arg1;
- (id)labelForNSCFDictionary:(id)arg1;
- (id)labelForNSCFSet:(id)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned int)arg1 printDetail:(BOOL)arg2;
- (id)labelForNSConcreteAttributedString:(id)arg1;
- (id)labelForNSConcreteData:(id)arg1;
- (id)labelForNSConcreteHashTable:(id)arg1;
- (id)labelForNSConcreteMutableData:(id)arg1;
- (id)labelForNSData:(id)arg1;
- (id)labelForNSDate:(id)arg1;
- (id)labelForNSDictionary:(id)arg1;
- (id)labelForNSInlineData:(id)arg1;
- (id)labelForNSNumber:(id)arg1;
- (id)labelForNSPathStore2:(id)arg1;
- (id)labelForNSSet:(id)arg1;
- (id)labelForNSString:(id)arg1;
- (id)labelForNSString:(id)arg1 mappedSize:(unsigned int)arg2 remoteAddress:(unsigned int)arg3 printDetail:(BOOL)arg4;
- (id)labelForNSURL:(id)arg1;
- (id)labelForOSTransaction:(id)arg1;
- (id)nullClassInfo;
- (id)objcRuntimeMallocBlocksHash;
- (id)objectLabelHandlerForRemoteIsa:(unsigned int)arg1;
- (id)osMajorMinorVersionString;
- (id)realizedClasses;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(BOOL)arg3;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;

@end