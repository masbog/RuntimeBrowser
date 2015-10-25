/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageTransformSequence : MPSImageTransform <NSCopying> {
    <MTLDevice> *_device;
}

@property (readonly) <MTLDevice> *device;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)device;
- (id)initWithConversionNodeList:(struct ConversionNode { int (**x1)(); long x2; struct ConversionNode {} *x3; unsigned char x4; unsigned char x5; unsigned char x6; }*)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 transformArray:(id)arg2;
- (id)initWithDevice:(id)arg1 transforms:(id*)arg2 count:(unsigned int)arg3;

@end
