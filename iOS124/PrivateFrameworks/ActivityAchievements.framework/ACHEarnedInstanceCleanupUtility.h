//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACHEarnedInstanceStore;

@interface ACHEarnedInstanceCleanupUtility : NSObject
{
    ACHEarnedInstanceStore *_earnedInstanceStore;
}

@property(retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
- (void).cxx_destruct;
- (id)_cleanupLongestMoveStreakAchievements;
- (id)_cleanupBestWorkoutAchievements;
- (id)_cleanupFirstWorkoutAchievements;
- (void)performCleanup;
- (id)initWithEarnedInstanceStore:(id)arg1;

@end

