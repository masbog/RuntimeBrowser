/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMeshBufferAllocatorDefault : NSObject <MDLMeshBufferAllocator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)newBuffer:(unsigned int)arg1 type:(unsigned int)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned int)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned int)arg2 type:(unsigned int)arg3;
- (id)newBufferWithData:(id)arg1 type:(unsigned int)arg2;
- (id)newZone:(unsigned int)arg1;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;

@end
