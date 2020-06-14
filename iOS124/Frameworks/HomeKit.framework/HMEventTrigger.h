//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTrigger.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMMutableArray, NSArray, NSPredicate;

@interface HMEventTrigger : HMTrigger <NSSecureCoding>
{
    NSArray *_recurrences;
    _Bool _executeOnce;
    NSPredicate *_internalPredicate;
    unsigned long long _activationState;
    HMMutableArray *_currentEvents;
}

+ (_Bool)isActionAffectedByEndEvents:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg1 secondDateWithComponents:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg1 secondSignificantEvent:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)negateOffset:(id)arg1;
+ (_Bool)__validateRecurrences:(id)arg1;
@property(retain, nonatomic) HMMutableArray *currentEvents; // @synthesize currentEvents=_currentEvents;
- (void).cxx_destruct;
- (_Bool)compatibleWithApp;
- (_Bool)containsSharedTriggerActivationBits;
- (_Bool)_updateCharacterisiticReferenceInNewEvent:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleActivationStateNotification:(id)arg1;
- (void)handleEventsRemovedNotification:(id)arg1;
- (void)handleEventsUpdatedNotification:(id)arg1;
- (id)addedEvent:(id)arg1;
- (void)handleEventAddedNotification:(id)arg1;
- (void)_handleEventTriggerExecuteOnceNotification:(id)arg1;
- (void)_handleEventTriggerRecurrencesNotification:(id)arg1;
- (void)_handleEventTriggerConditionNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_updateExecuteOnce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExecuteOnce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateCharacteristicReference;
- (void)_updateEvents:(id)arg1 endEvent:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateEndEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long triggerActivationState;
@property(nonatomic) unsigned long long activationState; // @synthesize activationState=_activationState;
- (void)setExecuteOnce:(_Bool)arg1;
@property(readonly, nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
- (void)setRecurrences:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSPredicate *internalPredicate; // @synthesize internalPredicate=_internalPredicate;
@property(readonly, copy, nonatomic) NSPredicate *predicate;
@property(readonly, copy, nonatomic) NSArray *allEvents;
@property(readonly, copy, nonatomic) NSArray *endEvents;
@property(readonly, copy, nonatomic) NSArray *events;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3;
- (id)initInternalWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;

@end

