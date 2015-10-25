/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMapNode : NSObject {
    NSString *_entityName;
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    unsigned int _version;
}

+ (void)initialize;

- (id)_relatedNodes;
- (void)_setMap:(id)arg1;
- (void)_setVersionNumber:(unsigned int)arg1;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)configurationName;
- (void)dealloc;
- (id)destinationsForRelationship:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (const id*)knownKeyValuesPointer;
- (id)objectID;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;

@end