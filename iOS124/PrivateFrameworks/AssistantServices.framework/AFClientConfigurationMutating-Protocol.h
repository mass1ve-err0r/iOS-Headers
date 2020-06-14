//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAudioPlaybackRequest;

@protocol AFClientConfigurationMutating <NSObject>
- (void)setTwoShotAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setIsAccessibilityVibrationDisabled:(_Bool)arg1;
- (void)setIsAccessibilityVoiceOverTouchEnabled:(_Bool)arg1;
- (void)setIsDeviceInStarkMode:(_Bool)arg1;
- (void)setIsDeviceInCarDNDMode:(_Bool)arg1;
- (void)setIsDeviceInSetupFlow:(_Bool)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
@end

