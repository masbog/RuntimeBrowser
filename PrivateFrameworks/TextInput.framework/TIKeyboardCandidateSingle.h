/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {
    NSString *_candidate;
    BOOL _extensionCandidate;
    NSString *_input;
}

@property (nonatomic, copy) NSString *candidate;
@property (getter=isExtensionCandidate, nonatomic) BOOL extensionCandidate;
@property (nonatomic, copy) NSString *input;

+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnchangedInput:(id)arg1;
- (id)input;
- (BOOL)isExtensionCandidate;
- (void)setCandidate:(id)arg1;
- (void)setExtensionCandidate:(BOOL)arg1;
- (void)setInput:(id)arg1;

@end
