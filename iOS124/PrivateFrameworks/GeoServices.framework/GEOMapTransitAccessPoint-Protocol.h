//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapTransitPoint-Protocol.h>

@class GEOMapRequest;

@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property(readonly, nonatomic) unsigned short accessType;
@property(readonly, nonatomic) unsigned char entranceExitType;
@property(readonly, nonatomic) double groundRadius;
@property(readonly, nonatomic) unsigned long long stationID;
- (GEOMapRequest *)findStation:(void (^)(id <GEOMapTransitStation>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findStops:(void (^)(id <GEOMapTransitStop>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
@end

