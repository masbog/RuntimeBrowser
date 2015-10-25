/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate> {
    <RPPreviewViewControllerDelegate> *_previewControllerDelegate;
}

@property (nonatomic) <RPPreviewViewControllerDelegate> *previewControllerDelegate;

+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)extensionDidFinishWithActivityTypes:(id)arg1;
- (id)previewControllerDelegate;
- (void)setPreviewControllerDelegate:(id)arg1;
- (void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
