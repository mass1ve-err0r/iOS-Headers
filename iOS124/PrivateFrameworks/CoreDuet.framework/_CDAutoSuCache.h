//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface _CDAutoSuCache : NSObject
{
    NSDictionary *_predictedSleep;
    NSDate *_predictedSleepValidityStartDate;
    NSDate *_predictedSleepValidityEndDate;
}

+ (id)sharedCache;
@property(retain) NSDate *predictedSleepValidityEndDate; // @synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate;
@property(retain) NSDate *predictedSleepValidityStartDate; // @synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate;
@property(retain) NSDictionary *predictedSleep; // @synthesize predictedSleep=_predictedSleep;
- (void).cxx_destruct;
- (id)cachedPredictedSleepDictionaryForDate:(id)arg1;
- (void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3;
- (void)clear;

@end
