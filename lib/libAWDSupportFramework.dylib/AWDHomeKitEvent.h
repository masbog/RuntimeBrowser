/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHomeKitEvent : PBCodable <NSCopying> {
    unsigned int _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int eventType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (BOOL)hasEventType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end