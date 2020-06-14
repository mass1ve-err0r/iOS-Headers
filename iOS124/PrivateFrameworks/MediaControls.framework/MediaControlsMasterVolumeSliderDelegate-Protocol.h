//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsMasterVolumeSlider, UITouch;

@protocol MediaControlsMasterVolumeSliderDelegate <NSObject>

@optional
- (_Bool)slider:(MediaControlsMasterVolumeSlider *)arg1 shouldCancelSnapWithTouch:(UITouch *)arg2;
- (_Bool)slider:(MediaControlsMasterVolumeSlider *)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3;
- (_Bool)shouldEnableSyncingForSlider:(MediaControlsMasterVolumeSlider *)arg1;
@end

