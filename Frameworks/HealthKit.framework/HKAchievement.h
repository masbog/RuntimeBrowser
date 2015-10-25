/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAchievement : NSObject <HDCoding, NSSecureCoding> {
    NSUUID *_UUID;
    unsigned int _achievementType;
    NSDate *_completedDate;
    NSNumber *_value;
    BOOL _viewed;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic) unsigned int achievementType;
@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *extraData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;
@property (getter=isViewed, nonatomic) BOOL viewed;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_achievementStringFromType:(unsigned int)arg1;
+ (unsigned int)_achievementTypeFromString:(id)arg1;
+ (id)_achievementTypeNameMappings;
+ (id)_achievementWithUUID:(id)arg1 type:(unsigned int)arg2 completedDate:(id)arg3 value:(id)arg4 extraData:(id)arg5;
+ (id)_allAchievementTypeNames;
+ (Class)_classForAchievementType:(unsigned int)arg1;
+ (id)_nextUUID;
+ (BOOL)_requiresValueForAchievementType:(unsigned int)arg1;
+ (id)achievementWithAchievementType:(unsigned int)arg1 completedDate:(id)arg2 value:(id)arg3;
+ (id)achievementWithAchievementType:(unsigned int)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned int)arg4;
+ (void)setOverridenUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_achievementTypeString;
- (void)_decodeExtraDataWithCoder:(id)arg1;
- (void)_encodeExtraDataWithCoder:(id)arg1;
- (BOOL)_hasExtraData;
- (BOOL)_validateConfiguration;
- (unsigned int)achievementType;
- (id)completedDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extraData;
- (unsigned int)hash;
- (id)initWithAchievementType:(unsigned int)arg1 completedDate:(id)arg2 value:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isViewed;
- (void)setAchievementType:(unsigned int)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setExtraData:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setViewed:(BOOL)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (id)_fiui_assetNameForSizeClass:(int)arg1;
- (id)_fiui_baseAssetName;
- (id)fiui_badgeModelBaseAssetName;
- (id)fiui_badgePlistPath;
- (id)fiui_badgeTexturePath;
- (id)fiui_compressedBadgeModelPath;
- (id)fiui_imageForSizeClass:(int)arg1;
- (id)fiui_uncompressedBadgeModelPath;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;
- (BOOL)isEquivalentToAchievement:(id)arg1 inCalendar:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthKitExtensions.framework/HealthKitExtensions

- (id)_localizedDescriptionForCompleteNumberOfTimes:(int)arg1;
- (id)_localizedDescriptionForIncomplete;
- (id)_localizedShareDescriptionWithNumberOfTimesAchieved:(int)arg1;
- (id)localizedDescription;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(int)arg1;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(int)arg1;
- (id)localizedTitle;

@end
