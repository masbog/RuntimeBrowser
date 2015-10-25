/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfDestination : NSObject {
    NSString *_name;
    struct CGPoint { 
        float x; 
        float y; 
    } _point;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } point;

+ (id)pdfDestinationWithName:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2;

- (void)dealloc;
- (id)initWithName:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (id)name;
- (struct CGPoint { float x1; float x2; })point;

@end
