/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NanoPhoneVoicemailBody : PBCodable <NSCopying> {
    long long _voicemailNumber;
    NSData *_voicemailRecording;
}

@property (nonatomic, readonly) BOOL hasVoicemailRecording;
@property (nonatomic) long long voicemailNumber;
@property (nonatomic, retain) NSData *voicemailRecording;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasVoicemailRecording;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setVoicemailNumber:(long long)arg1;
- (void)setVoicemailRecording:(id)arg1;
- (long long)voicemailNumber;
- (id)voicemailRecording;
- (void)writeTo:(id)arg1;

@end
