/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrack : AVAssetTrack {
    AVCompositionTrackInternal *_priv;
}

@property (nonatomic, readonly, copy) NSArray *segments;

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)segments;

@end