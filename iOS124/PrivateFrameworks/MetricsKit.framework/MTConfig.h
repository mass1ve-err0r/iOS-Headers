//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject
{
    id <MTConfigDelegate> _delegate;
    long long _eventDataTimeout;
    NSDictionary *_debugSource;
}

@property(retain, nonatomic) NSDictionary *debugSource; // @synthesize debugSource=_debugSource;
@property(nonatomic) long long eventDataTimeout; // @synthesize eventDataTimeout=_eventDataTimeout;
@property(nonatomic) __weak id <MTConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)configValueForKeyPath:(id)arg1 default:(id)arg2;
- (id)computeWithConfigSources:(CDUnknownBlockType)arg1;
- (void)applyDeRes:(id)arg1 sources:(id)arg2;
- (void)removeBlacklistedFields:(id)arg1 sources:(id)arg2;
- (_Bool)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2;
- (id)deResFieldsForSources:(id)arg1;
- (id)blacklistedFieldsForSources:(id)arg1;
- (id)blacklistedEventsForSources:(id)arg1;
- (_Bool)disabledForSources:(id)arg1;
- (id)configValueForKeyPath:(id)arg1 sources:(id)arg2;
- (_Bool)_isEventDataTimeoutUnset;
- (id)sources;

@end

