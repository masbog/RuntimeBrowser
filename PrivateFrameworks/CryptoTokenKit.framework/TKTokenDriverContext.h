/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol> {
    TKTokenDriver *_driver;
    NSString *_driverClassID;
    NSString *_instanceID;
}

@property (nonatomic, retain) TKTokenDriver *driver;
@property (nonatomic, retain) NSString *driverClassID;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)driver;
- (id)driverClassID;
- (void)setDriver:(id)arg1;
- (void)setDriverClassID:(id)arg1;

@end
