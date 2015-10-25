/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible> {
    NSString *_assetUUID;
    int _captureOrientation;
    NSDate *_creationDate;
    void *_previewImageSurface;
    unsigned short _sessionIdentifier;
    BOOL _usingFrontCamera;
    struct CGSize { 
        float width; 
        float height; 
    } _videoDimensions;
}

@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) int captureOrientation;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) BOOL expectingPairedVideo;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) void*previewImageSurface;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (getter=isUsingFrontCamera, nonatomic, readonly) BOOL usingFrontCamera;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } videoDimensions;

- (void).cxx_destruct;
- (id)assetUUID;
- (id)burstIdentifier;
- (id)captureDate;
- (int)captureOrientation;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)init;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(int)arg4 usingFrontCamera:(BOOL)arg5 videoDimensions:(struct CGSize { float x1; float x2; })arg6 previewImageSurface:(void*)arg7;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (BOOL)isExpectingPairedVideo;
- (BOOL)isUsingFrontCamera;
- (unsigned int)mediaType;
- (unsigned int)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)placeholderImage;
- (void*)previewImageSurface;
- (unsigned short)sessionIdentifier;
- (id)stillImageMetadata;
- (id)uuid;
- (struct CGSize { float x1; float x2; })videoDimensions;

@end
