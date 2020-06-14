//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPAutocompleteDelegate, PPDiscoverySuggester, PPPeopleSuggester;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPContactScorer : NSObject
{
    PPPeopleSuggester *_peopleSuggester;
    PPDiscoverySuggester *_discoverySuggester;
    PPAutocompleteDelegate *_autocompleteDelegate;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
    NSObject<OS_dispatch_queue> *_memoryPressureQueue;
}

+ (id)sharedInstance;
+ (void)unsetSharedScorer;
+ (id)createNewSharedScorer;
- (void).cxx_destruct;
- (void)waitForDiscoveriesToProcess;
- (void)discoveredRecipients:(id)arg1;
- (void)undiscoverEvent:(id)arg1 store:(id)arg2;
- (void)discoverEvent:(id)arg1 store:(id)arg2;
- (void)waitForScoringData;
- (double)scoreMergedNameItem:(id)arg1;
- (double)scoreForFoundOnDeviceContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreForContactIdentifier:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreFromRankPercentage:(double)arg1 acBoost:(double)arg2;
- (double)scoreForContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (id)bestContactsWithLimit:(unsigned long long)arg1;
- (id)contactsForDetailString:(id)arg1;
- (id)contactsForName:(id)arg1 recipients:(id)arg2;
- (id)_contactsFromSuggester:(id)arg1 matchingName:(id)arg2;
- (void)_setupMemoryPressureNotification;
- (void)dealloc;
- (id)init;

@end

