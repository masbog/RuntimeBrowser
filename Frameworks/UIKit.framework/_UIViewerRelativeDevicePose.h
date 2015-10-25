/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewerRelativeDevicePose : NSObject <NSCoding, NSCopying> {
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    float _planarRotationAngle;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _viewerOffset;
}

@property (nonatomic) float planarRotationAngle;
@property (nonatomic) struct UIOffset { float x1; float x2; } viewerOffset;

- (void).cxx_destruct;
- (struct UIOffset { float x1; float x2; })_acceleratedOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg1 accelerationBoostFactor:(struct CGPoint { float x1; float x2; })arg2;
- (id)_acceleratedOutputRange;
- (void)_reset;
- (void)_setAcceleration:(struct CGPoint { float x1; float x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)planarRotationAngle;
- (void)setPlanarRotationAngle:(float)arg1;
- (void)setViewerOffset:(struct UIOffset { float x1; float x2; })arg1;
- (struct UIOffset { float x1; float x2; })viewerOffset;

@end
