/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUViewControllerContext : NSObject <NSCoding> {
    NSMutableDictionary *_metadata;
    NSString *_sectionIdentifier;
    int _type;
}

@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic) int type;

- (int)_typeForTypeString:(id)arg1;
- (id)_typeStringForType:(int)arg1;
- (id)copyViewController;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sectionIdentifier;
- (void)setSectionIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (int)type;
- (id)valueForMetadataKey:(id)arg1;

@end