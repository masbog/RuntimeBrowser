/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObservable : NSObject <CNObservable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)combineLatest:(id)arg1;
+ (id)concatenate:(id)arg1;
+ (id)emptyObservable;
+ (id)forkJoin:(id)arg1 scheduler:(id)arg2;
+ (id)merge:(id)arg1;
+ (id)neverObservable;
+ (id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned int)arg3;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3;
+ (id)observableWithBlock:(id /* block */)arg1;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 delay:(id /* block */)arg5 scheduler:(id)arg6;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 scheduler:(id)arg5;
+ (id)observableWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)observableWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheduler:(id)arg2;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithResults:(id)arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithTimeInterval:(double)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 scheduler:(id)arg3;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;
+ (id)progressiveForkJoin:(id)arg1 scheduler:(id)arg2;
+ (id)timerWithDelay:(double)arg1;
+ (id)timerWithDelay:(double)arg1 scheduler:(id)arg2;

- (id)allObjects:(id*)arg1;
- (id)buffer:(unsigned int)arg1;
- (id)delay:(double)arg1 scheduler:(id)arg2;
- (id)delaySubscription:(double)arg1 scheduler:(id)arg2;
- (id)distinct;
- (id)distinctUntilChanged;
- (id)doOnCancel:(id /* block */)arg1;
- (id)doOnCompletion:(id /* block */)arg1;
- (id)doOnError:(id /* block */)arg1;
- (id)doOnNext:(id /* block */)arg1;
- (id)doOnSubscribe:(id /* block */)arg1;
- (id)doOnTerminate:(id /* block */)arg1;
- (id)filter:(id /* block */)arg1;
- (id)map:(id /* block */)arg1;
- (id)observeOn:(id)arg1;
- (id)onEmpty:(id)arg1;
- (id)onError:(id)arg1;
- (id)onErrorHandler:(id /* block */)arg1;
- (id)skip:(unsigned int)arg1;
- (id)skipLast:(unsigned int)arg1;
- (id)sort:(id /* block */)arg1;
- (id)startWith:(id)arg1;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)subscribe:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)take:(unsigned int)arg1;
- (id)takeLast:(unsigned int)arg1;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)timeoutAfterDelay:(double)arg1 alternateObservable:(id)arg2 schedule:(id)arg3;
- (id)toArray;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (id)activityIndicatingObservableWithActivityDidStartHandler:(id /* block */)arg1 activityDidStopHandler:(id /* block */)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 scheduler:(id)arg2;
- (id)localObservableWithScheduler:(id)arg1;
- (id)networkObservableWithActivityDidStartHandler:(id /* block */)arg1 activityDidStopHandler:(id /* block */)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;

@end
