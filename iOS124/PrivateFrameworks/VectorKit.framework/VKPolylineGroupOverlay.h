//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKOverlay-Protocol.h>

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay>
{
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet *_observers;
    VKPolylineOverlay *_selectedPolyline;
    _Bool _containsTransit;
    _Bool _showTraffic;
}

@property(nonatomic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(readonly, nonatomic) _Bool containsTransit; // @synthesize containsTransit=_containsTransit;
@property(retain, nonatomic) VKPolylineOverlay *selectedPolyline; // @synthesize selectedPolyline=_selectedPolyline;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSSet *polylines; // @synthesize polylines=_polylines;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_updateContainsTransit;
- (void)_updateBoundingMapRegion;
- (void)removePolyline:(id)arg1;
- (void)addPolyline:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

