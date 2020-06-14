//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFExecutionEnvironmentObserver-Protocol.h>
#import <Home/HFHomeManagerObserver-Protocol.h>

@class HFExecutionEnvironment, HFHomeKitDispatcher, HMHome, NSString;

@interface HFWiFiExecutionEnvironmentObserver : NSObject <HFHomeManagerObserver, HFExecutionEnvironmentObserver>
{
    HFExecutionEnvironment *_environment;
    HFHomeKitDispatcher *_dispatcher;
    HMHome *_lastKnownHome;
    unsigned long long _lastKnownRunningState;
}

@property(nonatomic) unsigned long long lastKnownRunningState; // @synthesize lastKnownRunningState=_lastKnownRunningState;
@property(retain, nonatomic) HMHome *lastKnownHome; // @synthesize lastKnownHome=_lastKnownHome;
@property(readonly, nonatomic) __weak HFHomeKitDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) __weak HFExecutionEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)_updateState;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initWithExecutionEnvironment:(id)arg1 dispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

