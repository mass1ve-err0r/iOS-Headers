//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTAlarmIntentHandler.h>

#import <MobileTimer/MTCreateAlarmIntentHandling-Protocol.h>

@class NSString;

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>
{
}

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)handleMTCreateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTCreateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

