/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater {
    GEOPBTransitStation *_alightStation;
    GEOComposedRouteStep *_alightStep;
    GEOPBTransitStop *_alightStop;
    GEOComposedRouteStep *_postAlightStep;
    GEOComposedRouteStep *_postAlightWalkingStep;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeCoordinateAlightStation;
}

- (id).cxx_construct;
- (BOOL)_isLocationNearAlightNode:(id)arg1;
- (void)dealloc;
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2;
- (BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
