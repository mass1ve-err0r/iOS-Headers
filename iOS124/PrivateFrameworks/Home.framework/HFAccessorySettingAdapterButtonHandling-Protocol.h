//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFAccessorySettingsEntity, NAFuture;

@protocol HFAccessorySettingAdapterButtonHandling <NSObject>
- (NAFuture *)inProgressButtonPressFutureForEntity:(HFAccessorySettingsEntity *)arg1;
- (_Bool)supportButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
- (NAFuture *)handleButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
@end

