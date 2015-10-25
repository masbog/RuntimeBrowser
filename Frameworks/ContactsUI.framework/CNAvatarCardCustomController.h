/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardCustomController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIGestureRecognizerDelegate> {
    CNAvatarCardViewController *_cardViewController;
    UIGestureRecognizer *_orbGestureRecognizer;
    UIView *_sourceView;
}

@property (nonatomic, retain) CNAvatarCardViewController *cardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIGestureRecognizer *orbGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionCategories;
- (BOOL)bypassActionValidation;
- (id)cardViewController;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)cardViewController:(id)arg1 willShowActions:(id)arg2;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (BOOL)isVisible;
- (id)orbGestureRecognizer;
- (void)presentAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)setActionCategories:(id)arg1;
- (void)setBypassActionValidation:(BOOL)arg1;
- (void)setCardViewController:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setOrbGestureRecognizer:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)showCard:(id)arg1;
- (id)sourceView;

@end
