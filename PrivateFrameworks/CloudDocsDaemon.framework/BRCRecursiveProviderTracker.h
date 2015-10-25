/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRecursiveProviderTracker : NSObject {
    NSMutableSet *_documentIDs;
    NSObject<OS_dispatch_group> *_group;
    id /* block */ _handler;
    NSString *_key;
}

@property (nonatomic, readonly) NSEnumerator *documentIDsEnumerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *group;
@property (nonatomic, readonly) NSString *key;

- (void).cxx_destruct;
- (id /* block */)completionHandlerFor:(id)arg1;
- (id)description;
- (id)documentIDsEnumerator;
- (id)group;
- (id)init;
- (id)initWithKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)key;
- (void)run;

@end
