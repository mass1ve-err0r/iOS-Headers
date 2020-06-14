//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSMutableDictionary;
@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject
{
    NSMutableArray *_incomingHIDEvents;
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop *_cfRunLoop;
    struct __CFRunLoopSource *_triggerHandOffEventsRunLoopSource;
    CDUnknownBlockType _receiveBlock;
    CDUnknownBlockType _addToFilteredEventsBlock;
    CDUnknownBlockType _gameControllerEventFilterGenerator;
    CDUnknownBlockType _watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    CADisplayLink *_displayLink;
    long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    long long _countOfDigitizerEventsReceivedInPreviousFrame;
    _Bool _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    double _lastImportantEventTimestamp;
    double _lastSignalTimestamp;
    double _estimatedDisplayLinkDrift;
    long long _lastSignalType;
    _Bool _needsSignalOnDisplayLink;
    id <UIEventFetcherSink> _eventFetcherSink;
    double _commitTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    double _latestMoveDragEventTimestamp;
    double _latestMoveDragEventResendTimestamp;
}

@property(nonatomic) double latestMoveDragEventResendTimestamp; // @synthesize latestMoveDragEventResendTimestamp=_latestMoveDragEventResendTimestamp;
@property(nonatomic) double latestMoveDragEventTimestamp; // @synthesize latestMoveDragEventTimestamp=_latestMoveDragEventTimestamp;
@property(retain, nonatomic) NSMutableDictionary *latestMoveDragEventsBySessionID; // @synthesize latestMoveDragEventsBySessionID=_latestMoveDragEventsBySessionID;
@property(nonatomic) double commitTimeForTouchEvents; // @synthesize commitTimeForTouchEvents=_commitTimeForTouchEvents;
@property(nonatomic) _Bool needsSignalOnDisplayLink; // @synthesize needsSignalOnDisplayLink=_needsSignalOnDisplayLink;
@property(retain, nonatomic) id <UIEventFetcherSink> eventFetcherSink; // @synthesize eventFetcherSink=_eventFetcherSink;
- (void).cxx_destruct;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2;
- (void)filterEvents;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent *)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)setupThreadAndRun;
- (void)threadMain;
- (void)displayLinkDidFire:(id)arg1;
- (void)setupForRunLoop:(id)arg1;
- (void)_setupFilterChain;
- (void)_removeHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_addHIDEventFilter:(CDUnknownBlockType)arg1;
- (id)init;

@end

