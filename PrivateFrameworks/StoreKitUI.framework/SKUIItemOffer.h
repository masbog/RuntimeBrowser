/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemOffer : NSObject <SKUICacheCoding> {
    NSString *_actionParameters;
    NSString *_buttonText;
    NSString *_confirmationText;
    long long _fileSize;
    NSString *_fileSizeText;
    NSString *_offerTypeString;
    float _price;
    NSString *_variantIdentifier;
}

@property (nonatomic, readonly) NSString *actionParameters;
@property (nonatomic, readonly) NSString *buttonText;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (nonatomic, readonly) NSString *confirmationText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSString *fileSizeText;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) int offerType;
@property (nonatomic, readonly) float price;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *variantIdentifier;

- (void).cxx_destruct;
- (void)_addActionParameterWithName:(id)arg1 value:(id)arg2;
- (void)_setFileSizeWithAssets:(id)arg1;
- (void)_setFileSizeWithFlavors:(id)arg1;
- (id)actionParameters;
- (id)buttonText;
- (id)cacheRepresentation;
- (id)confirmationText;
- (long long)fileSize;
- (id)fileSizeText;
- (id)initWithButtonText:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)initWithOfferDictionary:(id)arg1;
- (id)initWithRedownloadToken:(id)arg1;
- (id)lookupDictionary;
- (int)offerType;
- (float)price;
- (id)variantIdentifier;

@end
