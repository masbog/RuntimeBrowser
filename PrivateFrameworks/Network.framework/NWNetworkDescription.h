/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWNetworkDescription : NSObject {
    NSSet *_dnsSearchDomainOptions;
    NSSet *_dnsServerAddressOptions;
    NSSet *_interfaceTypeOptions;
    int _powerAttachedPreference;
    NSURL *_probeURL;
    int _roamingPreference;
    NSSet *_ssidOptions;
    int _state;
}

@property (copy) NSSet *dnsSearchDomainOptions;
@property (copy) NSSet *dnsServerAddressOptions;
@property (copy) NSSet *interfaceTypeOptions;
@property int powerAttachedPreference;
@property (readonly, copy) NSString *privateDescription;
@property (copy) NSURL *probeURL;
@property int roamingPreference;
@property (copy) NSSet *ssidOptions;
@property int state;

+ (int)getNewStateFromPathMatch:(BOOL)arg1 oldState:(int)arg2 probeExists:(BOOL)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)dnsSearchDomainOptions;
- (id)dnsServerAddressOptions;
- (id)initWithXPCDictionary:(id)arg1;
- (id)interfaceTypeOptions;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesPath:(id)arg1;
- (int)powerAttachedPreference;
- (id)privateDescription;
- (id)probeURL;
- (int)roamingPreference;
- (void)setDnsSearchDomainOptions:(id)arg1;
- (void)setDnsServerAddressOptions:(id)arg1;
- (void)setInterfaceTypeOptions:(id)arg1;
- (void)setPowerAttachedPreference:(int)arg1;
- (void)setProbeURL:(id)arg1;
- (void)setRoamingPreference:(int)arg1;
- (void)setSsidOptions:(id)arg1;
- (void)setState:(int)arg1;
- (id)ssidOptions;
- (int)state;
- (void)updateStateWithPath:(id)arg1;

@end
