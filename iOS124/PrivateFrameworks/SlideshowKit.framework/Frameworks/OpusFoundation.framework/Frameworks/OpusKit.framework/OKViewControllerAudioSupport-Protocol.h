//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@protocol OKViewControllerAudioSupport <NSObject>

@optional
- (void)setPlaybackAudioVolume:(double)arg1;
- (void)endFading;
- (void)beginFadingWithDuration:(double)arg1;
- (void)endDucking;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (double)requiredDuckLevel;
@end

