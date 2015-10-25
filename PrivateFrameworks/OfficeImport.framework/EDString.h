/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDString : NSObject <EDImmutableObject, NSCopying> {
    bool mDoNotModify;
    EDPhoneticInfo *mPhoneticInfo;
    EDRunsCollection *mRuns;
    NSString *mString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)edStringWithString:(id)arg1;
+ (id)edStringWithString:(id)arg1 runs:(id)arg2;
+ (id)string;

- (void)appendString:(id)arg1;
- (bool)areThereRuns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstRunEffects;
- (id)firstRunFont;
- (unsigned int)hash;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 runs:(id)arg2;
- (bool)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEDString:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (id)phoneticInfo;
- (void)prependString:(id)arg1;
- (void)removeCharacterAtIndex:(unsigned int)arg1;
- (void)removeCharactersInSet:(id)arg1;
- (id)runs;
- (void)setDoNotModify:(bool)arg1;
- (void)setPhoneticInfo:(id)arg1;
- (void)setRuns:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end