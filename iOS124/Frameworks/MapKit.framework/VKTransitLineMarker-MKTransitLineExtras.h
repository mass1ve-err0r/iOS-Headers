//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTransitLineMarker.h>

#import <MapKit/GEOTransitArtworkDataSource-Protocol.h>
#import <MapKit/GEOTransitShieldDataSource-Protocol.h>
#import <MapKit/MKTransitLineMarker-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@interface VKTransitLineMarker (MKTransitLineExtras) <MKTransitLineMarker, GEOTransitShieldDataSource, GEOTransitArtworkDataSource>
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) NSString *shieldColorString;
@property(readonly, nonatomic) _Bool hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) long long artworkUseType;
@property(readonly, nonatomic) long long artworkSourceType;
- (id)artwork;
- (id)mapItemIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *shieldText;
@property(readonly, nonatomic) long long shieldType;
@property(readonly) Class superclass;
@end
