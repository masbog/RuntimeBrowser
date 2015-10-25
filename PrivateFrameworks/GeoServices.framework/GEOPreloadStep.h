/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPreloadStep : NSObject {
    unsigned int bytesLoaded;
    unsigned int bytesLoadedFromNetwork;
    struct { 
        double latitude; 
        double longitude; 
    } coord;
    double endTime;
    unsigned int generation;
    unsigned int hasError;
    unsigned int hasLifetimeError;
    unsigned int loaded;
    unsigned int loading;
    unsigned int nearManeuver;
    unsigned int preempted;
    double routeIdx;
    double startTime;
    GEOTileKeyList *wantedTiles;
}

- (double)dataRateKB;
- (void)dealloc;
- (double)networkDataRateKB;
- (BOOL)okToLoad;
- (void)resetErrors;

@end
