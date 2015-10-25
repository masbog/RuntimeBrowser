/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCServiceListener : NSObject {
    unsigned long _clientCount;
    <XPCServiceListenerDelegate> *_delegate;
    NSObject<OS_xpc_object> *_listener;
    NSMutableSet *_serviceConnections;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) unsigned long clientCount;
@property (nonatomic, readonly) <XPCServiceListenerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_xpc_object> *listener;
@property (nonatomic, retain) NSMutableSet *serviceConnections;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned int)arg2 completionBlock:(id /* block */)arg3;
- (unsigned long)clientCount;
- (id)debugDescription;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)listener;
- (void)serviceConnectionDidDisconnect:(id)arg1;
- (id)serviceConnections;
- (id)serviceName;
- (void)setClientCount:(unsigned long)arg1;
- (void)setListener:(id)arg1;
- (void)setServiceConnections:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownCompletionBlock:(id /* block */)arg1;
- (void)start;
- (id)workQueue;
- (void)workQueueHandleIncomingConnection:(id)arg1;

@end
