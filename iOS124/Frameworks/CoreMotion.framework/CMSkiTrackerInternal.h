//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMSkiData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMSkiTrackerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    _Bool fStartedUpdates;
    CMSkiData *fMostRecentRecord;
    CDUnknownBlockType fHandler;
    double fRunDistanceOffset;
    double fRunElevationDescendedOffset;
}

- (void)_handleUpdates:(id)arg1;
- (void)_queryUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopUpdates;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

