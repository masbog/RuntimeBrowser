/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) int downloadOverdue;
@property (nonatomic, readonly) double durationWatched;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) int mediaRequestsWWAN;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) int numberOfDroppedVideoFrames;
@property (nonatomic, readonly) int numberOfMediaRequests;
@property (nonatomic, readonly) int numberOfSegmentsDownloaded;
@property (nonatomic, readonly) int numberOfServerAddressChanges;
@property (nonatomic, readonly) int numberOfStalls;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) double observedBitrateStandardDeviation;
@property (nonatomic, readonly) double observedMaxBitrate;
@property (nonatomic, readonly) double observedMinBitrate;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) double playbackStartOffset;
@property (nonatomic, readonly) NSString *playbackType;
@property (nonatomic, readonly) double segmentsDownloadedDuration;
@property (nonatomic, readonly) NSString *serverAddress;
@property (nonatomic, readonly) double startupTime;
@property (nonatomic, readonly) double switchBitrate;
@property (nonatomic, readonly) double transferDuration;

- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentObservedBitrate;
- (void)dealloc;
- (int)downloadOverdue;
- (double)durationWatched;
- (int)entryReasonCode;
- (void)finalize;
- (double)indicatedBitrate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (int)mediaRequestsWWAN;
- (long long)numberOfBytesTransferred;
- (int)numberOfDroppedVideoFrames;
- (int)numberOfMediaRequests;
- (int)numberOfSegmentsDownloaded;
- (int)numberOfServerAddressChanges;
- (int)numberOfStalls;
- (double)observedBitrate;
- (double)observedBitrateStandardDeviation;
- (double)observedMaxBitrate;
- (double)observedMinBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (id)playbackType;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;
- (id)serviceIdentifier;
- (double)startupTime;
- (double)switchBitrate;
- (double)transferDuration;

@end
