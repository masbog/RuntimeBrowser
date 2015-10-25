/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {
    unsigned int _hash;
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
}

@property (nonatomic, readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int length;

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;

- (void)_updateHash;
- (id)allPeerIDs;
- (BOOL)canMergeWithKnowledgeVector:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)conflictsWithKnowledgeVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (id)createStoreKnowledgeVectorDictionary;
- (void)dealloc;
- (void)decrementToMinimumWithKnowledgeVector:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasPeerIDInCommonWith:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned int)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (BOOL)isAncestorOfKnowledgeVector:(id)arg1;
- (BOOL)isDescendantOfKnowledgeVector:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isZeroVector;
- (unsigned int)length;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)transactionNumberForPeerID:(id)arg1;
- (void)updateWithKnowledgeVector:(id)arg1;

@end