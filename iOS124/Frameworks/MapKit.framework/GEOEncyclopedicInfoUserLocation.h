//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOEncyclopedicInfo-Protocol.h>

@class GEOMapItemAttribution, MKMapItem, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo>
{
    MKMapItem *_mapItem;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)arg1;
@property(readonly, nonatomic) NSArray *factoids;
@property(readonly, nonatomic) _Bool hasPairOfFactoids;
@property(readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic) NSString *textBlockText;
@property(readonly, nonatomic) NSString *textBlockTitle;
@property(readonly, nonatomic) _Bool hasTextBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

