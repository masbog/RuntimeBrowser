/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreen : NSObject <UICoordinateSpace, UIFocusContainer, UIFocusEnvironment, UITraitEnvironment, _UIFocusEnvironmentInternal, _UITraitEnvironmentInternal> {
    UIWindow<UIFocusEnvironment> *__focusedWindow;
    NSArray *_availableDisplayModes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    NSDictionary *_capabilities;
    UIFocusAnimationCoordinator *_currentFocusAnimationCoordinator;
    UITraitCollection *_defaultTraitCollection;
    id _display;
    FBSDisplay *_fbsDisplay;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    UIView *_focusedView;
    float _horizontalScale;
    int _interfaceOrientation;
    double _lastFocusStartTime;
    float _lastNotifiedBacklightLevel;
    UITraitCollection *_lastNotifiedTraitCollection;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mainSceneReferenceBounds;
    UITraitCollection *_overrideTraitCollection;
    NSMutableArray *_pausedWindows;
    BOOL _pendingFocusUpdateAllowsDeferral;
    <UIFocusEnvironment> *_pendingFocusUpdateEnvironment;
    BOOL _performingSystemSnapshot;
    float _pointsPerInch;
    UIView *_previousFocusedView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _referenceBounds;
    float _scale;
    UIWindow *_screenDisablingWindow;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int screenUpdatesDisabled : 1; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int screenCreatedFBSDisplay : 1; 
    } _screenFlags;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    double _startedPausingWindows;
    float _touchScaleFactor;
    NSHashTable *_unfocusingViews;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unjailedReferenceBounds;
    int _userInterfaceIdiom;
    BOOL _wantsSoftwareDimming;
}

@property (setter=_setFocusedWindow:, nonatomic) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _gkBounds;
@property (readonly) float _gkScale;
@property (setter=_setLastNotifiedBacklightLevel:, nonatomic) float _lastNotifiedBacklightLevel;
@property (getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:, nonatomic) BOOL _performingSystemSnapshot;
@property (nonatomic, readonly) UIWindow *_preferredFocusedWindow;
@property (nonatomic, readonly) UIView *_previousFocusedView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _referenceBounds;
@property (setter=_setSoftwareDimmingWindow:, nonatomic, retain) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic, readonly) NSHashTable *_unfocusingViews;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } applicationFrame;
@property (nonatomic, readonly, copy) NSArray *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic) float brightness;
@property (readonly) <UICoordinateSpace> *coordinateSpace;
@property (getter=_currentFocusAnimationCoordinator, nonatomic, readonly) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (nonatomic, retain) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:, nonatomic, retain) UITraitCollection *defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplay *fbsDisplay;
@property (readonly) <UICoordinateSpace> *fixedCoordinateSpace;
@property (nonatomic, readonly) UIView *focusedView;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } is_scaledSize;
@property (getter=_lastFocusStartTime, nonatomic, readonly) double lastFocusStartTime;
@property (getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:, nonatomic, retain) UITraitCollection *lastNotifiedTraitCollection;
@property (nonatomic, readonly) UIScreen *mirroredScreen;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } nativeBounds;
@property (nonatomic, readonly) float nativeScale;
@property (getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:, nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic) int overscanCompensation;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } overscanCompensationInsets;
@property (nonatomic, readonly) <UIFocusContainer> *preferredFocusedItem;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) UIScreenMode *preferredMode;
@property (nonatomic, readonly) float scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsFocus;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic) BOOL wantsSoftwareDimming;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (id)__availableScenes;
+ (id)__connectedFBSDisplays;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__sceneTrackingQueue;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(BOOL)arg1;
+ (id)_carScreen;
+ (void)_endDisableScreenUpdates;
+ (void)_enumerateScreensWithBlock:(id /* block */)arg1;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (BOOL)_shouldDisableJail;
+ (void)_videoOutSettingsChanged;
+ (id)_workspaceCapableScreens;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForScreenOriginRotation:(float)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToRotateScreen:(float)arg1;

- (void).cxx_destruct;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2 ignoreStatusBar:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameWithoutOverscanForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2 ignoreStatusBar:(BOOL)arg3;
- (BOOL)_areListsLimited;
- (BOOL)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForInterfaceOrientation:(int)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_computeMetrics;
- (void)_computeMetrics:(BOOL)arg1;
- (void)_connectScreen;
- (id)_contextForCurrentFocusState;
- (id)_currentFocusAnimationCoordinator;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(int)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(int)arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_disableScreenUpdates:(BOOL)arg1;
- (void)_disconnectScreen;
- (id)_display;
- (id)_displayID;
- (void)_enableScreenUpdates;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureConnectedIfPossible;
- (void)_enumerateWindowsWithBlock:(id /* block */)arg1;
- (id)_focusedWindow;
- (int)_forceTouchCapability;
- (BOOL)_hasStatusBar;
- (BOOL)_hasWindows;
- (float)_horizontalPixelScale;
- (int)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (int)_interfaceOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_interfaceOrientedMainSceneBounds;
- (BOOL)_isCarScreen;
- (BOOL)_isEnvironmentEligibleForFocusUpdate:(id)arg1 allowsDeferral:(BOOL)arg2;
- (BOOL)_isExternal;
- (BOOL)_isMainScreen;
- (BOOL)_isOverscanned;
- (BOOL)_isPerformingSystemSnapshot;
- (BOOL)_isRightHandDrive;
- (BOOL)_isRotatable;
- (BOOL)_isUIElementLimited:(id /* block */)arg1;
- (BOOL)_isWorkspaceCapable;
- (double)_lastFocusStartTime;
- (float)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(int)arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mainSceneBoundsForInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mainSceneFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mainSceneReferenceBoundsForSettings:(id)arg1;
- (id)_name;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_nativeDisplayBounds;
- (void)_noteEnvironmentNeedsFocusUpdate:(id)arg1 allowsDeferral:(BOOL)arg2;
- (void)_noteItemNeedsPreferredFocusedItemUpdate:(id)arg1;
- (void)_noteSceneOrientationUpdate:(int)arg1;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows:(BOOL)arg1;
- (void)_notifySceneBoundsChanged:(BOOL)arg1;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (BOOL)_orientedMainSceneReferenceBoundsEqualDestinationBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 interfaceOrientation:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_overrideReferenceBounds;
- (id)_overrideTraitCollection;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (id)_pendingFocusUpdateEnvironment;
- (id)_pendingPreferredFocusedItem;
- (float)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusedWindow;
- (void)_prepareForWindow;
- (id)_previousFocusedView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (float)_rotation;
- (float)_scale;
- (unsigned int)_seed;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(BOOL)arg2;
- (void)_setExternalDeviceShouldInputText:(BOOL)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInterfaceOrientation:(int)arg1;
- (void)_setInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_setInterfaceOrientation:(int)arg1 computeMetrics:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setLastNotifiedBacklightLevel:(float)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(BOOL)arg2;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(BOOL)arg2 notify:(BOOL)arg3;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setPerformingSystemSnapshot:(BOOL)arg1;
- (void)_setScale:(float)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setSpeed:(float)arg1 forWindow:(id)arg2;
- (void)_setUserInterfaceIdiom:(int)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (BOOL)_supportsBrightness;
- (float)_touchRadiusScaleFactor;
- (float)_touchScaleFactor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (id)_unfocusingViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_unjailedReferenceBoundsForInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (BOOL)_updateFocusToView:(id)arg1;
- (BOOL)_updateFocusWithContext:(id)arg1 animationCoordinator:(id)arg2;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (void)_updateReferenceBoundsToSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (void)_updateWithMainSceneSettings:(id)arg1 animated:(BOOL)arg2;
- (int)_userInterfaceIdiom;
- (BOOL)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (int)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (float)brightness;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusedItem;
- (id)focusedView;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (id)initWithDisplay:(id)arg1;
- (BOOL)isAncestorOfItem:(id)arg1;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nativeBounds;
- (float)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)overscanCompensation;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })overscanCompensationInsets;
- (id)preferredFocusedItem;
- (id)preferredFocusedView;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (float)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(float)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setFbsDisplay:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setNeedsPreferredFocusedItemUpdate;
- (void)setOverscanCompensation:(int)arg1;
- (void)setWantsSoftwareDimming:(BOOL)arg1;
- (BOOL)shouldChangeFocusedItem:(id)arg1;
- (BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned int)arg2;
- (BOOL)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned int)arg3;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (BOOL)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)updatePreferredFocusedItemIfNeeded;
- (BOOL)wantsSoftwareDimming;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_display;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentRotationSafeBounds;
- (unsigned int)supportedInterfaceOrientations;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (BOOL)__ck_isFullscreen;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)FBSDisplay;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gkBounds;
- (float)_gkScale;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (struct CGSize { float x1; float x2; })is_scaledSize;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

+ (id)sbs_launchImageInfoPlistKeyModifier:(int)arg1;
+ (id)sbs_screenTypes;
+ (id)sbs_snapshotImagePathComponent:(int)arg1;

- (BOOL)sbs_isCarScreen;
- (BOOL)sbs_isMainScreen;
- (id)sbs_launchImageInfoPlistKeyModifier;
- (id)sbs_snapshotImagePathComponent;

@end