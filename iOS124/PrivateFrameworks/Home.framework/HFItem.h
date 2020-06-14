//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItemManager, NAFuture, NSDictionary;

@interface HFItem : NSObject
{
    _Bool __debug_isChildItem;
    NSDictionary *_latestResults;
    unsigned long long _loadingState;
    NAFuture *_cancellableInFlightUpdateFuture;
    HFItemManager *__debug_owningItemManager;
}

@property(nonatomic) _Bool _debug_isChildItem; // @synthesize _debug_isChildItem=__debug_isChildItem;
@property(nonatomic) __weak HFItemManager *_debug_owningItemManager; // @synthesize _debug_owningItemManager=__debug_owningItemManager;
@property(nonatomic) __weak NAFuture *cancellableInFlightUpdateFuture; // @synthesize cancellableInFlightUpdateFuture=_cancellableInFlightUpdateFuture;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSDictionary *latestResults; // @synthesize latestResults=_latestResults;
- (void).cxx_destruct;
- (id)_finalOutcomeForSubclassOutcome:(id)arg1 previousResults:(id)arg2 updateOptions:(id)arg3;
- (id)description;
- (id)debugDescription;
- (_Bool)resultsContainRequiredProperties:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (void)copyLatestResultsFromItem:(id)arg1;
- (id)updateWithOptions:(id)arg1;

@end

