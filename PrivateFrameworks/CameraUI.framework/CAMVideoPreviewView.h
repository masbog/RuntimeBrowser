/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoPreviewView : UIView {
    BOOL _disableLayoutForEffectsFullsizeView;
    BOOL _disableLayoutForEffectsGridViews;
    BOOL _disableLayoutForPreviewView;
    CAMEffectsFullsizeView *_effectsFullsizeView;
    CAMEffectsGridLabelsView *_effectsGridLabelsView;
    CAMEffectsGridView *_effectsGridView;
    UIView *_fadeOutView;
    int _orientation;
    UIView *_previewLayerView;
    int _previewViewAspectMode;
    BOOL _square;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
}

@property (getter=isDisabledLayoutForEffectsFullsizeView, nonatomic) BOOL disableLayoutForEffectsFullsizeView;
@property (getter=isDisabledLayoutForEffectsGridViews, nonatomic) BOOL disableLayoutForEffectsGridViews;
@property (getter=isDisabledLayoutForPreviewView, nonatomic) BOOL disableLayoutForPreviewView;
@property (nonatomic, readonly) CAMEffectsFullsizeView *effectsFullsizeView;
@property (nonatomic, readonly) CAMEffectsGridLabelsView *effectsGridLabelsView;
@property (nonatomic, readonly) CAMEffectsGridView *effectsGridView;
@property (nonatomic, readonly) UIView *fadeOutView;
@property (nonatomic) int orientation;
@property (nonatomic, readonly) UIView *previewLayerView;
@property (nonatomic) int previewViewAspectMode;
@property (getter=isSquare, nonatomic) BOOL square;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForSubviewsAccountForSquare:(BOOL)arg1;
- (void)_updateAspectModeForSublayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSublayer:(id)arg2;
- (void)createEffectsFullsizeView;
- (void)createEffectsGridViews;
- (void)dealloc;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(BOOL)arg1;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(BOOL)arg1;
- (id)effectsFullsizeView;
- (id)effectsGridLabelsView;
- (id)effectsGridView;
- (id)fadeOutView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisabledLayoutForEffectsFullsizeView;
- (BOOL)isDisabledLayoutForEffectsGridViews;
- (BOOL)isDisabledLayoutForPreviewView;
- (BOOL)isSquare;
- (void)layoutSubviews;
- (int)orientation;
- (id)previewLayerView;
- (int)previewViewAspectMode;
- (void)setDisableLayoutForEffectsFullsizeView:(BOOL)arg1;
- (void)setDisableLayoutForEffectsGridViews:(BOOL)arg1;
- (void)setDisableLayoutForPreviewView:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setPreviewViewAspectMode:(int)arg1;
- (void)setSquare:(BOOL)arg1;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)videoPreviewLayer;

@end
