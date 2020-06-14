//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFEventBuilder.h>

#import <Home/HFLocationEventBuilder-Protocol.h>

@class CLCircularRegion, NSString;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder>
{
    CLCircularRegion *_region;
}

@property(copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isRegionAtHome:(id)arg1;
- (id)buildNewEventFromCurrentState;
@property(readonly, nonatomic) unsigned long long eventType;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

