/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkRepresentationCacheKey : NSObject <NSCopying> {
    id _entityIdentifier;
    id _namespaceIdentifier;
    unsigned int _numberOfColumns;
    unsigned int _numberOfRows;
    id _revisionIdentifier;
    struct CGSize { 
        float width; 
        float height; 
    } _scaledFittingSize;
    float _tileSpacing;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isEqual:(id)arg1;

@end
