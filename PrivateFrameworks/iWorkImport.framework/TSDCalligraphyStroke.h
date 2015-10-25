/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCalligraphyStroke : TSDSmartStroke

+ (Class)mutableClass;

- (float)angle;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (BOOL)canApplyToCAShapeLayer;
- (BOOL)chisel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)drawsInOneStep;
- (BOOL)drawsOutsideStrokeBounds;
- (float)horizontalMarginForSwatch;
- (id)initWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(float)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(float)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(float)arg7;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(BOOL)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(BOOL)arg4;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (float)scale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInContext:(struct CGContext { }*)arg1;

@end
