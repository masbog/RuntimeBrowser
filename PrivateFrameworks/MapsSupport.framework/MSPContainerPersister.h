/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPContainerPersister : NSObject {
    <MSPContainerPersisterDelegate> *_delegate;
    int _duplicatesPolicy;
}

@property (nonatomic) <MSPContainerPersisterDelegate> *delegate;
@property (nonatomic, readonly) int duplicatesPolicy;

- (void).cxx_destruct;
- (void)commitEditedContents:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (int)duplicatesPolicy;
- (void)fetchContentsWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
