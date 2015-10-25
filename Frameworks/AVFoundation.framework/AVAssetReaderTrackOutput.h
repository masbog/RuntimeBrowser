/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (getter=_isAttachedToMetadataAdaptor, nonatomic, readonly) BOOL attachedToMetadataAdaptor;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) AVAssetTrack *track;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;

- (id)_asset;
- (void)_attachToMetadataAdaptor:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)_copyNextSampleBufferForMetadataAdaptor;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (id)_figAssetReaderExtractionOptions;
- (BOOL)_isAttachedToMetadataAdaptor;
- (BOOL)_trimsSampleDurations;
- (BOOL)appliesPreferredTrackTransform;
- (id)audioTimePitchAlgorithm;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)mediaType;
- (id)outputSettings;
- (void)setAppliesPreferredTrackTransform:(BOOL)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)track;

@end