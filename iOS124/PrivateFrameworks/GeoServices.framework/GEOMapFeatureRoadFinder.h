//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder
{
    _Bool _flipNegativeTravelDirectionRoads;
    _Bool _visitDoubleTravelDirectionRoadsTwice;
    GEOTileLoader *_tileLoader;
}

@property(nonatomic) _Bool visitDoubleTravelDirectionRoadsTwice; // @synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice;
@property(nonatomic) _Bool flipNegativeTravelDirectionRoads; // @synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads;
- (void).cxx_destruct;
- (id)findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTileLoader:(id)arg1;

@end

