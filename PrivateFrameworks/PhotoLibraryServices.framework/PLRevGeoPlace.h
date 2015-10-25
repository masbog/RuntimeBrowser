/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoPlace : NSObject {
    BOOL _isHome;
    PLRevGeoPlaceAnnotation *_placeAnnotation;
    NSMutableArray *_placeTypeInfoMap;
}

@property (nonatomic) BOOL isHome;

+ (id /* block */)sortedAdditionalPlaceInfoComparator;

- (void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned int)arg3;
- (unsigned int)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned int)arg2;
- (void)_mergeGEOMapItem:(id)arg1;
- (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned int*)arg3 outPreviousOrderType:(unsigned int*)arg4;
- (id)_placeInfosForOrderType:(unsigned int)arg1 createIfNeeded:(BOOL)arg2;
- (void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned int)arg2;
- (id)bestPlaceInfoForOrderType:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithGEOMapItem:(id)arg1 placeAnnotationData:(id)arg2;
- (BOOL)isHome;
- (id)minimumAreaForOrderType:(unsigned int)arg1 name:(id)arg2;
- (id)placeInfosForOrderType:(unsigned int)arg1;
- (void)setIsHome:(BOOL)arg1;

@end