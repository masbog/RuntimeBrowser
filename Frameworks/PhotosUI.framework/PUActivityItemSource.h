/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemSource> {
    NSURL *__assetURL;
    NSURL *__assetsLibraryURL;
    int __imageManagerImageRequestID;
    int __imageManagerVideoRequestID;
    NSDictionary *__pasteboardRepresentation;
    int __remakerWasCancelled;
    NSURL *__videoComplementAssetURL;
    NSURL *__videoRemakerURL;
    PHAsset *_asset;
    id /* block */ _completionHandler;
    _PUActivityItemSourceOperation *_currentOperation;
    BOOL _hasRecognizedVideoAdjustments;
    NSURL *_photoIrisBundleURL;
    id /* block */ _postCompletionHandler;
    id /* block */ _progressHandler;
    PLVideoRemaker *_remaker;
    id /* block */ _remakerCompletionHandler;
    id _strongSelf;
    BOOL _useStillImage;
}

@property (setter=_setAssetURL:, retain) NSURL *_assetURL;
@property (setter=_setAssetsLibraryURL:, retain) NSURL *_assetsLibraryURL;
@property (setter=_setImageManagerImageRequestID:) int _imageManagerImageRequestID;
@property (setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID;
@property (setter=_setPasteboardRepresentation:, retain) NSDictionary *_pasteboardRepresentation;
@property (setter=_setRemakerWasCancelled:) int _remakerWasCancelled;
@property (setter=_setVideoComplementAssetURL:, retain) NSURL *_videoComplementAssetURL;
@property (setter=_setVideoRemakerURL:, retain) NSURL *_videoRemakerURL;
@property (nonatomic, readonly) PHAsset *asset;
@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSURL *photoIrisBundleURL;
@property (copy) id /* block */ postCompletionHandler;
@property (copy) id /* block */ progressHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL useStillImage;

+ (BOOL)supportsPhotoIrisBundleForActivityType:(id)arg1;

- (void).cxx_destruct;
- (id)_assetURL;
- (id)_assetsLibraryURL;
- (void)_cancelVideoRemaking:(id)arg1;
- (void)_cleanupRemaker;
- (id)_createTempPhotoIrisBundle;
- (void)_fetchImageWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchPhotoIrisForActivityType:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3 wantsAssetsLibraryURL:(BOOL)arg4;
- (void)_fetchVideoForActivityType:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3 wantsAssetsLibraryURL:(BOOL)arg4;
- (int)_imageManagerImageRequestID;
- (int)_imageManagerVideoRequestID;
- (id)_itemForActivityType:(id)arg1;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (void)_operation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_pasteboardRepresentation;
- (int)_remakerWasCancelled;
- (void)_removeTempFile;
- (void)_setAssetURL:(id)arg1;
- (void)_setAssetsLibraryURL:(id)arg1;
- (void)_setImageManagerImageRequestID:(int)arg1;
- (void)_setImageManagerVideoRequestID:(int)arg1;
- (void)_setPasteboardRepresentation:(id)arg1;
- (void)_setRemakerWasCancelled:(int)arg1;
- (void)_setVideoComplementAssetURL:(id)arg1;
- (void)_setVideoRemakerURL:(id)arg1;
- (id)_videoComplementAssetURL;
- (id)_videoRemakerURL;
- (BOOL)_wantsAssetsLibraryURLForActivityType:(id)arg1;
- (BOOL)_wantsLocalAssetsForActivityType:(id)arg1;
- (BOOL)_wantsPhotoIrisBundleForActivityType:(id)arg1;
- (BOOL)_wantsVideoRemakerForActivityType:(id)arg1 adjustmentData:(id)arg2 wantsAssetsLibraryURL:(BOOL)arg3;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { float x1; float x2; })arg3;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)asset;
- (void)cancel;
- (void)cancelRemaking;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 useStillImage:(BOOL)arg2;
- (id)photoIrisBundleURL;
- (id /* block */)postCompletionHandler;
- (id /* block */)progressHandler;
- (void)remakeVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2 forMail:(BOOL)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)runWithActivityType:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPhotoIrisBundleURL:(id)arg1;
- (void)setPostCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (BOOL)useStillImage;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;

@end
