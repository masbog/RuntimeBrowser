/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEmailKey : NSObject <SGEntityKey> {
    NSString *_messageId;
    NSString *_source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSString *source;
@property (readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (id)initWithMailMessageKey:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEmailKey:(id)arg1;
- (id)messageId;
- (id)messageURL;
- (id)serialize;
- (id)source;
- (id)toMailMessageKey;

@end
