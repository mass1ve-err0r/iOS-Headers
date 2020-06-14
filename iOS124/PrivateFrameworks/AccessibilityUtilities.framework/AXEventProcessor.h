//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSThread;

@interface AXEventProcessor : NSObject
{
    _Bool _shouldRunHIDReceiveThreadRunloop;
    _Bool _shouldNotifyUserEventOccurred;
    _Bool _handlingHIDEvents;
    _Bool _ignoreAllSystemEvents;
    _Bool _handlingSystemEvents;
    int _HIDEventTapPriority;
    int _systemEventTapPriority;
    NSString *_HIDEventTapIdentifier;
    NSThread *_HIDEventReceiveThread;
    CDUnknownBlockType _HIDEventHandler;
    unsigned long long _HIDEventFilterMask;
    NSString *_systemEventTapIdentifier;
    CDUnknownBlockType _systemEventHandler;
    NSMutableArray *_hidActualEventTapEnabledReasons;
    NSMutableArray *_systemActualEventTapEnabledReasons;
}

@property(retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons; // @synthesize systemActualEventTapEnabledReasons=_systemActualEventTapEnabledReasons;
@property(nonatomic, getter=isHandlingSystemEvents) _Bool handlingSystemEvents; // @synthesize handlingSystemEvents=_handlingSystemEvents;
@property(retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons; // @synthesize hidActualEventTapEnabledReasons=_hidActualEventTapEnabledReasons;
@property(nonatomic) _Bool ignoreAllSystemEvents; // @synthesize ignoreAllSystemEvents=_ignoreAllSystemEvents;
@property(copy, nonatomic) CDUnknownBlockType systemEventHandler; // @synthesize systemEventHandler=_systemEventHandler;
@property(nonatomic) int systemEventTapPriority; // @synthesize systemEventTapPriority=_systemEventTapPriority;
@property(retain, nonatomic) NSString *systemEventTapIdentifier; // @synthesize systemEventTapIdentifier=_systemEventTapIdentifier;
@property(nonatomic) unsigned long long HIDEventFilterMask; // @synthesize HIDEventFilterMask=_HIDEventFilterMask;
@property(copy, nonatomic) CDUnknownBlockType HIDEventHandler; // @synthesize HIDEventHandler=_HIDEventHandler;
@property(nonatomic, getter=isHandlingHIDEvents) _Bool handlingHIDEvents; // @synthesize handlingHIDEvents=_handlingHIDEvents;
@property(retain, nonatomic) NSThread *HIDEventReceiveThread; // @synthesize HIDEventReceiveThread=_HIDEventReceiveThread;
@property(nonatomic) int HIDEventTapPriority; // @synthesize HIDEventTapPriority=_HIDEventTapPriority;
@property(retain, nonatomic) NSString *HIDEventTapIdentifier; // @synthesize HIDEventTapIdentifier=_HIDEventTapIdentifier;
@property(nonatomic) _Bool shouldNotifyUserEventOccurred; // @synthesize shouldNotifyUserEventOccurred=_shouldNotifyUserEventOccurred;
- (void).cxx_destruct;
- (void)_uninstallSystemEventFilter;
- (void)_installSystemEventFilter;
- (void)_uninstallHIDEventFilter;
- (void)_installHIDEventFilter;
- (void)_runHIDEventReceiveThread;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)endHandlingSystemEventsForReason:(id)arg1;
- (void)beginHandlingSystemEventsForReason:(id)arg1;
@property(readonly, nonatomic) __weak NSArray *systemEventTapEnabledReasons;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)endHandlingHIDEventsForReason:(id)arg1;
- (void)beginHandlingHIDEventsForReason:(id)arg1;
@property(readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (id)init;

@end

