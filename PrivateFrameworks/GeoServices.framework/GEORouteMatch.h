/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMatch : NSObject {
    NSArray *_candidateSteps;
    unsigned int _consecutiveProgressionsOffRoute;
    double _distanceFromRoute;
    double _distanceTraveledOffRoute;
    BOOL _isGoodMatch;
    struct { 
        double latitude; 
        double longitude; 
    } _locationCoordinate;
    double _matchedCourse;
    double _modifiedCourseAccuracy;
    double _modifiedHorizontalAccuracy;
    GEORouteMatch *_projectedFrom;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; } *_road;
    double _roadWidth;
    GEOComposedRoute *_route;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeCoordinate;
    unsigned int _stepIndex;
    NSDate *_timestamp;
    unsigned long long _transitID;
}

@property (nonatomic, retain) NSArray *candidateSteps;
@property (nonatomic) unsigned int consecutiveProgressionsOffRoute;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) BOOL isGoodMatch;
@property (nonatomic) struct { double x1; double x2; } locationCoordinate;
@property (nonatomic, readonly) double matchedCourse;
@property (nonatomic) double modifiedCourseAccuracy;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic, retain) GEORouteMatch *projectedFrom;
@property (nonatomic, readonly) BOOL projectedPastEndOfLeg;
@property (nonatomic) struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; }*road;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readonly) BOOL routeMatchedToEnd;
@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic) unsigned int stepIndex;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) unsigned long long transitID;
@property (nonatomic, readonly) GEOComposedTransitStationRouteStep *transitStationStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *transitTripStep;

- (id).cxx_construct;
- (id)candidateSteps;
- (unsigned int)consecutiveProgressionsOffRoute;
- (void)dealloc;
- (id)description;
- (double)distanceFromRoute;
- (double)distanceTraveledOffRoute;
- (double)fractionOfCurrentStepTraveled;
- (unsigned int)hash;
- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 locationCoordinate:(struct { double x1; double x2; })arg3 stepIndex:(unsigned int)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringScore:(id)arg1;
- (BOOL)isGoodMatch;
- (struct { double x1; double x2; })locationCoordinate;
- (double)matchedCourse;
- (double)modifiedCourseAccuracy;
- (double)modifiedHorizontalAccuracy;
- (id)projectedFrom;
- (BOOL)projectedPastEndOfLeg;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; }*)road;
- (double)roadWidth;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (BOOL)routeMatchBehind:(id)arg1;
- (BOOL)routeMatchedToEnd;
- (void)setCandidateSteps:(id)arg1;
- (void)setConsecutiveProgressionsOffRoute:(unsigned int)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceTraveledOffRoute:(double)arg1;
- (void)setIsGoodMatch:(BOOL)arg1;
- (void)setLocationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setModifiedCourseAccuracy:(double)arg1;
- (void)setModifiedHorizontalAccuracy:(double)arg1;
- (void)setProjectedFrom:(id)arg1;
- (void)setRoad:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; }*)arg1;
- (void)setStepIndex:(unsigned int)arg1;
- (void)setTransitID:(unsigned long long)arg1;
- (id)step;
- (unsigned int)stepIndex;
- (id)timestamp;
- (unsigned long long)transitID;
- (id)transitStationStep;
- (id)transitTripStep;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;
- (void)updateWithMinRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;

@end
