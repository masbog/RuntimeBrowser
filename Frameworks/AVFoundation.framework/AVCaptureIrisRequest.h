/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureIrisRequest : NSObject {
    unsigned int _callbacksFired;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    unsigned int _firedCallbackFlags;
    AVCaptureIrisResolvedStillImageSettings *_resolvedSettings;
    AVCaptureIrisStillImageSettings *_unresolvedSettings;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic, retain) AVCaptureIrisResolvedStillImageSettings *resolvedSettings;
@property (readonly) AVCaptureIrisStillImageSettings *unresolvedSettings;

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2;

- (void)dealloc;
- (id)delegateStorage;
- (unsigned int)firedCallbackFlags;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (id)resolvedSettings;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setResolvedSettings:(id)arg1;
- (id)unresolvedSettings;

@end
