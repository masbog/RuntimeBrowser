/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSImageScalingSpecification : NSObject {
    int _assetTypeFlags;
    float _maximumLongSideLength;
    float _minimumLongSideLength;
    float _nominalShortSideLength;
}

@property (nonatomic) int assetTypeFlags;
@property (nonatomic) float maximumLongSideLength;
@property (nonatomic) float minimumLongSideLength;
@property (nonatomic) float nominalShortSideLength;

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize { float x1; float x2; })arg1 toConformToSpecifications:(id)arg2;
+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;

- (int)assetTypeFlags;
- (id)description;
- (float)maximumLongSideLength;
- (float)minimumLongSideLength;
- (float)nominalShortSideLength;
- (float)scaleFactorForInputSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAssetTypeFlags:(int)arg1;
- (void)setMaximumLongSideLength:(float)arg1;
- (void)setMinimumLongSideLength:(float)arg1;
- (void)setNominalShortSideLength:(float)arg1;

@end
