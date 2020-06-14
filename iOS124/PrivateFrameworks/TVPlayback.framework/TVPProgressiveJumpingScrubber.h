//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, TVPPlayer;

__attribute__((visibility("hidden")))
@interface TVPProgressiveJumpingScrubber : NSObject
{
    TVPPlayer *_player;
    double _rate;
    unsigned long long _skipCount;
    double _skipAdjustTime;
    double _nextSkipAdjustTime;
    double _skipAdjustPeriod;
    NSTimer *_skipTimer;
}

@property(retain, nonatomic) NSTimer *skipTimer; // @synthesize skipTimer=_skipTimer;
@property(nonatomic) double skipAdjustPeriod; // @synthesize skipAdjustPeriod=_skipAdjustPeriod;
@property(nonatomic) double nextSkipAdjustTime; // @synthesize nextSkipAdjustTime=_nextSkipAdjustTime;
@property(nonatomic) double skipAdjustTime; // @synthesize skipAdjustTime=_skipAdjustTime;
@property(nonatomic) unsigned long long skipCount; // @synthesize skipCount=_skipCount;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) __weak TVPPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_skipTimerFired:(id)arg1;
- (double)_nextTimeToAdvanceFromTime:(double)arg1;
- (void)cancelScrub;
- (void)startScrubWithRate:(double)arg1;

@end

