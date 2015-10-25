/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaProcessor : NSObject {
    struct OpaqueFigSampleBufferProcessor { } *__processor;
    BOOL _capturingPanorama;
    <CAMPanoramaProcessorDelegate> *_delegate;
    int _direction;
    struct CGSize { 
        float width; 
        float height; 
    } _previewSize;
    CAMPanoramaCaptureRequest *_request;
}

@property (nonatomic, readonly) struct OpaqueFigSampleBufferProcessor { }*_processor;
@property (getter=isCapturingPanorama, nonatomic) BOOL capturingPanorama;
@property (nonatomic, readonly) <CAMPanoramaProcessorDelegate> *delegate;
@property (nonatomic) int direction;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } previewSize;
@property (nonatomic, retain) CAMPanoramaCaptureRequest *request;

- (void).cxx_destruct;
- (struct OpaqueFigSampleBufferProcessor { }*)_processor;
- (void)_setCapturingPanorama:(BOOL)arg1;
- (void)_setRequest:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)direction;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (BOOL)isCapturingPanorama;
- (struct CGSize { float x1; float x2; })previewSize;
- (void)processPanoramaCaptureWithCompletionHandler:(id /* block */)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)request;
- (void)setDirection:(int)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)stopPanoramaCapture;

@end
