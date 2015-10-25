/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRegistrationDataRequest : PBRequest <NSCopying> {
    NSString *_authToken;
}

@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, readonly) BOOL hasAuthToken;

- (void).cxx_destruct;
- (id)authToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAuthToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
