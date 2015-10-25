/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController

@property (nonatomic) BOOL colorSamplingEnabled;

- (void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)_wallPaperPreviewControllerForAsset:(id)arg1;
- (id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1;
- (BOOL)colorSamplingEnabled;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)initWithUIImage:(id)arg1 name:(id)arg2;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setColorSamplingEnabled:(BOOL)arg1;
- (void)setWallpaperForLocations:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)wallpaperImage;

@end
