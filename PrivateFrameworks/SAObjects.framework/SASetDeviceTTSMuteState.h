/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (nonatomic) BOOL textToSpeechIsMuted;

+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTextToSpeechIsMuted:(BOOL)arg1;
- (BOOL)textToSpeechIsMuted;

@end
