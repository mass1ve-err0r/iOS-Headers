//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain
{
}

+ (id)standardDefaults;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic) _Bool alwaysPerformDefaultAction; // @dynamic alwaysPerformDefaultAction;
@property(retain, nonatomic) NSArray *displayIDsWithBadgingEnabled; // @dynamic displayIDsWithBadgingEnabled;
@property(readonly, nonatomic) _Bool dontSuppressForPrivacyWhenUnlocked; // @dynamic dontSuppressForPrivacyWhenUnlocked;
@property(readonly, nonatomic) NSArray *legacyAlarmList; // @dynamic legacyAlarmList;
@property(readonly, nonatomic) _Bool shouldTestBannerPlayTextTone; // @dynamic shouldTestBannerPlayTextTone;

@end

