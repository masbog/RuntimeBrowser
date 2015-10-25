/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {
    NSHashTable *_cards;
    TKSmartCardSlot *_slot;
}

@property (readonly) NSHashTable *cards;

- (void).cxx_destruct;
- (void)cardSessionRequested;
- (id)cards;
- (id)initWithSlot:(id)arg1;
- (void)notifyWithParameters:(id)arg1;

@end
