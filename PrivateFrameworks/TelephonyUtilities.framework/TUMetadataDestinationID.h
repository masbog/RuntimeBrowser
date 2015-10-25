/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMetadataDestinationID : NSObject {
    NSString *_cacheKey;
    NSString *_countryCode;
    NSString *_destinationID;
    struct __CFPhoneNumber { } *_phoneNumber;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *destinationID;
@property (nonatomic) struct __CFPhoneNumber { }*phoneNumber;

+ (id)destinationIDWithCall:(id)arg1;
+ (id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2;
+ (id)destinationIDWithRecentCall:(id)arg1;
+ (id)destinationIDWithVMVoicemail:(id)arg1;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)destinationID;
- (unsigned int)hash;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 countryCode:(id)arg2;
- (id)initWithRecentCall:(id)arg1;
- (id)initWithVMVoicemail:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct __CFPhoneNumber { }*)phoneNumber;
- (void)setCacheKey:(id)arg1;
- (void)setPhoneNumber:(struct __CFPhoneNumber { }*)arg1;

@end
