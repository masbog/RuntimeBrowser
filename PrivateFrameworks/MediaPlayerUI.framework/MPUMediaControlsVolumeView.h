/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUMediaControlsVolumeView : UIView <MPVolumeControllerDelegate> {
    UISlider *_slider;
    int _style;
    double _timeStoppedTracking;
    NSTimer *_volumeCommitTimer;
    MPVolumeController *_volumeController;
    NSTimer *_warningBlinkTimer;
    BOOL _warningIndicatorBlinking;
    UIView *_warningView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UISlider *slider;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPVolumeController *volumeController;

- (void).cxx_destruct;
- (void)_beginBlinkingWarningView;
- (void)_beginVolumeCommitTimer;
- (void)_blinkWarningView;
- (void)_commitCurrentVolumeValue;
- (id)_createVolumeSliderView;
- (void)_layoutVolumeWarningView;
- (void)_removeVolumeSliderInertia;
- (BOOL)_shouldStartBlinkingVolumeWarningIndicator;
- (void)_stopBlinkingWarningView;
- (void)_stopVolumeCommitTimer;
- (void)_volumeSliderBeganChanging:(id)arg1;
- (BOOL)_volumeSliderDynamicsEnabled;
- (void)_volumeSliderStoppedChanging:(id)arg1;
- (void)_volumeSliderValueChanged:(id)arg1;
- (id)_warningTrackImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)slider;
- (int)style;
- (void)updateSystemVolumeLevel;
- (id)volumeController;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(int)arg2;

@end
