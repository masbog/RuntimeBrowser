/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate> {
    unsigned int _confidence;
    unsigned int _exitType;
    unsigned int _motionType;
    <GEOMotionContextProvider> *_provider;
}

@property (nonatomic, readonly) unsigned int confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int exitType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isDriving;
@property (nonatomic, readonly) BOOL isMoving;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) BOOL isWalking;
@property (nonatomic, readonly) unsigned int motionType;
@property (readonly) Class superclass;

- (unsigned int)confidence;
- (void)dealloc;
- (id)description;
- (unsigned int)exitType;
- (BOOL)isDriving;
- (BOOL)isMoving;
- (BOOL)isRunning;
- (BOOL)isWalking;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned int)arg2 exitType:(unsigned int)arg3 confidence:(unsigned int)arg4;
- (unsigned int)motionType;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)stopMotionUpdates;

@end
