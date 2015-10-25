/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEmbeddedMediaView : UIControl {
    <SKUIEmbeddedMediaViewDelegate> *_delegate;
    int _mediaType;
    NSString *_mediaURLString;
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    BOOL _usingInlinePlayback;
}

@property (nonatomic) <SKUIEmbeddedMediaViewDelegate> *delegate;
@property (nonatomic) int mediaType;
@property (nonatomic, copy) NSString *mediaURLString;
@property (nonatomic, readonly) int playbackState;
@property (nonatomic) BOOL showsThumbnailReflection;
@property (nonatomic) int thumbnailContentMode;
@property (nonatomic, retain) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (void)_didExitFullscreen:(id)arg1;
- (void)_didFinishPlayback:(id)arg1;
- (id)_newMoviePlayerControllerWithURL:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_sendPlaybackStateChanged;
- (struct CGSize { float x1; float x2; })_sizeToFitImageSize:(struct CGSize { float x1; float x2; })arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_tearDownMoviePlayer;
- (id)_thumbnailView;
- (void)beginInlinePlaybackWithURL:(id)arg1;
- (void)beginPlaybackAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)endPlaybackAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (int)mediaType;
- (id)mediaURLString;
- (int)playbackState;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setMediaURLString:(id)arg1;
- (void)setShowsThumbnailReflection:(BOOL)arg1;
- (void)setThumbnailContentMode:(int)arg1;
- (void)setThumbnailImage:(id)arg1;
- (BOOL)showsThumbnailReflection;
- (int)thumbnailContentMode;
- (id)thumbnailImage;

@end
