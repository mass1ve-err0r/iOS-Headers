//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAdAnalyticsEvent.h>

@interface SXVideoAdAnalyticsEvent : SXAdAnalyticsEvent
{
    double _duration;
    double _timePlayed;
}

@property(readonly, nonatomic) double timePlayed; // @synthesize timePlayed=_timePlayed;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7;

@end

