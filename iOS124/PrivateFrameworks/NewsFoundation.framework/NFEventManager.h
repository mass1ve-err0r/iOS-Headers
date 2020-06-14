//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NFEventManager : NSObject
{
    NSMutableSet *_events;
    NSMutableDictionary *_triggers;
}

@property(readonly, nonatomic) NSMutableDictionary *triggers; // @synthesize triggers=_triggers;
@property(readonly, nonatomic) NSMutableSet *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)handleAlwaysTrigger:(id)arg1 event:(id)arg2;
- (void)handleOnceTrigger:(id)arg1 event:(id)arg2;
- (void)attemptTriggersForCurrentEvent:(id)arg1;
- (void)triggerOnAnyEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)triggerOnEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)fireEvent:(id)arg1;
- (id)init;

@end

