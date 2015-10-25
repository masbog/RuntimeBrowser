/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressPickerReformatter : NSObject {
    NSArray *_addresses;
    BOOL _attributesDisabled;
    float _fontSize;
    float _maximumFontSize;
    float _maximumWidth;
    float _minimumFontSize;
    NSArray *_reformattedAddresses;
}

- (void)_attemptUniquingDisplayedStrings;
- (BOOL)_attemptUniquingDisplayedStringsUsingBlock:(id /* block */)arg1;
- (unsigned int)_defaultOptions;
- (void)_determineFontSize:(BOOL*)arg1;
- (void)_expandAllLocalParts;
- (void)_invalidateReformattedAddresses;
- (id)_reformattedAddressesByDisplayedStrings;
- (BOOL)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1;
- (void)_restoreMiddleTruncationRanges:(id)arg1;
- (id)_saveMiddleTruncationRanges;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)_updateReformattedAddressesIfNecessary;
- (void)dealloc;
- (unsigned int)numberOfReformattedAddresses;
- (id)reformattedAddressAtIndex:(unsigned int)arg1;
- (id)reformattedAddressStringAtIndex:(unsigned int)arg1;
- (void)setAddresses:(id)arg1;
- (void)setAttributesDisabled:(BOOL)arg1;
- (void)setFontSize:(float)arg1;
- (void)setMaximumWidth:(float)arg1;
- (void)setMinimumFontSize:(float)arg1 maximumFontSize:(float)arg2;

@end
