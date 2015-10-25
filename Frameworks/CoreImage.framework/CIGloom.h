/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGloom : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputIntensity;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
