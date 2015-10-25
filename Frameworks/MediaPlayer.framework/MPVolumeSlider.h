/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeSlider : UISlider <MPAVRoutingControllerDelegate, MPVolumeControllerDelegate> {
    NSTimer *_commitTimer;
    BOOL _forcingOffscreenVisibility;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectInsets;
    BOOL _isOffScreen;
    UILabel *_routeNameLabel;
    MPAVRoutingController *_routingController;
    int _style;
    UIImageView *_thumbImageView;
    BOOL _thumbIsDefault;
    UIImageView *_thumbMaskImageView;
    MPVolumeController *_volumeController;
    BOOL _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    UIView *_volumeWarningView;
}

@property (setter=_setIsOffScreen:, nonatomic) BOOL _isOffScreen;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitRectInsets;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *volumeAudioCategory;
@property (nonatomic, retain) UIImage *volumeWarningTrackImage;
@property (nonatomic, readonly) UIView *volumeWarningView;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_beginBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_commitVolumeChange;
- (void)_endBlinkingWarningView;
- (void)_endTracking;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (BOOL)_isOffScreen;
- (void)_layoutForAvailableRoutes;
- (void)_layoutVolumeWarningView;
- (id)_maxTrackImageForStyle:(int)arg1;
- (id)_minTrackImageForStyle:(int)arg1;
- (id)_newVolumeWarningView;
- (void)_resetThumbImageForState:(unsigned int)arg1;
- (void)_routeNameLabelAnimationDidEnd;
- (void)_setIsOffScreen:(BOOL)arg1;
- (id)_thumbImageForStyle:(int)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)createThumbView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)layoutSubviews;
- (float)maximumValue;
- (float)minimumValue;
- (id)player;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPlayer:(id)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)setVolumeWarningTrackImage:(id)arg1;
- (int)style;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)volumeAudioCategory;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)volumeWarningTrackImage;
- (id)volumeWarningView;

@end
