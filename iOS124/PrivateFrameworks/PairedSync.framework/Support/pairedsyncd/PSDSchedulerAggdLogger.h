//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDSchedulerObserver-Protocol.h"

@class NSString, NSURL, PSDSchedulerAggdSessionState;

@interface PSDSchedulerAggdLogger : NSObject <PSDSchedulerObserver>
{
    PSDSchedulerAggdSessionState *_sessionState;
    NSURL *_sessionStateURL;
}

+ (id)defaultLogger;
@property(retain, nonatomic) NSURL *sessionStateURL; // @synthesize sessionStateURL=_sessionStateURL;
@property(retain, nonatomic) PSDSchedulerAggdSessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void).cxx_destruct;
- (id)binNameForDuration:(double)arg1 bins:(int *)arg2 count:(int)arg3;
- (id)aggdKeyForActivityIdentifier:(id)arg1;
- (void)addValue:(long long)arg1 forScalarKey:(id)arg2 clearBeforeAdding:(_Bool)arg3;
- (void)logDurationForActivityWithIdentifier:(id)arg1 bins:(int *)arg2 binCount:(int)arg3;
- (void)clearSessionState;
- (void)saveSessionState;
- (void)didFinishSession;
- (void)didFinishActivity:(id)arg1;
- (void)activityDidCompleteSending:(id)arg1;
- (void)didStartActivity:(id)arg1;
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;
- (id)initWithSessionState:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

