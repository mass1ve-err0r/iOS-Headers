//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKFoundInAppsEventTracker : NSObject
{
}

+ (id)pseudoEventInitialTimeToLeaveFiredTracker;
+ (id)pseudoEventExpiredTracker;
+ (id)pseudoEventDetailsOpenedTracker;
+ (id)pseudoEventDateChangedTracker;
+ (void)trackPseudoEventInitialTimeToLeaveFired;
+ (void)trackPseudoEventsExpired:(int)arg1;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventDateChanged;

@end

