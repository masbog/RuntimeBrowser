/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchProvider : NSObject {
    id /* block */ _error;
}

@property (nonatomic, copy) id /* block */ error;

- (void)cancel;
- (void)dealloc;
- (id /* block */)error;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)setError:(id /* block */)arg1;

@end