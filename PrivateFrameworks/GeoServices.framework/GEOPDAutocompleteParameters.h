/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying> {
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    struct { 
        unsigned int requestType : 1; 
    } _has;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    int _requestType;
}

@property (nonatomic, retain) GEOPDAutocompleteParametersAllEntries *allEntries;
@property (nonatomic, retain) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse;
@property (nonatomic, retain) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries;
@property (nonatomic, readonly) BOOL hasAllEntries;
@property (nonatomic, readonly) BOOL hasAllEntriesWithBrowse;
@property (nonatomic, readonly) BOOL hasFullEntries;
@property (nonatomic, readonly) BOOL hasLocalitiesAndLandmarks;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic, retain) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks;
@property (nonatomic) int requestType;

- (id)allEntries;
- (id)allEntriesWithBrowse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullEntries;
- (BOOL)hasAllEntries;
- (BOOL)hasAllEntriesWithBrowse;
- (BOOL)hasFullEntries;
- (BOOL)hasLocalitiesAndLandmarks;
- (BOOL)hasRequestType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localitiesAndLandmarks;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (void)setAllEntries:(id)arg1;
- (void)setAllEntriesWithBrowse:(id)arg1;
- (void)setFullEntries:(id)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setLocalitiesAndLandmarks:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
