/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {
    BOOL _active;
    NSXPCConnection *_connection;
    int _endPolicy;
    TKSmartCardSlotEngine *_slot;
    BOOL _transmitting;
    BOOL _valid;
}

@property BOOL active;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property int endPolicy;
@property BOOL valid;

- (void).cxx_destruct;
- (BOOL)active;
- (id)connection;
- (void)dealloc;
- (int)endPolicy;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setEndPolicy:(int)arg1;
- (void)setSessionEndPolicy:(int)arg1;
- (void)setValid:(BOOL)arg1;
- (void)terminateWithReply:(id /* block */)arg1;
- (void)transmit:(id)arg1 reply:(id /* block */)arg2;
- (BOOL)valid;

@end
