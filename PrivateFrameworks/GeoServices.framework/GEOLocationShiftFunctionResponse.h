/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionResponse : NSObject {
    double _creationTime;
    BOOL _isPolyLocationShift;
    struct { 
        double latitude; 
        double longitude; 
    } _originalCoordinate;
    double _params;
    double _radius;
    struct { 
        double latitude; 
        double longitude; 
    } _shiftedCoordinate;
    BOOL _shouldUsePolyShiftFunction;
}

@property (nonatomic) struct { double x1; double x2; } originalCoordinate;

- (id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2;
- (BOOL)isValidForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (void)setOriginalCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })shiftedCoordinateForCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double*)arg2;

@end