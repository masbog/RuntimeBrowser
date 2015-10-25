/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecFrameSetAssetScale : TSDSpecStroke {
    double _assetScale;
}

+ (id)newFromArchive:(const struct SpecFrameSetAssetScaleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecFrameSetAssetScaleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg2 archiver:(id)arg3;

- (id)apply:(id)arg1;
- (BOOL)canApplyOnObject:(id)arg1;
- (id)frameModifiedFromFrame:(id)arg1;
- (id)initSpecFrameSetAssetScaleWithArchive:(const struct SpecFrameSetAssetScaleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCurrentProperty:(id)arg1;
- (id)operationPropertyName;
- (void)saveSpecFrameSetAssetScaleToArchive:(struct SpecFrameSetAssetScaleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 archiver:(id)arg2;

@end
