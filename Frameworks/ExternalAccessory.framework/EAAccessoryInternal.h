/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessoryInternal : NSObject {
    id /* block */ _WiFiCredentialsCompletionBlock;
    NSDictionary *_audioPorts;
    NSString *_bonjourName;
    NSArray *_cameraComponents;
    unsigned int _capabilities;
    int _classType;
    BOOL _connected;
    unsigned int _connectionID;
    <EAAccessoryDelegate> *_delegate;
    NSString *_dockType;
    unsigned int _eqIndex;
    NSArray *_eqNames;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
    BOOL _hasIPConnection;
    BOOL _isAvailableOverBonjour;
    int _locationSentenceTypesMask;
    NSString *_macAddress;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_name;
    BOOL _notPresentInIAPAccessoriesArray;
    id /* block */ _pairingCompletionBlock;
    BOOL _pointOfInterestHandoffEnabled;
    NSString *_preferredApp;
    NSDictionary *_protocols;
    NSString *_serialNumber;
    NSMutableArray *_sessionsList;
    NSDictionary *_vehicleInfoInitialData;
    NSDictionary *_vehicleInfoSupportedTypes;
}

@property (copy) id /* block */ WiFiCredentialsCompletionBlock;
@property (nonatomic, retain) NSDictionary *audioPorts;
@property (nonatomic, copy) NSString *bonjourName;
@property (nonatomic, retain) NSArray *cameraComponents;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) int classType;
@property (nonatomic) BOOL connected;
@property (nonatomic) unsigned int connectionID;
@property (nonatomic) <EAAccessoryDelegate> *delegate;
@property (nonatomic, copy) NSString *dockType;
@property (nonatomic) unsigned int eqIndex;
@property (nonatomic, retain) NSArray *eqNames;
@property (nonatomic, copy) NSString *firmwareRevision;
@property (nonatomic, copy) NSString *hardwareRevision;
@property (nonatomic) BOOL hasIPConnection;
@property (nonatomic) BOOL isAvailableOverBonjour;
@property (nonatomic) int locationSentenceTypesMask;
@property (nonatomic, copy) NSString *macAddress;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL notPresentInIAPAccessoriesArray;
@property (copy) id /* block */ pairingCompletionBlock;
@property BOOL pointOfInterestHandoffEnabled;
@property (nonatomic, copy) NSString *preferredApp;
@property (nonatomic, retain) NSDictionary *protocols;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly) NSArray *sessionsList;
@property (nonatomic, retain) NSDictionary *vehicleInfoInitialData;
@property (nonatomic, retain) NSDictionary *vehicleInfoSupportedTypes;

- (id /* block */)WiFiCredentialsCompletionBlock;
- (void)addSession:(id)arg1;
- (id)audioPorts;
- (id)bonjourName;
- (id)cameraComponents;
- (unsigned int)capabilities;
- (int)classType;
- (BOOL)connected;
- (unsigned int)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)dockType;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (BOOL)hasIPConnection;
- (id)init;
- (BOOL)isAvailableOverBonjour;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (BOOL)notPresentInIAPAccessoriesArray;
- (id /* block */)pairingCompletionBlock;
- (BOOL)pointOfInterestHandoffEnabled;
- (id)preferredApp;
- (id)protocols;
- (void)removeSession:(id)arg1;
- (id)serialNumber;
- (id)sessionsList;
- (void)setAudioPorts:(id)arg1;
- (void)setBonjourName:(id)arg1;
- (void)setCameraComponents:(id)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setClassType:(int)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)setConnectionID:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockType:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setFirmwareRevision:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setHasIPConnection:(BOOL)arg1;
- (void)setIsAvailableOverBonjour:(BOOL)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotPresentInIAPAccessoriesArray:(BOOL)arg1;
- (void)setPairingCompletionBlock:(id /* block */)arg1;
- (void)setPointOfInterestHandoffEnabled:(BOOL)arg1;
- (void)setPreferredApp:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setVehicleInfoInitialData:(id)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setWiFiCredentialsCompletionBlock:(id /* block */)arg1;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;

@end
