//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionProviderObserver-Protocol.h>
#import <DoNotDisturbServer/DNDSModeAssertionTransformer-Protocol.h>

@class DNDSLocalAssertionManager, DNDSScheduleSettings, NSString, NSUUID;
@protocol DNDSScheduleManagerDataSource, OS_dispatch_queue;

@interface DNDSScheduleManager : NSObject <DNDSModeAssertionProviderObserver, DNDSModeAssertionTransformer>
{
    NSObject<OS_dispatch_queue> *_queue;
    DNDSLocalAssertionManager *_localAssertionManager;
    NSUUID *_currentAssertionUUID;
    DNDSScheduleSettings *_currentScheduleSettings;
    id <DNDSScheduleManagerDataSource> _dataSource;
}

@property(nonatomic) __weak id <DNDSScheduleManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_queue_refreshWithDate:(id)arg1;
- (id)transformedModeIdentifierForModeAssertion:(id)arg1;
- (id)transformedLifetimeForModeAssertion:(id)arg1;
- (void)modeAssertionProvider:(id)arg1 didPerformInvalidations:(id)arg2;
- (void)refresh;
- (id)initWithLocalAssertionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

