//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>
#import <CoreSuggestions/SGRealtimeSuggestion-Protocol.h>

@class NSString, SGEvent;

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>
{
    _Bool _isHarvested;
    int _state;
    SGEvent *_event;
    NSString *_eventIdentifier;
}

+ (id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(_Bool)arg2;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(_Bool)arg3;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(_Bool)arg3;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2;
+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(_Bool)arg3;
+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForNewEvent:(id)arg1 harvested:(_Bool)arg2;
+ (id)realtimeEventForNewEvent:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isHarvested; // @synthesize isHarvested=_isHarvested;
@property(readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(readonly, nonatomic) SGEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToRealtimeEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

