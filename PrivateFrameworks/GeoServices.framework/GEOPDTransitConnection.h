/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitConnection : PBCodable <NSCopying> {
    NSString *_entityNameString;
    struct { 
        unsigned int muid : 1; 
    } _has;
    unsigned long long _muid;
    NSMutableArray *_transitLabels;
}

@property (nonatomic, retain) NSString *entityNameString;
@property (nonatomic, readonly) BOOL hasEntityNameString;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSMutableArray *transitLabels;

- (void)addTransitLabel:(id)arg1;
- (void)clearTransitLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityNameString;
- (BOOL)hasEntityNameString;
- (BOOL)hasMuid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (BOOL)readFrom:(id)arg1;
- (void)setEntityNameString:(id)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setTransitLabels:(id)arg1;
- (id)transitLabelAtIndex:(unsigned int)arg1;
- (id)transitLabels;
- (unsigned int)transitLabelsCount;
- (void)writeTo:(id)arg1;

@end
