//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class CNContactStore, CNFavorites, NSMutableArray, NSString;
@protocol DNDSEventBehaviorResolverDataSource, DNDSModeRepository, OS_dispatch_queue;

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSModeRepository> _modeRepository;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSMutableArray *_resolutionRecord;
    id <DNDSEventBehaviorResolverDataSource> _dataSource;
}

@property(nonatomic) __weak id <DNDSEventBehaviorResolverDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)_queue_eventSourceIsEmergencyContact:(id)arg1;
- (_Bool)_queue_eventSourceIsRepeat:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3;
- (_Bool)_queue_eventSourceIsContact:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (_Bool)_queue_eventSourceIsContact:(id)arg1;
- (_Bool)_queue_eventSourceIsFavorite:(id)arg1;
- (unsigned long long)_queue_resolveOutcomeForEventSource:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3 reason:(out unsigned long long *)arg4;
- (id)_queue_resolveBehaviorForEventDetails:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (id)sysdiagnoseDataForDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (id)resolveBehaviorForEventDetails:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithModeRepository:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

