/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAccount : NSObject <IMSystemMonitorListener> {
    id _accountImage;
    NSData *_accountImageData;
    NSDictionary *_accountPersistentProperties;
    NSMutableDictionary *_accountPersistentPropertiesChanges;
    NSDictionary *_accountPreferences;
    NSMutableDictionary *_accountPreferencesChanges;
    int _accountType;
    NSArray *_aliases;
    BOOL _asleep;
    BOOL _blockIdleStatus;
    IMPeople *_buddyList;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    unsigned int _cachedBlockingMode;
    unsigned long long _capabilities;
    int _coalesceCount;
    NSMutableDictionary *_coalescedChanges;
    NSString *_countryCode;
    NSMutableDictionary *_currentAccountStatus;
    NSDictionary *_data;
    NSMutableDictionary *_dataChanges;
    unsigned long long _defaultHandleCapabilities;
    NSString *_displayName;
    NSArray *_groups;
    BOOL _hasBeenRemoved;
    BOOL _hasCheckedDefaultHandleCapabilities;
    BOOL _hasPostedOfflineNotification;
    BOOL _hasReceivedSync;
    BOOL _iconChecked;
    NSMutableDictionary *_imHandles;
    NSMutableDictionary *_inlineTransfers;
    BOOL _isActive;
    BOOL _justLoggedIn;
    NSArray *_lastReceivedGroupState;
    NSMutableDictionary *_localCache;
    NSRecursiveLock *_lock;
    NSString *_loginID;
    IMHandle *_loginIMHandle;
    unsigned int _loginStatus;
    NSDictionary *_members;
    NSDate *_myIdleSince;
    NSDictionary *_myNowPlaying;
    NSData *_myPictureData;
    NSAttributedString *_myProfile;
    unsigned int _myStatus;
    NSString *_myStatusMessage;
    BOOL _needToCheckForWatchedIMHandles;
    int _numHolding;
    NSDictionary *_profile;
    NSMutableDictionary *_profileChanges;
    int _profileStatus;
    NSDictionary *_registrationAlertInfo;
    int _registrationFailureReason;
    int _registrationStatus;
    IMServiceImpl *_service;
    id _smallImage;
    NSMutableDictionary *_sortOrders;
    NSString *_strippedLogin;
    NSDictionary *_subtypeInfo;
    BOOL _syncedWithRemoteBuddyList;
    NSArray *_targetGroupState;
    NSString *_uniqueID;
    BOOL _useMeCardName;
    NSArray *_vettedAliases;
}

@property (nonatomic, readonly) BOOL _isUsableForSending;
@property (nonatomic, readonly) NSDictionary *_persistentProperties;
@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic, readonly) NSData *accountImageData;
@property (nonatomic, readonly) NSDictionary *accountPreferences;
@property (nonatomic, readonly) NSDictionary *accountSubtypeInfo;
@property (nonatomic, readonly) int accountType;
@property (nonatomic, readonly) NSArray *addressBookProperties;
@property (nonatomic, readonly) NSString *addressBookProperty;
@property (nonatomic, readonly) NSArray *aliases;
@property (nonatomic, retain) NSArray *allowList;
@property (nonatomic, readonly) BOOL allowsMMSRelay;
@property (nonatomic, readonly) BOOL allowsSMSRelay;
@property (nonatomic) BOOL allowsVCRelay;
@property (nonatomic, readonly) NSArray *arrayOfAllIMHandles;
@property (nonatomic, readonly) NSString *authorizationID;
@property (nonatomic, readonly) NSString *authorizationToken;
@property (nonatomic) BOOL autoLogin;
@property (nonatomic) BOOL blockIdleStatus;
@property (nonatomic, retain) NSArray *blockList;
@property (nonatomic) BOOL blockOtherAddresses;
@property (nonatomic) unsigned int blockingMode;
@property (nonatomic, readonly) IMPeople *buddyList;
@property (nonatomic, readonly) BOOL canActivate;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, retain) NSString *countryCode;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSArray *emailDomains;
@property (nonatomic) BOOL goIdle;
@property (nonatomic, readonly) NSArray *groupList;
@property (nonatomic, readonly) BOOL handlesChatInvites;
@property (nonatomic, readonly) BOOL hasCustomDescription;
@property (nonatomic, readonly) BOOL hasSyncedWithRemoteBuddies;
@property (nonatomic, readonly) BOOL hasTargetGroupStateBeenMet;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) int invalidSettings;
@property (getter=isInvisible, nonatomic) BOOL invisible;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) BOOL isAsleep;
@property (nonatomic, readonly) BOOL isAwaitingTargetGroupState;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly) BOOL isConnecting;
@property (nonatomic, readonly) BOOL isManaged;
@property (nonatomic, readonly) BOOL isOperational;
@property (nonatomic, readonly) BOOL isRegistered;
@property (nonatomic, readonly) BOOL isSMSRelayCapable;
@property (nonatomic, readonly) BOOL justLoggedIn;
@property (nonatomic, retain) NSString *login;
@property (nonatomic, readonly) id loginIMHandle;
@property (nonatomic, readonly) unsigned int loginStatus;
@property (nonatomic, readonly) NSString *loginStatusMessage;
@property (nonatomic, readonly) BOOL makingChanges;
@property (nonatomic, readonly) NSDate *myIdleSince;
@property (nonatomic, readonly) NSString *myNowPlayingString;
@property (nonatomic, readonly) NSData *myPictureData;
@property (nonatomic, readonly) NSAttributedString *myProfile;
@property (nonatomic, readonly) unsigned int myStatus;
@property (nonatomic, readonly) NSDictionary *myStatusDictionary;
@property (nonatomic, readonly) NSString *myStatusMessage;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) int port;
@property (nonatomic, readonly, retain) NSDictionary *profileInfo;
@property (nonatomic, readonly, retain) NSDictionary *registrationFailureAlertInfo;
@property (nonatomic, readonly) int registrationFailureReason;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly) NSString *server;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly, retain) NSString *strippedLogin;
@property (nonatomic, readonly) BOOL supportsAuthorization;
@property (nonatomic, readonly) BOOL supportsRegistration;
@property (nonatomic, readonly) NSString *temporaryPassword;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) BOOL useSSL;
@property (nonatomic, readonly) BOOL validLogin;
@property (nonatomic, readonly) BOOL validPort;
@property (nonatomic, readonly) BOOL validServer;
@property (nonatomic, readonly) NSArray *vettedAliases;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (id)allBuddyListIMHandles;
+ (id)arrayOfAllIMHandles;
+ (id)nameOfLoginStatus:(unsigned int)arg1;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;
+ (id)temporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;

- (id)_aliasInfoForAlias:(id)arg1;
- (id)_aliases;
- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)_clearImageCache;
- (void)_ensureGroupsExists:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2 originalID:(id)arg3 countryCode:(id)arg4;
- (void)_invalidateCachedAliases;
- (BOOL)_isUsableForSending;
- (void)_loadFromDictionary:(id)arg1 force:(BOOL)arg2;
- (void)_loginWithAutoLogin:(BOOL)arg1;
- (void)_markHasSyncedWithRemoteBuddies;
- (void)_notJustLoggedIn;
- (id)_persistentProperties;
- (id)_persistentPropertyForKey:(id)arg1;
- (void)_refreshLoginIMHandle;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_removeObjectForKey:(id)arg1;
- (void)_removePersistentPropertyForKey:(id)arg1;
- (void)_resumeBuddyUpdatesNow;
- (id)_serverWithSSL:(BOOL)arg1;
- (void)_serviceDidConnect:(id)arg1;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)_setInteger:(int)arg1 forKey:(id)arg2;
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_statuses;
- (void)_syncWithRemoteBuddies;
- (BOOL)_updateDisplayName:(id)arg1;
- (void)_updateLogin:(id)arg1;
- (void)_updateMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)_updateProfileInfo:(id)arg1;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;
- (void)_watchBuddiesIfNecessary;
- (id)accountDescription;
- (void)accountDidBecomeActive;
- (void)accountDidDeactivate;
- (id)accountImageData;
- (id)accountPreferences;
- (id)accountSubtypeInfo;
- (int)accountType;
- (void)accountWillBeRemoved;
- (BOOL)addAlias:(id)arg1;
- (BOOL)addAlias:(id)arg1 type:(int)arg2;
- (BOOL)addAliases:(id)arg1;
- (void)addBuddyToBuddyList:(id)arg1;
- (BOOL)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(int)arg3;
- (BOOL)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (BOOL)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(int)arg3;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (id)aliases;
- (id)aliasesForType:(int)arg1;
- (id)allowList;
- (BOOL)allowsMMSRelay;
- (BOOL)allowsSMSRelay;
- (BOOL)allowsVCRelay;
- (id)arrayOfAllIMHandles;
- (BOOL)authenticateAccount;
- (id)authorizationID;
- (id)authorizationToken;
- (BOOL)autoLogin;
- (void)autoLoginAccount;
- (void)beginChanges;
- (BOOL)blockIdleStatus;
- (id)blockList;
- (void)blockMessages:(BOOL)arg1 fromID:(id)arg2;
- (BOOL)blockOtherAddresses;
- (unsigned int)blockingMode;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (id)buddyList;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)buddyPropertiesChanged:(id)arg1;
- (BOOL)canActivate;
- (id)canonicalFormOfID:(id)arg1;
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;
- (unsigned long long)capabilities;
- (void)changeBuddyList:(id)arg1 add:(BOOL)arg2 groups:(id)arg3 atLocation:(int)arg4;
- (id)chatIDForRoomName:(id)arg1;
- (void)clearServiceCaches;
- (void)clearTargetState;
- (int)compareAccountNames:(id)arg1;
- (int)compareIDs:(id)arg1;
- (int)compareLoginStatus:(id)arg1;
- (int)compareNames:(id)arg1;
- (int)compareServices:(id)arg1;
- (int)compareStatus:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)defaultChatSuffix;
- (unsigned long long)defaultHandleCapabilities;
- (id)description;
- (id)dictionary;
- (id)dictionaryDataForKey:(id)arg1;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (void)disconnectAllIMHandles;
- (id)displayName;
- (BOOL)emailAddressIsID:(id)arg1;
- (id)emailDomains;
- (void)endChanges;
- (void)enrollDeviceInSMSRelay:(id)arg1;
- (void)enrollSelfDeviceInSMSRelay;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)existingIMHandleWithID:(id)arg1;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)existingIMHandleWithInfo:(id)arg1;
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (void)finalize;
- (void)forgetAllWatches;
- (BOOL)goIdle;
- (id)groupList;
- (id)groupMembers:(id)arg1;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (BOOL)handlesChatInvites;
- (BOOL)hasAlias:(id)arg1;
- (BOOL)hasAlias:(id)arg1 type:(int)arg2;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (BOOL)hasCustomDescription;
- (BOOL)hasSyncedWithRemoteBuddies;
- (BOOL)hasTargetGroupStateBeenMet;
- (void)holdBuddyUpdates;
- (void)hookupToDaemon;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (Class)imHandleClass;
- (id)imHandleWithID:(id)arg1;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)imHandleWithInfo:(id)arg1;
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)imHandlesForIMPerson:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (int)integerForKey:(id)arg1;
- (int)integerForPreferenceKey:(id)arg1;
- (id)internalName;
- (int)invalidSettings;
- (BOOL)isActive;
- (BOOL)isAsleep;
- (BOOL)isAwaitingTargetGroupState;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isInvisible;
- (BOOL)isManaged;
- (BOOL)isOperational;
- (BOOL)isRegistered;
- (BOOL)isSMSRelayCapable;
- (BOOL)justLoggedIn;
- (void)loadFromDictionary:(id)arg1;
- (id)login;
- (void)loginAccount;
- (id)loginIMHandle;
- (unsigned int)loginStatus;
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (id)loginStatusMessage;
- (void)logoutAccount;
- (BOOL)makingChanges;
- (id)memberGroups:(id)arg1;
- (id)myIdleSince;
- (id)myNowPlayingString;
- (id)myPictureData;
- (id)myProfile;
- (unsigned int)myStatus;
- (id)myStatusDictionary;
- (id)myStatusMessage;
- (id)name;
- (void)nowLoggedIn;
- (void)nowLoggedOut;
- (id)objectForKey:(id)arg1;
- (id)objectForPreferenceKey:(id)arg1;
- (id)password;
- (id)personForIMHandle:(id)arg1;
- (id)personForIMHandle:(id)arg1 identifier:(int*)arg2;
- (id)personSibsForIMHandle:(id)arg1;
- (int)port;
- (id)profileInfo;
- (id)profileStringForKey:(id)arg1;
- (int)profileValidationErrorReason;
- (int)profileValidationStatus;
- (id)profileValueForKey:(id)arg1;
- (id)propertiesForGroup:(id)arg1;
- (void)recalculateSubtypeInfo;
- (id)recalculatedSubtypeInfo;
- (BOOL)registerAccount;
- (void)registerIMHandle:(id)arg1;
- (id)registrationFailureAlertInfo;
- (int)registrationFailureReason;
- (int)registrationStatus;
- (BOOL)removeAlias:(id)arg1;
- (BOOL)removeAlias:(id)arg1 type:(int)arg2;
- (BOOL)removeAliases:(id)arg1;
- (BOOL)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (BOOL)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)removePassword;
- (BOOL)removePeople:(id)arg1 fromGroups:(id)arg2;
- (BOOL)removeProfileValueForKey:(id)arg1;
- (void)removeTemporaryPassword;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)reorderGroups:(id)arg1;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (void)requestGroups;
- (BOOL)requestNewAuthorizationCredentials;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
- (void)resetToDefaults;
- (void)resumeBuddyUpdates;
- (id)server;
- (id)service;
- (id)serviceName;
- (void)setAccountDescription:(id)arg1;
- (void)setAllowList:(id)arg1;
- (void)setAllowsVCRelay:(BOOL)arg1;
- (void)setAutoLogin:(BOOL)arg1;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (void)setBlockList:(id)arg1;
- (void)setBlockOtherAddresses:(BOOL)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forPreferenceKey:(id)arg2;
- (void)setBuddyListAuthorization:(BOOL)arg1 forIMHandle:(id)arg2;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)setCachedAllowList:(id)arg1;
- (void)setCachedBlockIdleStatus:(BOOL)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setCachedBlockingMode:(unsigned int)arg1;
- (void)setCurrentAccountStatus:(id)arg1;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setGoIdle:(BOOL)arg1;
- (void)setIMAccountLoginStatus:(unsigned int)arg1;
- (void)setIMAccountLoginStatus:(unsigned int)arg1 errorMessage:(id)arg2;
- (void)setIMAccountLoginStatus:(unsigned int)arg1 errorMessage:(id)arg2 reason:(int)arg3;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;
- (void)setInvisible:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setLogin:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setPassword:(id)arg1;
- (BOOL)setProfileString:(id)arg1 forKey:(id)arg2;
- (BOOL)setProfileValue:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setTargetGroupsState:(id)arg1;
- (void)setTemporaryPassword:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)setWaitForTargetState;
- (id)shortName;
- (unsigned int)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (void)startWatchingIMHandle:(id)arg1;
- (void)stopWatchingIMHandle:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForPreferenceKey:(id)arg1;
- (id)strippedLogin;
- (BOOL)supportsAuthorization;
- (BOOL)supportsRegistration;
- (void)syncWithRemoteBuddies;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)targetGroupStateTimeout;
- (id)temporaryPassword;
- (int)typeForAlias:(id)arg1;
- (void)unEnrollDeviceInSMSRelay:(id)arg1;
- (id)uniqueID;
- (BOOL)unregisterAccount;
- (void)unregisterIMHandle:(id)arg1;
- (BOOL)unvalidateAlias:(id)arg1;
- (BOOL)unvalidateAliases:(id)arg1;
- (BOOL)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)updateCapabilities:(unsigned long long)arg1;
- (void)updateWithTargetGroups;
- (BOOL)useSSL;
- (BOOL)validLogin;
- (BOOL)validPort;
- (BOOL)validServer;
- (BOOL)validateAlias:(id)arg1;
- (BOOL)validateAlias:(id)arg1 type:(int)arg2;
- (BOOL)validateAliases:(id)arg1;
- (BOOL)validateProfile;
- (int)validationErrorReasonForAlias:(id)arg1;
- (int)validationErrorReasonForAlias:(id)arg1 type:(int)arg2;
- (int)validationStatusForAlias:(id)arg1;
- (int)validationStatusForAlias:(id)arg1 type:(int)arg2;
- (struct _FZChatRoomValidity { int x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (id)vettedAliases;
- (void)watchBuddiesIfNecessary;
- (void)writeSettings;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_handlesFromAddressStrings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (BOOL)CNFRegIsSignedOut;
- (BOOL)CNFRegRegisteringLocalPhoneNumberSentinelAlias;
- (BOOL)CNFRegSignInComplete;
- (BOOL)CNFRegSignInFailed;
- (id)loginDisplayString;

@end