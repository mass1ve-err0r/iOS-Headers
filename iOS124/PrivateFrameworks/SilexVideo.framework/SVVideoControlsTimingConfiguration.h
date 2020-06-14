//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoControlsTimingConfiguration-Protocol.h>

@interface SVVideoControlsTimingConfiguration : NSObject <SVVideoControlsTimingConfiguration>
{
    double _upNextAppearanceTimeInterval;
    double _nowPlayingVisibilityTimeInterval;
    double _moreFromVisibilityTimeInterval;
}

@property(readonly, nonatomic) double moreFromVisibilityTimeInterval; // @synthesize moreFromVisibilityTimeInterval=_moreFromVisibilityTimeInterval;
@property(readonly, nonatomic) double nowPlayingVisibilityTimeInterval; // @synthesize nowPlayingVisibilityTimeInterval=_nowPlayingVisibilityTimeInterval;
@property(readonly, nonatomic) double upNextAppearanceTimeInterval; // @synthesize upNextAppearanceTimeInterval=_upNextAppearanceTimeInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUpNextAppearanceTimeInterval:(double)arg1 nowPlayingVisibilityTimeInterval:(double)arg2 moreFromVisibilityTimeInterval:(double)arg3;

@end

