//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYSetupStateManager : NSObject
{
}

+ (id)sharedManager;
- (void)recordSetupUsingBuddy;
- (void)recordLanguageSelectedUsingBuddy;
- (_Bool)didSetupUsingiTunes;
- (_Bool)didRestoreFromBackup;
- (void)clearRestoreType;
- (long long)restoreType;
- (id)buddyPrefsValueForKey:(id)arg1;

@end

