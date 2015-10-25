/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPOrder : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL descending;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *mediaItemProperty;
@property (readonly) Class superclass;

+ (id)order;
+ (id)orderWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)descending;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItemProperty;
- (void)setDescending:(BOOL)arg1;
- (void)setMediaItemProperty:(id)arg1;

@end
