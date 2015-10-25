/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterHelper : NSObject {
    AVAssetWriterConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriter;
}

@property (nonatomic, readonly) NSArray *availableMediaTypes;
@property (nonatomic, readonly) AVAssetWriterConfigurationState *configurationState;
@property (nonatomic, copy) NSURL *directoryForTemporaryFiles;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *inputGroups;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) AVMediaFileType *mediaFileType;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic) int movieTimeScale;
@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } overallDurationHint;
@property (nonatomic) float preferredRate;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (nonatomic, readonly) int status;
@property (retain) AVWeakReference *weakReferenceToAssetWriter;

- (BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription { }*)arg3 exceptionReason:(id*)arg4;
- (BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)_transitionToClientInitiatedTerminalStatus:(int)arg1;
- (void)addInput:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (id)availableMediaTypes;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (void)cancelWriting;
- (id)configurationState;
- (void)dealloc;
- (id)directoryForTemporaryFiles;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)error;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConfigurationState:(id)arg1;
- (id)inputGroups;
- (id)inputs;
- (id)mediaFileType;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (id)outputURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setOverallDurationHint:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)setWeakReferenceToAssetWriter:(id)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startWriting;
- (int)status;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (id)weakReferenceToAssetWriter;

@end