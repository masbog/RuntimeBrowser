/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding> {
    AVAudioPCMBuffer *_audioBuffer;
    AVAudioFile *_audioFile;
    NSString *_audioName;
    NSURL *_audioURL;
    BOOL _loaded;
    BOOL _loops;
    BOOL _shouldStream;
    BOOL positional;
    float rate;
    float reverbBlend;
    float volume;
}

@property (nonatomic) BOOL loops;
@property (getter=isPositional, nonatomic) BOOL positional;
@property (nonatomic) float rate;
@property (nonatomic) float reverbBlend;
@property (nonatomic) BOOL shouldStream;
@property (nonatomic) float volume;

+ (id)audioSourceNamed:(id)arg1;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_customDecodingOfSCNAudioSource:(id)arg1;
- (void)_customEncodingOfSCNAudioSource:(id)arg1;
- (void)_load;
- (void)_loadURLWithBundle:(id)arg1;
- (id)audioBuffer;
- (id)audioBufferFormat;
- (id)audioFile;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)initWithAVAudioPCMBuffer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithFileNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isPositional;
- (void)load;
- (void)loadIfNeeded;
- (BOOL)loops;
- (float)rate;
- (int)renderingAlgorithm;
- (float)reverbBlend;
- (void)setLoops:(BOOL)arg1;
- (void)setPositional:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setReverbBlend:(float)arg1;
- (void)setShouldStream:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)shouldStream;
- (float)volume;

@end
