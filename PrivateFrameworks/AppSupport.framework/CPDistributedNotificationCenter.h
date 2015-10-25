/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedNotificationCenter : NSObject {
    NSString *_centerName;
    BOOL _isServer;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    struct __CFDictionary { } *_sendPorts;
    unsigned int _startCount;
}

+ (struct __CFDictionary { }*)_serverPortToNotificationCenterMap;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (id)centerForServerPort:(unsigned int)arg1;
+ (id)centerNamed:(id)arg1;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;

- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { }*)arg1;
- (id)_initWithServerName:(id)arg1;
- (void)_notificationServerWasRestarted;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; }*)arg2;
- (void)dealloc;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)runServer;
- (void)runServerOnCurrentThread;
- (void)startDeliveringNotificationsToMainThread;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)stopDeliveringNotifications;

@end