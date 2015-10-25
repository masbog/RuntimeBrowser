/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSAudioRoute : NSObject {
    NSString *_displayName;
    unsigned long long _macAddress;
    BOOL _selected;
    BOOL _supportsVideo;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) unsigned long long macAddress;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) BOOL supportsVideo;

+ (id)audioRoutesFromProtobufs:(id)arg1;
+ (id)protobufsFromAudioRoutes:(id)arg1;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithProtobuf:(id)arg1;
- (BOOL)isEqualToAudioRoute:(id)arg1;
- (BOOL)isSelected;
- (unsigned long long)macAddress;
- (id)protobuf;
- (void)setDisplayName:(id)arg1;
- (void)setMacAddress:(unsigned long long)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSupportsVideo:(BOOL)arg1;
- (BOOL)supportsVideo;

@end
