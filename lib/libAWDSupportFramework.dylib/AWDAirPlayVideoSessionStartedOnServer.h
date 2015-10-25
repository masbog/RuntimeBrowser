/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned int _audioOnly;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    unsigned int _clientInfoMs;
    NSString *_clientModel;
    unsigned int _clientPostAuthMs;
    unsigned int _clientSecureConnectionMs;
    NSString *_clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int clientAuthMs : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientInfoMs : 1; 
        unsigned int clientPostAuthMs : 1; 
        unsigned int clientSecureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    } _has;
    NSString *_sessionUUID;
    int _status;
    unsigned long long _timestamp;
    unsigned int _transportType;
    unsigned int _type;
}

@property (nonatomic) unsigned int audioOnly;
@property (nonatomic) unsigned int clientAuthMs;
@property (nonatomic) unsigned int clientBonjourMs;
@property (nonatomic) unsigned int clientConnectMs;
@property (nonatomic) unsigned int clientInfoMs;
@property (nonatomic, retain) NSString *clientModel;
@property (nonatomic) unsigned int clientPostAuthMs;
@property (nonatomic) unsigned int clientSecureConnectionMs;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic) BOOL hasAudioOnly;
@property (nonatomic) BOOL hasClientAuthMs;
@property (nonatomic) BOOL hasClientBonjourMs;
@property (nonatomic) BOOL hasClientConnectMs;
@property (nonatomic) BOOL hasClientInfoMs;
@property (nonatomic, readonly) BOOL hasClientModel;
@property (nonatomic) BOOL hasClientPostAuthMs;
@property (nonatomic) BOOL hasClientSecureConnectionMs;
@property (nonatomic, readonly) BOOL hasClientVersion;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) unsigned int type;

- (unsigned int)audioOnly;
- (unsigned int)clientAuthMs;
- (unsigned int)clientBonjourMs;
- (unsigned int)clientConnectMs;
- (unsigned int)clientInfoMs;
- (id)clientModel;
- (unsigned int)clientPostAuthMs;
- (unsigned int)clientSecureConnectionMs;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioOnly;
- (BOOL)hasClientAuthMs;
- (BOOL)hasClientBonjourMs;
- (BOOL)hasClientConnectMs;
- (BOOL)hasClientInfoMs;
- (BOOL)hasClientModel;
- (BOOL)hasClientPostAuthMs;
- (BOOL)hasClientSecureConnectionMs;
- (BOOL)hasClientVersion;
- (BOOL)hasSessionUUID;
- (BOOL)hasStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAudioOnly:(unsigned int)arg1;
- (void)setClientAuthMs:(unsigned int)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (void)setClientInfoMs:(unsigned int)arg1;
- (void)setClientModel:(id)arg1;
- (void)setClientPostAuthMs:(unsigned int)arg1;
- (void)setClientSecureConnectionMs:(unsigned int)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasAudioOnly:(BOOL)arg1;
- (void)setHasClientAuthMs:(BOOL)arg1;
- (void)setHasClientBonjourMs:(BOOL)arg1;
- (void)setHasClientConnectMs:(BOOL)arg1;
- (void)setHasClientInfoMs:(BOOL)arg1;
- (void)setHasClientPostAuthMs:(BOOL)arg1;
- (void)setHasClientSecureConnectionMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
