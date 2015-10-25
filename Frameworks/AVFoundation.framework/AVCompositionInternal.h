/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionInternal : NSObject {
    NSDictionary *URLAssetInitializationOptions;
    AVAssetInspector *assetInspector;
    long assetInspectorInitializationOnce;
    AVAssetInspectorLoader *assetInspectorLoader;
    struct OpaqueFigFormatReader { } *formatReader;
    long formatReaderInitializationOnce;
    struct OpaqueFigMutableComposition { } *mutableComposition;
    struct CGSize { 
        float width; 
        float height; 
    } naturalSize;
    NSMutableArray *tracks;
    long tracksInitializationOnce;
}

@end