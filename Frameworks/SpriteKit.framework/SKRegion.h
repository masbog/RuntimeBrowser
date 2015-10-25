/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRegion : NSObject <NSCoding, NSCopying> {
    PKRegion *_region;
}

@property (nonatomic, readonly) const struct CGPath { }*path;

+ (id)infiniteRegion;

- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)containsPoints:(const float*)arg1 locationStride:(int)arg2 results:(char *)arg3 resultsStride:(int)arg4 count:(int)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1;
- (id)initWithRadius:(float)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)inverseRegion;
- (const struct CGPath { }*)path;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;

@end
