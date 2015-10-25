/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
    int mArrowShapeType;
    BOOL mCircularArrows;
    int mDiagramType;
    float mScale;
}

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })circumscribedBounds;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapTransitionArrowsAt:(id)arg1 index:(unsigned int)arg2 withState:(id)arg3;
- (void)mapTransitionPointAt:(id)arg1 index:(unsigned int)arg2 withState:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nodeBoundsWithIndex:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })nodeSize;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;

@end
