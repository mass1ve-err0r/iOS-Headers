//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEventAttendeePicker, NSString;

@protocol EKEventAttendeePickerDelegate <NSObject>
- (unsigned long long)eventAttendeePicker:(EKEventAttendeePicker *)arg1 getValidationStatusForAddress:(NSString *)arg2;
- (void)eventAttendeePicker:(EKEventAttendeePicker *)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(NSString *)arg3;
@end

