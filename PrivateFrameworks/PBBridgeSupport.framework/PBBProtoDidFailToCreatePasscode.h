/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoDidFailToCreatePasscode : PBCodable <NSCopying> {
    int _error;
    struct { 
        unsigned int error : 1; 
    } _has;
}

@property (nonatomic) int error;
@property (nonatomic) BOOL hasError;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)error;
- (BOOL)hasError;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setError:(int)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
