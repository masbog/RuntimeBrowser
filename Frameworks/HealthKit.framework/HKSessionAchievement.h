/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSessionAchievement : HKAchievement {
    unsigned int _activityType;
}

@property (nonatomic, readonly) unsigned int activityType;

+ (BOOL)supportsSecureCoding;

- (void)_decodeExtraDataWithCoder:(id)arg1;
- (void)_encodeExtraDataWithCoder:(id)arg1;
- (BOOL)_hasExtraData;
- (BOOL)_validateConfiguration;
- (unsigned int)activityType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithAchievementType:(unsigned int)arg1 completedDate:(id)arg2 value:(id)arg3 activityType:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
