/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveResponse : PBCodable <NSCopying> {
    BOOL _clientVersionETagMatch;
    struct { 
        unsigned int clientVersionETagMatch : 1; 
    } _has;
    CKDPRecord *_record;
}

@property (nonatomic) BOOL clientVersionETagMatch;
@property (nonatomic) BOOL hasClientVersionETagMatch;
@property (nonatomic, readonly) BOOL hasRecord;
@property (nonatomic, retain) CKDPRecord *record;

- (void).cxx_destruct;
- (BOOL)clientVersionETagMatch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasClientVersionETagMatch;
- (BOOL)hasRecord;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)record;
- (void)setClientVersionETagMatch:(BOOL)arg1;
- (void)setHasClientVersionETagMatch:(BOOL)arg1;
- (void)setRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
