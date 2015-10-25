/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCNotificationActionTextInputViewController : UIViewController <NCInteractiveNotificationHost, UITextViewDelegate> {
    NSString *_actionIdentifier;
    NSString *_buttonTitle;
    _UITextFieldRoundedRectBackgroundViewNeue *_coverView;
    <NCInteractiveNotificationHostDelegate> *_delegate;
    float _maximumHeight;
    BOOL _modal;
    UIButton *_sendButton;
    UITextView *_textEntryView;
    <NCNotificationActionTextInputDelegate> *_textInputDelegate;
}

@property (nonatomic, readonly, retain) NCViewServiceDescriptor *accessoryViewService;
@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, readonly) float bottomOverhangHeight;
@property (nonatomic, retain) NSString *buttonTitle;
@property (nonatomic, retain) _UITextFieldRoundedRectBackgroundViewNeue *coverView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCInteractiveNotificationHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NCViewServiceDescriptor *inlayViewService;
@property (nonatomic) float maximumHeight;
@property (getter=isModal, nonatomic) BOOL modal;
@property (nonatomic, retain) UIButton *sendButton;
@property (nonatomic, readonly) BOOL showsKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textEntryView;
@property (nonatomic) <NCNotificationActionTextInputDelegate> *textInputDelegate;

- (void)_sendButtonTouchUpInside:(id)arg1;
- (void)_updateForTextChanged;
- (id)accessoryViewService;
- (id)actionIdentifier;
- (float)bottomOverhangHeight;
- (id)buttonTitle;
- (id)coverView;
- (void)dealloc;
- (id)delegate;
- (void)didChangeRevealPercent:(float)arg1;
- (void)getActionContextWithCompletion:(id /* block */)arg1;
- (void)handleActionAtIndex:(int)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (id)inlayViewService;
- (void)interactiveNotificationDidAppear;
- (BOOL)isModal;
- (float)maximumHeight;
- (float)preferredContentHeight;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (id)sendButton;
- (void)setActionIdentifier:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumHeight:(float)arg1;
- (void)setModal:(BOOL)arg1;
- (void)setSendButton:(id)arg1;
- (void)setTextEntryView:(id)arg1;
- (void)setTextInputDelegate:(id)arg1;
- (BOOL)showsKeyboard;
- (id)textEntryView;
- (id)textInputDelegate;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
