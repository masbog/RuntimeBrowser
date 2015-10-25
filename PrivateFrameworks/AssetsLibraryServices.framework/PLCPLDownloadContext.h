/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLCPLDownloadContext : NSObject {
    BOOL _completed;
    NSError *_error;
    double _progress;
    NSString *_resourceTypeDescription;
    NSString *_taskIdentifier;
    double _updateLastQueuedTime;
}

@property BOOL completed;
@property (retain) NSError *error;
@property double progress;
@property (retain) NSString *resourceTypeDescription;
@property (retain) NSString *taskIdentifier;
@property double updateLastQueuedTime;

- (BOOL)completed;
- (void)dealloc;
- (id)description;
- (id)error;
- (double)progress;
- (id)resourceTypeDescription;
- (void)setCompleted:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setResourceTypeDescription:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setUpdateLastQueuedTime:(double)arg1;
- (id)taskIdentifier;
- (double)updateLastQueuedTime;

@end
