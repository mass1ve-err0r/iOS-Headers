//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDInteractionAdvisorUtils : NSObject
{
}

+ (id)nameFromModelID:(unsigned long long)arg1;
+ (_Bool)adjustRanker:(id)arg1 forModel:(unsigned long long)arg2;
+ (void)adjustForConsumerSettings:(id)arg1 modelSettings:(id)arg2 andRanker:(id)arg3;
+ (unsigned long long)modelTypeForConsumerIdentifier:(id)arg1 modelSettings:(id)arg2;
+ (void)updateConsumerModelSettings:(id)arg1;
+ (id)inferConsumerIdentifierFromSettings:(id)arg1;
+ (id)createTimePredicateForReferenceDate:(id)arg1 recentLookBackDays:(int)arg2 windowHours:(int)arg3 lookBackWeeks:(int)arg4 lookAheadWeeks:(int)arg5;
+ (id)rankContacts:(id)arg1 basedOnInteractions:(id)arg2 andRanker:(id)arg3;
+ (id)adviceBasedOnInteractions:(id)arg1 forContacts:(id)arg2 andRanker:(id)arg3 ignoringContacts:(id)arg4 withLimit:(unsigned long long)arg5 aggregateByIdentifier:(_Bool)arg6 requireOneOutgoingInteraction:(_Bool)arg7;
+ (id)contactsInInteraction:(id)arg1;
+ (id)contactsForIdentifiers:(id)arg1;
+ (_Bool)contact:(id)arg1 mayRepresentTheSamePersonAsOneOf:(id)arg2;
+ (id)unionSet:(id)arg1 withSet:(id)arg2;
+ (id)hashForAdviceWithContact:(id)arg1 account:(id)arg2 bundleId:(id)arg3 mechanism:(long long)arg4;
+ (id)stringKeyForAdvice:(id)arg1;

@end

