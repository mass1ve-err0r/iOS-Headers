//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTAlarmIntentHandler.h>

#import <MobileTimer/MTUpdateAlarmIntentHandling-Protocol.h>

@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>
{
}

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)handleMTUpdateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTUpdateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

