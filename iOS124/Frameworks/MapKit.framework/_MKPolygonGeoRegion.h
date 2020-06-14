//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKGeoJSONCoverageRegion-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion>
{
    struct CLLocationCoordinate2D *_polygon;
    unsigned long long _vertexCount;
}

- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (_Bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

