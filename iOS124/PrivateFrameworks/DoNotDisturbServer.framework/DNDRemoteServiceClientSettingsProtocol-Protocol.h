//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDBehaviorSettings, DNDBypassSettings, DNDScheduleSettings;

@protocol DNDRemoteServiceClientSettingsProtocol <NSObject>
- (void)deliverUpdatedScheduleSettings:(DNDScheduleSettings *)arg1;
- (void)deliverUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg1;
- (void)deliverUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg1;
@end

