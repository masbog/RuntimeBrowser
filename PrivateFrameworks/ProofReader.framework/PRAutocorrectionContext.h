/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRAutocorrectionContext : NSObject {
    unsigned int _modificationMask;
}

+ (id)autocorrectionContextOfType:(unsigned int)arg1;

- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (id)addedModifications;
- (id)completions;
- (id)currentModifications;
- (id)guesses;
- (unsigned int)modificationMask;
- (id)prefixes;
- (id)removedModifications;
- (void)reset;
- (void)setModificationMask:(unsigned int)arg1;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (double)validSequenceCorrectionThreshold;

@end
