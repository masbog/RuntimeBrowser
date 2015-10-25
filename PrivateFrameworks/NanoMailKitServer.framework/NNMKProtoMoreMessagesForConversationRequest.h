/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying> {
    NSData *_beforeDateReceived;
    NSString *_conversationId;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
}

@property (nonatomic, retain) NSData *beforeDateReceived;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) BOOL hasBeforeDateReceived;
@property (nonatomic, readonly) BOOL hasConversationId;
@property (nonatomic) BOOL hasFullSyncVersion;

- (void).cxx_destruct;
- (id)beforeDateReceived;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasBeforeDateReceived;
- (BOOL)hasConversationId;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBeforeDateReceived:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
