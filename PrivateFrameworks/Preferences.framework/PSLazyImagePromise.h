/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLazyImagePromise : NSObject {
    UIImage *_image;
    NSBundle *_imageBundle;
    BOOL _imageLoaded;
    NSString *_imageName;
    NSString *_imagePath;
    id /* block */ _loadBlock;
}

@property (nonatomic, readonly) UIImage *image;
@property (getter=isImageLoaded, nonatomic, readonly) BOOL imageLoaded;

+ (id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imagePromiseWithImagePath:(id)arg1;
+ (id)imagePromiseWithLoadBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)image;
- (BOOL)isImageLoaded;
- (void)loadImage;

@end