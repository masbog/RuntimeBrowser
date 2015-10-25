/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUPackageInputBundle : NSObject <SFUInputBundle> {
    NSString *_rootPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_existingPathForEntryName:(id)arg1 isGz:(BOOL*)arg2;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)dealloc;
- (BOOL)hasEntryWithName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;

@end
