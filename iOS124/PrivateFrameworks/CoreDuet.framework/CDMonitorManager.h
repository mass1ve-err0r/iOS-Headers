//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CDMonitorManager : NSObject
{
    NSArray *_monitorManagers;
    NSMutableDictionary *_monitors;
    NSMutableSet *_lazyMonitorNames;
    CDUnknownBlockType _generalInstantHandler;
    CDUnknownBlockType _generalHistoricalHandler;
    CDUnknownBlockType _generalHistoricalDeletingHandler;
    CDUnknownBlockType _generalShutdownHandler;
    NSMutableDictionary *_instantHandlerMap;
    NSMutableDictionary *_historicalHandlerMap;
    NSMutableSet *_shutdownHandlingMonitors;
    NSObject<OS_dispatch_queue> *_monitorWorkQueue;
}

+ (id)monitorManagerForEventStreams:(id)arg1;
- (void).cxx_destruct;
- (_Bool)hasMonitor:(id)arg1;
- (_Bool)_hasMonitorForStreamName:(id)arg1;
- (void)removeMonitor:(id)arg1;
- (void)_removeMonitorForStreamName:(id)arg1;
- (void)addMonitor:(id)arg1;
- (void)_addMonitor:(id)arg1 forStreamName:(id)arg2;
- (void)handleShutdownNotification;
- (void)deliverNotificationEvent:(id)arg1;
- (id)lastUpdate;
- (id)lastUpdateForStream:(id)arg1;
- (id)_lastUpdateForStreamName:(id)arg1;
- (void)update;
- (void)updateForStream:(id)arg1;
- (void)_updateForStreamName:(id)arg1;
- (id)currentEvent;
- (id)currentEventForStream:(id)arg1;
- (id)_currentEventForStreamName:(id)arg1;
- (void)populateCurrentValueForStreamName:(id)arg1;
- (void)stop;
- (void)stopMonitorForStream:(id)arg1;
- (void)_stopMonitorForStreamName:(id)arg1;
- (void)start;
- (void)startMonitorForStream:(id)arg1;
- (void)_startMonitorForStreamName:(id)arg1;
- (void)setShutdownHandler:(CDUnknownBlockType)arg1;
- (void)setHistoricalDeletingHandler:(CDUnknownBlockType)arg1;
- (void)setHistoricalHandler:(CDUnknownBlockType)arg1;
- (void)setHistoricalHandler:(CDUnknownBlockType)arg1 forStream:(id)arg2;
- (void)_setHistoricalHandler:(CDUnknownBlockType)arg1 forStreamName:(id)arg2;
- (void)setInstantHandler:(CDUnknownBlockType)arg1;
- (void)setInstantHandler:(CDUnknownBlockType)arg1 forStream:(id)arg2;
- (void)_setInstantHandler:(CDUnknownBlockType)arg1 forStreamName:(id)arg2;
- (id)_allMonitors;
- (id)_allStreamNames;
- (id)_monitorForStreamName:(id)arg1;
- (id)initWithEventStreams:(id)arg1;
- (id)init;
- (id)_createMonitorManagers;

@end

