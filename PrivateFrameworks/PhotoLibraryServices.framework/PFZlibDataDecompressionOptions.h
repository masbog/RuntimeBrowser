/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataDecompressionOptions : NSObject {
    id /* block */ _createBuffer;
    BOOL _decompressAllAtOnce;
    id /* block */ _growData;
    int _windowBits;
}

@property (nonatomic, copy) id /* block */ createBuffer;
@property (nonatomic) BOOL decompressAllAtOnce;
@property (nonatomic, copy) id /* block */ growData;
@property (nonatomic) int windowBits;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id /* block */)createBuffer;
- (BOOL)decompressAllAtOnce;
- (id /* block */)growData;
- (void)setCreateBuffer:(id /* block */)arg1;
- (void)setDecompressAllAtOnce:(BOOL)arg1;
- (void)setGrowData:(id /* block */)arg1;
- (void)setWindowBits:(int)arg1;
- (int)windowBits;

@end
