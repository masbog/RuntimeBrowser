/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLLightProbe : MDLLight {
    MDLTexture *_irradianceTexture;
    MDLTexture *_reflectiveTexture;
    NSMutableData *_sphericalHarmonicsCoefficients;
    unsigned int _sphericalHarmonicsLevel;
    <MDLTransformComponent> *_transform;
}

@property (nonatomic, readonly, retain) MDLTexture *irradianceTexture;
@property (nonatomic, readonly, retain) MDLTexture *reflectiveTexture;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) unsigned int sphericalHarmonicsLevel;

+ (id)lightProbeWithTextureSize:(int)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6;

- (void).cxx_destruct;
- (struct CGColor { }*)evaluatedColorFromVector;
- (void)generateIrradianceTextureFromReflective;
- (void)generateSphericalHarmonicsFromIrradiance:(unsigned int)arg1;
- (id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2;
- (id)irradianceTexture;
- (id)reflectiveTexture;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)sphericalHarmonicsCoefficients;
- (unsigned int)sphericalHarmonicsLevel;
- (id)transform;

@end
