//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject
{
    CDStruct_2c43369c _coordinate;
    CDStruct_6e3f967a _tilePoint;
    GEOVectorTile *_tile;
}

+ (_Bool)_isPointOnTileBorder:(CDStruct_6e3f967a)arg1;
+ (id)junctionForRoadFeature:(CDStruct_a2ef2718 *)arg1 startJunction:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) _Bool isOnTileBorder;
@property(readonly, nonatomic) CDStruct_3b01f0aa *connectivityJunction;
@property(readonly, nonatomic) CDStruct_6e3f967a tilePoint;
@property(readonly, nonatomic) GEOVectorTile *tile;

@end

