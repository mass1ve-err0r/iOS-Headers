//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCWaveformRenderer;

@protocol RCWaveformRendererDelegate <NSObject>
@property(nonatomic) double currentTime;
- (double)duration;
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCWaveformRenderer *)arg1;
- (void)waveformRendererContentDidFinishLoading:(RCWaveformRenderer *)arg1;
- (void)waveformRenderer:(RCWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
@end

