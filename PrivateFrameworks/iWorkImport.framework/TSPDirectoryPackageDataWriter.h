/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter> {
    NSURL *_URL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;
- (struct CGDataConsumer { }*)newCGDataConsumerAtRelativePath:(id)arg1;
- (id)targetDataURLForPath:(id)arg1;
- (BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id*)arg4;

@end
