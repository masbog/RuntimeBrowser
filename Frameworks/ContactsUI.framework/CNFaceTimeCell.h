/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNFaceTimeCell : CNLabeledCell {
    <CNPropertyCellDelegate> *_delegate;
    UILabel *_faceTimeLabel;
    BOOL _isFaceTimeAudioAvailable;
    CNTransportButton *_transportIcon1;
    CNTransportButton *_transportIcon2;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *faceTimeLabel;
@property (nonatomic) BOOL isFaceTimeAudioAvailable;
@property (nonatomic, readonly) CNTransportButton *transportIcon1;
@property (nonatomic, readonly) CNTransportButton *transportIcon2;

- (void).cxx_destruct;
- (id)constantConstraints;
- (id)delegate;
- (id)faceTimeLabel;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isFaceTimeAudioAvailable;
- (id)labelView;
- (float)minCellHeight;
- (void)performDefaultAction;
- (id)rightMostView;
- (void)setDelegate:(id)arg1;
- (void)setIsFaceTimeAudioAvailable:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon1;
- (id)transportIcon2;
- (id)variableConstraints;

@end
