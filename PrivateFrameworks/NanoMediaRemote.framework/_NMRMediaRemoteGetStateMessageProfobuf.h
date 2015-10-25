/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {
    NSData *_applicationInfoDigest;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    } _has;
    NSData *_knownDigest;
    NSData *_nowPlayingInfoDigest;
    int _state;
    NSData *_supportedCommandsDigest;
    double _timestamp;
}

@property (nonatomic, retain) NSData *applicationInfoDigest;
@property (nonatomic, readonly) BOOL hasApplicationInfoDigest;
@property (nonatomic, readonly) BOOL hasKnownDigest;
@property (nonatomic, readonly) BOOL hasNowPlayingInfoDigest;
@property (nonatomic) BOOL hasState;
@property (nonatomic, readonly) BOOL hasSupportedCommandsDigest;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSData *knownDigest;
@property (nonatomic, retain) NSData *nowPlayingInfoDigest;
@property (nonatomic) int state;
@property (nonatomic, retain) NSData *supportedCommandsDigest;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)applicationInfoDigest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasApplicationInfoDigest;
- (BOOL)hasKnownDigest;
- (BOOL)hasNowPlayingInfoDigest;
- (BOOL)hasState;
- (BOOL)hasSupportedCommandsDigest;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)knownDigest;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfoDigest;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationInfoDigest:(id)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setKnownDigest:(id)arg1;
- (void)setNowPlayingInfoDigest:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportedCommandsDigest:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (int)state;
- (id)supportedCommandsDigest;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
