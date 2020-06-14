//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSUUID;
@protocol HDWorkoutEventCollectorDelegate;

@interface HDWorkoutEventCollector : NSObject
{
    id <HDWorkoutEventCollectorDelegate> _delegate;
    NSUUID *_sessionId;
    HDProfile *_profile;
}

+ (_Bool)isAvailableInCurrentHardware;
@property(readonly) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly) __weak id <HDWorkoutEventCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestPendingEventsThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)supportsWorkoutActivityType:(unsigned long long)arg1;
- (void)stop;
- (void)startWithSessionId:(id)arg1;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;

@end

