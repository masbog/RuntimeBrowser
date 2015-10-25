/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAlertItem : SBAlertItem {
    int _alignment;
    BOOL _alignmentHasBeenSet;
    BOOL _displayingEntireMessage;
    BOOL _shouldHideSMSPreview;
}

- (void)_deactivateAllTaggedAlertItems;
- (void)_deactivateTaggedAlertItem;
- (void)_tag;
- (id)_taggedAlertItems;
- (void)_untag;
- (id)alertSheet;
- (Class)alertSheetClass;
- (int)bodyTextAlignmentForAlertSheet:(id)arg1 displayedLineCount:(int)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (BOOL)forcesModalAlertAppearance;
- (id)init;
- (id)lockLabel;
- (id)messageText;
- (id)name;
- (BOOL)shouldHideSMSPreview;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (void)willActivate;
- (BOOL)willShowInAwayItems;

@end
