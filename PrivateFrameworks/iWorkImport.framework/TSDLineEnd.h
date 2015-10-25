/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface TSDLineEnd : NSObject <NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    } mEndPoint;
    NSString *mIdentifier;
    BOOL mIsFilled;
    int mLineJoin;
    struct CGPath { } *mPath;
    struct CGPath { } *mWrapPath;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } endPoint;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isFilled;
@property (nonatomic, readonly) BOOL isNone;
@property (nonatomic, readonly) int lineJoin;
@property (nonatomic, readonly) struct CGPath { }*path;
@property (nonatomic, readonly) struct CGPath { }*wrapPath;

+ (id)filledArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)filledSquare;
+ (id)invertedArrow;
+ (id)line;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithPath:(struct CGPath { }*)arg1 endPoint:(struct CGPoint { float x1; float x2; })arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
+ (id)lineEndWithPath:(struct CGPath { }*)arg1 wrapPath:(struct CGPath { }*)arg2 endPoint:(struct CGPoint { float x1; float x2; })arg3 isFilled:(BOOL)arg4 identifier:(id)arg5;
+ (id)lineEndWithType:(int)arg1;
+ (id)none;
+ (id)openArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)simpleArrow;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint { float x1; float x2; })endPoint;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithPath:(struct CGPath { }*)arg1 endPoint:(struct CGPoint { float x1; float x2; })arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
- (id)initWithPath:(struct CGPath { }*)arg1 wrapPath:(struct CGPath { }*)arg2 endPoint:(struct CGPoint { float x1; float x2; })arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFilled;
- (BOOL)isNone;
- (int)lineJoin;
- (struct CGPath { }*)path;
- (struct CGPath { }*)wrapPath;

@end
