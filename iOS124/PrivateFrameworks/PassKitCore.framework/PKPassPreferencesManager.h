//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPassPreferencesManager : NSObject
{
}

+ (id)sharedInstance;
- (struct __CFString *)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2;
- (void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2;
- (id)_stringForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (void)_synchronize;
- (_Bool)hasDoneExpressUpgrade;
- (void)setHasDoneExpressUpgrade:(_Bool)arg1;
- (void)removeAllPreferences;
- (void)removeAllPreferencesForPassWithUniqueID:(id)arg1;
- (double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1;
- (void)setCommutePlanRenewalReminderTimeInterval:(double)arg1 forPassWithUniqueID:(id)arg2;
- (id)lowBalanceReminderCurrencyForPassWithUniqueID:(id)arg1;
- (id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1;
- (void)setLowBalanceReminderAmount:(id)arg1 currency:(id)arg2 forPassWithUniqueID:(id)arg3;

@end

