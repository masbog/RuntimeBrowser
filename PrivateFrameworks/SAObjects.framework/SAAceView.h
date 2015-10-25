/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceView : SABaseAceObject <SAAceSerializable>

@property (nonatomic, retain) <SAAceSerializable> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSNumber *deferredRendering;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSNumber *listenAfterSpeaking;
@property (nonatomic, copy) NSString *speakableText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewId;

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)deferredRendering;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (void)setContext:(id)arg1;
- (void)setDeferredRendering:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)speakableText;
- (id)viewId;

@end
