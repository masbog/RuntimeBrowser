/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioAdAVItem : MPAVAdItem {
    RURadioAdTrack *_adTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
}

@property (nonatomic, retain) RadioStation *station;
@property (nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) NSString *stationName;
@property (nonatomic, readonly) NSString *stationStringID;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (id)adTrack;
- (id)album;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)initWithAdTrack:(id)arg1;
- (BOOL)isLikedStateEnabled;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mpuReporting_externalID;
- (unsigned int)mpuReporting_itemType;
- (BOOL)mpuReporting_shouldReportPlayEventsToStore;
- (void)reevaluateType;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;
- (BOOL)supportsLikedState;
- (BOOL)supportsSkip;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (BOOL)usesSubscriptionLease;

@end
