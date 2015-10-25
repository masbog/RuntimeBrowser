/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRLanguageOption : NSObject <NSSecureCoding> {
    struct __CFAllocator { } *_allocator;
    NSString *_displayName;
    NSString *_identifier;
    NSArray *_languageOptionCharacteristics;
    unsigned int _languageOptionType;
    NSString *_languageTag;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *languageOptionCharacteristics;
@property (nonatomic, readonly) unsigned int languageOptionType;
@property (nonatomic, readonly) NSString *languageTag;

+ (id)allocWithAllocator:(const struct __CFAllocator { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;
- (id)languageOptionCharacteristics;
- (unsigned int)languageOptionType;
- (id)languageTag;

@end
