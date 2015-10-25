/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBHandleAcknowledgeActionRequest : PBRequest <NSCopying> {
    BLTPBActionInformation *_actionInfo;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property (nonatomic, retain) BLTPBActionInformation *actionInfo;
@property (nonatomic, readonly) BOOL hasActionInfo;
@property (nonatomic, readonly) BOOL hasPublisherBulletinID;
@property (nonatomic, readonly) BOOL hasRecordID;
@property (nonatomic, readonly) BOOL hasSectionID;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *sectionID;

- (void).cxx_destruct;
- (id)actionInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActionInfo;
- (BOOL)hasPublisherBulletinID;
- (BOOL)hasRecordID;
- (BOOL)hasSectionID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (BOOL)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionID;
- (void)setActionInfo:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
