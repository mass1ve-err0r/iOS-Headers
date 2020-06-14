//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEONameInfo, GEONameInfoList, NSMutableArray;

@protocol GEOCompanionManeuverStep <NSObject>
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
@property(nonatomic) int junctionType;
@property(nonatomic) _Bool hasJunctionType;
@property(retain, nonatomic) NSMutableArray *signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames;
@property(nonatomic) int maneuverType;
@property(nonatomic) _Bool hasManeuverType;
- (GEONameInfo *)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)addSignpost:(GEONameInfo *)arg1;
- (void)clearSignposts;
- (GEONameInfoList *)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)addManeuverName:(GEONameInfoList *)arg1;
- (void)clearManeuverNames;
@end

