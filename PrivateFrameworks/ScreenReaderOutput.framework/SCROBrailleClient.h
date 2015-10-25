/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleClient : NSObject {
    NSData *_aggregatedStatusCache;
    NSData *_aggregatedStatusPending;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_deathTimer;
    id _delegate;
    BOOL _delegateWantsKeypresses;
    BOOL _displayDescriptorCallbackEnabled;
    BOOL _isReady;
    BOOL _keepConnectionAlive;
    NSLock *_lock;
    NSMutableAttributedString *_mainStringCache;
    NSMutableAttributedString *_mainStringPending;
    BOOL _needsDisplay;
    BOOL _wantsDisconnectMessage;
    BOOL _wantsDisplayConfigurationChanged;
    BOOL _wantsReconnectMessage;
}

@property (nonatomic) int inputContractionMode;
@property (nonatomic) BOOL inputEightDotBraille;

+ (id)statusAttributeDotText;

- (void)_deathTimerHandler;
- (void)_deviceConnected:(id)arg1;
- (id)_getWorkingString;
- (id)_lazyConnection;
- (void)_refreshAfterReconnect;
- (void)_registerDelegate;
- (void)_setupDeviceDetection;
- (id)aggregatedStatus;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (BOOL)automaticBrailleTranslationEnabled;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (BOOL)displayDescriptorCallbackEnabled;
- (void)displayIfNeeded;
- (int)displayMode;
- (id)driverConfiguration;
- (void)exitCurrentDisplayMode;
- (void)handleCallback:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (int)inputContractionMode;
- (BOOL)inputEightDotBraille;
- (BOOL)isConfigured;
- (BOOL)isConnected;
- (BOOL)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (id)mainAttributedString;
- (long)masterStatusCellIndex;
- (BOOL)needsDisplay;
- (void)panDisplayLeft:(long)arg1;
- (void)panDisplayRight:(long)arg1;
- (id)pendingAggregatedStatus;
- (id)pendingMainAttributedString;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)selectAllForToken:(int)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1;
- (void)setAnnouncementString:(id)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayDescriptorCallbackEnabled:(BOOL)arg1;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (void)setFocused:(BOOL)arg1 forToken:(int)arg2;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(BOOL)arg1;
- (void)setKeepConnectionAlive:(BOOL)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMasterStatusCellIndex:(long)arg1;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(long)arg3;
- (void)setPrimaryBrailleDisplay:(long)arg1;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 forToken:(int)arg2;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setVirtualStatusAlignment:(int)arg1;
- (BOOL)showDotsSevenAndEight;
- (BOOL)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)simulateKeypress:(id)arg1;
- (id)tableIdentifier;
- (id)tokenArray;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 forDisplayWithToken:(long)arg4;
- (void)unselectAllForToken:(int)arg1;
- (int)virtualStatusAlignment;

@end
