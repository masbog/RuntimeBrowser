/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {
    CPLEngineLibrary *_engineLibrary;
    CPLPlatformObject *_platformObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (BOOL)canBatchResourceDownloadTasks:(id)arg1 :(id)arg2;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)engineLibrary;
- (id)getAssetCountsTaskWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (id)removeLibraryTaskWithCompletionHandler:(id /* block */)arg1;
- (id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)runResourceDownloadTasks:(id)arg1;
- (id)setupTaskCreateLibraryIfNecessary:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (BOOL)supportsDelayedUploads;
- (id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
