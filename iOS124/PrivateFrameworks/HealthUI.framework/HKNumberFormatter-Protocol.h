//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDisplayType, HKUnitPreferenceController, NSNumber, NSString;

@protocol HKNumberFormatter <NSObject>
- (NSString *)stringFromNumber:(NSNumber *)arg1 displayType:(HKDisplayType *)arg2 unitController:(HKUnitPreferenceController *)arg3;
- (_Bool)returnsUnitWithValueForDisplay;
@end

