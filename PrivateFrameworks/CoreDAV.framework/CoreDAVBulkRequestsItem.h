/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
    CoreDAVLeafItem *_maxResourcesItem;
    CoreDAVLeafItem *_maxSizeItem;
    NSMutableSet *_supportedItems;
}

@property (nonatomic, readonly) NSDictionary *dictRepresentation;
@property (nonatomic, readonly) int maxResources;
@property (nonatomic, retain) CoreDAVLeafItem *maxResourcesItem;
@property (nonatomic, readonly) int maxSize;
@property (nonatomic, retain) CoreDAVLeafItem *maxSizeItem;
@property (nonatomic, readonly) NSSet *supportedItems;
@property (nonatomic, readonly) BOOL supportsDelete;
@property (nonatomic, readonly) BOOL supportsInsert;
@property (nonatomic, readonly) BOOL supportsUpdate;

+ (id)copyParseRules;

- (void)addSupportedItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictRepresentation;
- (id)init;
- (int)maxResources;
- (id)maxResourcesItem;
- (int)maxSize;
- (id)maxSizeItem;
- (void)setMaxResourcesItem:(id)arg1;
- (void)setMaxSizeItem:(id)arg1;
- (id)supportedItems;
- (BOOL)supportsDelete;
- (BOOL)supportsInsert;
- (BOOL)supportsItemWithNameSpace:(id)arg1 name:(id)arg2;
- (BOOL)supportsUpdate;

@end
