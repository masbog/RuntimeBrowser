/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}

@property (nonatomic) double advanceIntervalForDelegateInvocation;
@property (nonatomic, readonly) <AVPlayerItemLegibleOutputPushDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (BOOL)_attachToPlayerItem:(id)arg1;
- (void)_collectUncollectables;
- (void)_detachFromPlayerItem;
- (id)_figLegibleOutputsDictionaryOptions;
- (void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_signalFlush;
- (double)advanceIntervalForDelegateInvocation;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)finalize;
- (id)init;
- (id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2;
- (id)initWithMediaSubtypesForNativeRepresentation:(id)arg1;
- (void)setAdvanceIntervalForDelegateInvocation:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (void)setTextStylingResolution:(id)arg1;
- (BOOL)suppressesPlayerRendering;
- (id)textStylingResolution;

@end
