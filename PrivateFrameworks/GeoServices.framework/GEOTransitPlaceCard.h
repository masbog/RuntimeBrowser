/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {
    struct { 
        unsigned int transitCategory : 1; 
    } _has;
    NSString *_incidentType;
    int _transitCategory;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
}

@property (nonatomic, readonly) BOOL hasIncidentType;
@property (nonatomic) BOOL hasTransitCategory;
@property (nonatomic, readonly) BOOL hasTransitDepartureSequenceUsage;
@property (nonatomic, readonly) BOOL hasTransitSystemName;
@property (nonatomic, retain) NSString *incidentType;
@property (nonatomic) int transitCategory;
@property (nonatomic, retain) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (nonatomic, retain) NSString *transitSystemName;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIncidentType;
- (BOOL)hasTransitCategory;
- (BOOL)hasTransitDepartureSequenceUsage;
- (BOOL)hasTransitSystemName;
- (unsigned int)hash;
- (id)incidentType;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTransitCategory:(BOOL)arg1;
- (void)setIncidentType:(id)arg1;
- (void)setTransitCategory:(int)arg1;
- (void)setTransitDepartureSequenceUsage:(id)arg1;
- (void)setTransitSystemName:(id)arg1;
- (int)transitCategory;
- (id)transitDepartureSequenceUsage;
- (id)transitSystemName;
- (void)writeTo:(id)arg1;

@end
