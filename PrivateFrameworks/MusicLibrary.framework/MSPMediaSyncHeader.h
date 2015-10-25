/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncHeader : PBCodable <NSCopying> {
    struct { 
        unsigned int syncType : 1; 
        unsigned int totalPackages : 1; 
    } _has;
    int _syncType;
    int _totalPackages;
}

@property (nonatomic) BOOL hasSyncType;
@property (nonatomic) BOOL hasTotalPackages;
@property (nonatomic) int syncType;
@property (nonatomic) int totalPackages;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSyncType;
- (BOOL)hasTotalPackages;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSyncType:(BOOL)arg1;
- (void)setHasTotalPackages:(BOOL)arg1;
- (void)setSyncType:(int)arg1;
- (void)setTotalPackages:(int)arg1;
- (int)syncType;
- (int)totalPackages;
- (void)writeTo:(id)arg1;

@end
