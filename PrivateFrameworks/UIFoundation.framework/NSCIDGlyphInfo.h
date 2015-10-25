/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    unsigned short _cid;
    unsigned int _collection;
}

+ (id)glyphInfoWithCharacterIdentifier:(unsigned int)arg1 collection:(unsigned int)arg2 baseString:(id)arg3;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (unsigned int)characterCollection;
- (unsigned int)characterIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacterIdentifier:(unsigned int)arg1 collection:(unsigned int)arg2 baseString:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
