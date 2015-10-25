/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    void *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)gzipExtension;

- (BOOL)canCreateInputStream;
- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (long long)offset;
- (id)path;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
