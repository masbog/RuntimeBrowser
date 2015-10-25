/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemMoveOperation : NSOperation {
    id _delegate;
    NSString *_destinationPath;
    NSError *_error;
    NSString *_sourcePath;
}

+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)_setError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (void)main;
- (void)setDelegate:(id)arg1;

@end
