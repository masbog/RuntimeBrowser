/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainersMonitor : NSObject {
    NSMutableDictionary *_notifyTokenByContainerID;
    NSMutableDictionary *_observersByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (BOOL)isContainerID:(id)arg1;
+ (BOOL)isContainerIDForeground:(id)arg1;

- (void)addObserver:(id)arg1 forContainerID:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)removeObserver:(id)arg1 forContainerID:(id)arg2;

@end
