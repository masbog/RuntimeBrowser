/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADOperationGroup : NSObject {
    ClientConnection *_conn;
}

@property (nonatomic, readonly) ClientConnection *conn;

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
+ (id)whitelistedBundles;

- (void).cxx_destruct;
- (BOOL)accessGrantedToPerformSelector:(SEL)arg1;
- (id)conn;
- (id)initWithClientConnection:(id)arg1;

@end
