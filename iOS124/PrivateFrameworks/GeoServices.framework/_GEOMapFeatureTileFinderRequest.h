//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapFeatureAccessRequest-Protocol.h>

@class GEOMapFeatureTileFinder, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest>
{
    GEOMapFeatureTileFinder *_tileFinder;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTileFinder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

