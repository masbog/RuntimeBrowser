/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    unsigned long long _bounceNo;
    NSData *_encryptedBasename;
    NSString *_etag;
    NSString *_extension;
    struct { 
        unsigned int bounceNo : 1; 
    } _has;
    NSString *_recordID;
    NSData *_recordProtectionInfo;
    NSString *_zoneName;
    NSData *_zoneProtectionInfo;
}

@property (nonatomic) unsigned long long bounceNo;
@property (nonatomic, retain) NSData *encryptedBasename;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *extension;
@property (nonatomic) BOOL hasBounceNo;
@property (nonatomic, readonly) BOOL hasEncryptedBasename;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic, readonly) BOOL hasExtension;
@property (nonatomic, readonly) BOOL hasRecordID;
@property (nonatomic, readonly) BOOL hasRecordProtectionInfo;
@property (nonatomic, readonly) BOOL hasZoneName;
@property (nonatomic, readonly) BOOL hasZoneProtectionInfo;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSData *recordProtectionInfo;
@property (nonatomic, retain) NSString *zoneName;
@property (nonatomic, retain) NSData *zoneProtectionInfo;

- (unsigned long long)bounceNo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedBasename;
- (id)etag;
- (id)extension;
- (BOOL)hasBounceNo;
- (BOOL)hasEncryptedBasename;
- (BOOL)hasEtag;
- (BOOL)hasExtension;
- (BOOL)hasRecordID;
- (BOOL)hasRecordProtectionInfo;
- (BOOL)hasZoneName;
- (BOOL)hasZoneProtectionInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordID;
- (id)recordProtectionInfo;
- (void)setBounceNo:(unsigned long long)arg1;
- (void)setEncryptedBasename:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setHasBounceNo:(BOOL)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)setZoneProtectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneName;
- (id)zoneProtectionInfo;

@end
