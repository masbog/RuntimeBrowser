/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalCertificateResponse : PBCodable <NSCopying> {
    NSData *_certificate;
}

@property (nonatomic, retain) NSData *certificate;
@property (nonatomic, readonly) BOOL hasCertificate;

- (void).cxx_destruct;
- (id)certificate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCertificate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCertificate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
