//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMAccessorySettingsDelegate-Protocol.h>

@class HMAccessorySetting, HMAccessorySettings, NSSet;

@protocol HFAccessorySettingsObserver <HMAccessorySettingsDelegate>

@optional
- (void)accessorySettings:(HMAccessorySettings *)arg1 didWriteValueForSettings:(NSSet *)arg2 failedSettings:(NSSet *)arg3;
- (void)accessorySettings:(HMAccessorySettings *)arg1 willWriteValueForSettings:(NSSet *)arg2;
- (void)accessorySettings:(HMAccessorySettings *)arg1 didUpdateSetting:(HMAccessorySetting *)arg2;
@end

