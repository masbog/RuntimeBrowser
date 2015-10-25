/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCIVideoMotionDetector : VCPCIVideoProcessor {
    BOOL _analysisEnabled;
    float _colGradient;
    int _curProjIndex;
    int _frameCount;
    double _lastFrameTimestamp;
    BOOL _outputRawMarkers;
    int _processedFrameCount;
    struct __sbp_Slowmo_Projection { 
        struct FastRegistration_Signatures { 
            float *piRow; 
            unsigned int nPiRow; 
            struct Projections_meanStdTable { 
                float *sumTable; 
                float *sumSqTable; 
            } piRowTable; 
            float *piCol; 
            unsigned int nPiCol; 
            struct Projections_meanStdTable { 
                float *sumTable; 
                float *sumSqTable; 
            } piColTable; 
        } signature; 
        float deltaRow[3264]; 
        float deltaCol[3264]; 
        unsigned int nDeltaRow; 
        unsigned int nDeltaCol; 
        unsigned char valid; 
        double timestamp; 
        void *allocatedBuffer; 
        struct vImage_Buffer { 
            void *data; 
            unsigned int height; 
            unsigned int width; 
            unsigned int rowBytes; 
        } allocatedvImage; 
    } _projections;
    BOOL _reprocess;
    NSDictionary *_result;
    VCPCISlowmoResults *_results;
    float _rowGradient;
    BOOL _skipSecondPass;
    double _startTimestamp;
    NSURL *_url;
    BOOL _verbose;
}

@property (readonly) NSDictionary *result;
@property (readonly) NSURL *url;

+ (id)motionDetectorWithURL:(id)arg1 options:(id)arg2;

- (unsigned char)calculateProjectionSignature:(struct __sbp_Slowmo_Projection { struct FastRegistration_Signatures { float *x_1_1_1; unsigned int x_1_1_2; struct Projections_meanStdTable { float *x_3_2_1; float *x_3_2_2; } x_1_1_3; float *x_1_1_4; unsigned int x_1_1_5; struct Projections_meanStdTable { float *x_6_2_1; float *x_6_2_2; } x_1_1_6; } x1; float x2[3264]; float x3[3264]; unsigned int x4; unsigned int x5; unsigned char x6; double x7; void *x8; struct vImage_Buffer { void *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; }*)arg1 buffer:(struct __CVBuffer { }*)arg2;
- (void)dealloc;
- (void)finishProcessing;
- (void)gradientForSignature:(float*)arg1 gradient:(float*)arg2 count:(int)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)processBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)processVideo;
- (id)result;
- (void)startProcessing;
- (id)url;

@end
