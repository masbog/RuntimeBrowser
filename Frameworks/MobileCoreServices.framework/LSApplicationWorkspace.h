/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspace : NSObject

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)defaultWorkspace;

- (id)URLOverrideForURL:(id)arg1;
- (void)_LSClearSchemaCaches;
- (BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3;
- (void)_clearCachedAdvertisingIdentifier;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allInstalledApplications;
- (id)applicationForOpeningResource:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (BOOL)applicationIsInstalled:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsOfType:(unsigned int)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithExternalAccessoryProtocols;
- (id)applicationsWithSettingsBundle;
- (id)applicationsWithUIBackgroundModes;
- (id)applicationsWithVPNPlugins;
- (void)clearAdvertisingIdentifier;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (id)delegateProxy;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsApplications;
- (BOOL)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)enumerateBundlesOfType:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (BOOL)establishConnection;
- (BOOL)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2;
- (unsigned int)getInstallTypeForOptions:(id)arg1 andApp:(id)arg2;
- (void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (id)installBundle:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3 forApp:(id)arg4 withError:(id*)arg5 outInstallProgress:(id*)arg6;
- (BOOL)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned int)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)installedPlugins;
- (id)installedVPNPlugins;
- (BOOL)invalidateIconCache:(id)arg1;
- (BOOL)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2;
- (BOOL)openApplicationWithBundleID:(id)arg1;
- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (BOOL)openURL:(id)arg1;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)placeholderApplications;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(id /* block */)arg4;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(id /* block */)arg4;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (BOOL)registerApplication:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (BOOL)registerBundleWithInfo:(id)arg1 options:(id)arg2 type:(unsigned int)arg3 progress:(id)arg4;
- (BOOL)registerPlugin:(id)arg1;
- (id)remoteObserver;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (BOOL)unregisterApplication:(id)arg1;
- (BOOL)unregisterPlugin:(id)arg1;
- (id)unrestrictedApplications;
- (BOOL)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_openURL:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;

@end