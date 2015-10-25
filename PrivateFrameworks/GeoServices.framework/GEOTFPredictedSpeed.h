/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {
    unsigned int _deltaMinutesInFuture;
    float _deltaSpeed;
    struct { 
        unsigned int deltaMinutesInFuture : 1; 
        unsigned int deltaSpeed : 1; 
    } _has;
}

@property (nonatomic) unsigned int deltaMinutesInFuture;
@property (nonatomic) float deltaSpeed;
@property (nonatomic) BOOL hasDeltaMinutesInFuture;
@property (nonatomic) BOOL hasDeltaSpeed;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deltaMinutesInFuture;
- (float)deltaSpeed;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDeltaMinutesInFuture;
- (BOOL)hasDeltaSpeed;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeltaMinutesInFuture:(unsigned int)arg1;
- (void)setDeltaSpeed:(float)arg1;
- (void)setHasDeltaMinutesInFuture:(BOOL)arg1;
- (void)setHasDeltaSpeed:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
