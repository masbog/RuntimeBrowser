/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceContainer : NSObject {
    NSMutableSet *_listeners;
    FTCServiceMonitor *_monitor;
}

@property (nonatomic, readonly, retain) NSMutableSet *listeners;
@property (nonatomic, retain) FTCServiceMonitor *monitor;

- (BOOL)addListenerID:(id)arg1;
- (void)dealloc;
- (BOOL)hasListenerID:(id)arg1;
- (id)initWithServiceType:(int)arg1;
- (id)listeners;
- (id)monitor;
- (BOOL)removeListenerID:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
