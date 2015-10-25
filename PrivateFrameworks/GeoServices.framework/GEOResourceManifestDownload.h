/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {
    GEODownloadMetadata *_metadata;
    GEOResources *_resources;
}

@property (nonatomic, readonly) BOOL hasResources;
@property (nonatomic, retain) GEODownloadMetadata *metadata;
@property (nonatomic, retain) GEOResources *resources;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasResources;
- (unsigned int)hash;
- (id)initWithResourceManifestData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (BOOL)readFrom:(id)arg1;
- (id)resources;
- (void)setMetadata:(id)arg1;
- (void)setResources:(id)arg1;
- (void)writeTo:(id)arg1;

@end
