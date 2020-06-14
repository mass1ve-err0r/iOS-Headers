//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DNDStateUpdateListener-Protocol.h"

@class BSTimer, DNDStateService, NSHashTable, NSString;

@interface SBDashBoardDNDBedtimeController : NSObject <DNDStateUpdateListener>
{
    DNDStateService *_stateService;
    NSHashTable *_observers;
    BSTimer *_greetingGracePeriodTimer;
    _Bool _deactivated;
    _Bool _active;
    _Bool _shouldShowGreeting;
}

@property(nonatomic) _Bool shouldShowGreeting; // @synthesize shouldShowGreeting=_shouldShowGreeting;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)_cleanUpGreetingGracePeriodTimer;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStateService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

