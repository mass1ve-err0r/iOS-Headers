//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXUserEventTrackerCommon : NSObject
{
    id _currentSessionSender;
    unsigned long long _currentSessionSource;
    unsigned long long _currentSessionTab;
    double _currentLogStateStartDate;
    double _currentLogSubStateStartDate;
    _Bool _applicationIsInForeground;
    unsigned long long _currentTab;
    _Bool _enableDetailedDebugLogging;
    unsigned long long _currentLogState;
    unsigned long long _currentLogSubState;
}

@property(nonatomic) unsigned long long currentLogSubState; // @synthesize currentLogSubState=_currentLogSubState;
@property(nonatomic) unsigned long long currentLogState; // @synthesize currentLogState=_currentLogState;
@property(readonly, nonatomic) _Bool enableDetailedDebugLogging; // @synthesize enableDetailedDebugLogging=_enableDetailedDebugLogging;
@property(nonatomic, setter=setCurrentTab:) unsigned long long currentTab; // @synthesize currentTab=_currentTab;
- (void).cxx_destruct;
- (id)PXUserEventSourceDescription:(unsigned long long)arg1;
- (id)PXLogSubStateDescription:(unsigned long long)arg1;
- (id)PXLogStateDescription:(unsigned long long)arg1;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)willViewMemoriesFeedView;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (_Bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 forceLogging:(_Bool)arg3;
- (void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(_Bool)arg3;
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;
- (id)init;

@end

