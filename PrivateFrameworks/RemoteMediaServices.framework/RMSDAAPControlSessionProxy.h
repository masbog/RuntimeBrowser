/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDAAPControlSessionProxy : RMSSessionProxy <RMSDAAPControlSession> {
    <RMSDAAPControlSessionDelegate> *_delegate;
    RMSIDSClient *_idsClient;
    RMSNowPlayingInfo *_nowPlayingInfo;
    RMSService *_service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSDAAPControlSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) RMSService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAudioRoutesDidUpdateNotification:(id)arg1;
- (void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg1;
- (void)_handleNowPlayingInfoDidUpdateNotification:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_handleVolumeDidUpdateNotification:(id)arg1;
- (void)_notifyDelegateForArtworkChange;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)beginObservingNowPlaying;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNowPlaying;
- (void)heartbeatDidFail;
- (id)init;
- (void)logout;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendNavigationCommand:(int)arg1;
- (void)sendPlaybackCommand:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTouchEndWithDirection:(int)arg1 repeatCount:(unsigned long)arg2;
- (void)sendTouchMoveWithDirection:(int)arg1 repeatCount:(unsigned long)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLikedState:(int)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id /* block */)arg2;

@end
