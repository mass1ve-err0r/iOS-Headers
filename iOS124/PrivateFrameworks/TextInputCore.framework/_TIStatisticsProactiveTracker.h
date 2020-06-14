//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker, PETScalarEventTracker, TIAutocorrectionList, TIKeyboardCandidate;

@interface _TIStatisticsProactiveTracker : NSObject
{
    PETScalarEventTracker *_failureEventDescriptionTracker;
    PETScalarEventTracker *_triggeredEventTracker;
    PETScalarEventTracker *_triggeredCategoryEventTracker;
    PETScalarEventTracker *_suggestedEventTracker;
    PETScalarEventTracker *_suggestedCategoryEventTracker;
    PETScalarEventTracker *_failureEventTracker;
    PETScalarEventTracker *_failureCategoryEventTracker;
    PETScalarEventTracker *_failureCategoryEventDescriptionTracker;
    PETScalarEventTracker *_selectedEventTracker;
    PETScalarEventTracker *_selectedCategoryEventTracker;
    PETDistributionEventTracker *_timeInPredictionBarEventTracker;
    PETDistributionEventTracker *_timeInPredictionBarCategoryEventTracker;
    PETScalarEventTracker *_engagementEventDescriptionTracker;
    PETScalarEventTracker *_engagementCategoryEventDescriptionTracker;
    PETScalarEventTracker *_personalizationWordAcceptanceTracker;
    PETScalarEventTracker *_personalizationOfferTracker;
    PETScalarEventTracker *_personalizationEngagementTracker;
    TIAutocorrectionList *_lastAutocorrectionList;
    TIKeyboardCandidate *_responseKitEntryOffered;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TIKeyboardCandidate *responseKitEntryOffered; // @synthesize responseKitEntryOffered=_responseKitEntryOffered;
@property(retain, nonatomic) TIAutocorrectionList *lastAutocorrectionList; // @synthesize lastAutocorrectionList=_lastAutocorrectionList;
@property(retain, nonatomic) PETScalarEventTracker *personalizationEngagementTracker; // @synthesize personalizationEngagementTracker=_personalizationEngagementTracker;
@property(retain, nonatomic) PETScalarEventTracker *personalizationOfferTracker; // @synthesize personalizationOfferTracker=_personalizationOfferTracker;
@property(retain, nonatomic) PETScalarEventTracker *personalizationWordAcceptanceTracker; // @synthesize personalizationWordAcceptanceTracker=_personalizationWordAcceptanceTracker;
@property(retain, nonatomic) PETScalarEventTracker *engagementCategoryEventDescriptionTracker; // @synthesize engagementCategoryEventDescriptionTracker=_engagementCategoryEventDescriptionTracker;
@property(retain, nonatomic) PETScalarEventTracker *engagementEventDescriptionTracker; // @synthesize engagementEventDescriptionTracker=_engagementEventDescriptionTracker;
@property(retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarCategoryEventTracker; // @synthesize timeInPredictionBarCategoryEventTracker=_timeInPredictionBarCategoryEventTracker;
@property(retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarEventTracker; // @synthesize timeInPredictionBarEventTracker=_timeInPredictionBarEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *selectedCategoryEventTracker; // @synthesize selectedCategoryEventTracker=_selectedCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *selectedEventTracker; // @synthesize selectedEventTracker=_selectedEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureCategoryEventDescriptionTracker; // @synthesize failureCategoryEventDescriptionTracker=_failureCategoryEventDescriptionTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureCategoryEventTracker; // @synthesize failureCategoryEventTracker=_failureCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureEventTracker; // @synthesize failureEventTracker=_failureEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *suggestedCategoryEventTracker; // @synthesize suggestedCategoryEventTracker=_suggestedCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *suggestedEventTracker; // @synthesize suggestedEventTracker=_suggestedEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *triggeredCategoryEventTracker; // @synthesize triggeredCategoryEventTracker=_triggeredCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *triggeredEventTracker; // @synthesize triggeredEventTracker=_triggeredEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureEventDescriptionTracker; // @synthesize failureEventDescriptionTracker=_failureEventDescriptionTracker;
- (void).cxx_destruct;
- (void)trackEngagementFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackPredictionTimeWithSource:(unsigned char)arg1 time:(double)arg2 selected:(_Bool)arg3 categories:(id)arg4 locale:(id)arg5 fieldType:(id)arg6;
- (void)trackSelectedWithSource:(unsigned char)arg1 position:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackFailureWithSource:(unsigned char)arg1 reason:(unsigned char)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackSuggestedWithSource:(unsigned char)arg1 count:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackTriggeredWithSource:(unsigned char)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4;
- (id)init;

@end

