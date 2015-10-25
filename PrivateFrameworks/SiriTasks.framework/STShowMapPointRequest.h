/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowMapPointRequest : AFSiriRequest {
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
    BOOL _isCurrentLocation;
    NSData *_placeData;
}

@property (nonatomic) BOOL isCurrentLocation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentLocation;
- (id)mapPointData;
- (void)setIsCurrentLocation:(BOOL)arg1;

@end
