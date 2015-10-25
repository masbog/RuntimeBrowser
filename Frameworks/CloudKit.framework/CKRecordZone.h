/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZone : NSObject <NSCopying, NSSecureCoding> {
    long long _assetQuotaUsage;
    unsigned int _capabilities;
    NSData *_clientChangeToken;
    CKContainerID *_containerID;
    NSData *_currentServerContinuationToken;
    int _deviceCount;
    long long _metadataQuotaUsage;
    NSString *_previousProtectionEtag;
    NSData *_protectionData;
    NSString *_protectionEtag;
    CKRecordZoneID *_zoneID;
}

@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, retain) NSData *currentServerContinuationToken;
@property (nonatomic) int deviceCount;
@property (nonatomic) long long metadataQuotaUsage;
@property (nonatomic, retain) NSString *previousProtectionEtag;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, retain) NSString *protectionEtag;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (id)defaultRecordZone;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned int)arg2;
- (long long)assetQuotaUsage;
- (unsigned int)capabilities;
- (id)clientChangeToken;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentServerContinuationToken;
- (id)description;
- (int)deviceCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (long long)metadataQuotaUsage;
- (id)previousProtectionEtag;
- (id)protectionData;
- (id)protectionEtag;
- (void)setAssetQuotaUsage:(long long)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCurrentServerContinuationToken:(id)arg1;
- (void)setDeviceCount:(int)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)zoneID;

@end