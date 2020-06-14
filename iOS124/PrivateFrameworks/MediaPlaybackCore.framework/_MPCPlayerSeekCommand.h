//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import <MediaPlaybackCore/MPCPlayerSeekCommand-Protocol.h>

@class NSArray, NSString;

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand>
{
    _Bool _prefersNegativeBackwardSkipIntervals;
    unsigned long long _seekSupport;
    NSArray *_preferredBackwardJumpIntervals;
    NSArray *_preferredForwardJumpIntervals;
}

@property(copy, nonatomic) NSArray *preferredForwardJumpIntervals; // @synthesize preferredForwardJumpIntervals=_preferredForwardJumpIntervals;
@property(copy, nonatomic) NSArray *preferredBackwardJumpIntervals; // @synthesize preferredBackwardJumpIntervals=_preferredBackwardJumpIntervals;
@property(nonatomic) _Bool prefersNegativeBackwardSkipIntervals; // @synthesize prefersNegativeBackwardSkipIntervals=_prefersNegativeBackwardSkipIntervals;
@property(readonly, nonatomic) unsigned long long seekSupport; // @synthesize seekSupport=_seekSupport;
- (void).cxx_destruct;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)changePositionToElapsedInterval:(double)arg1;
- (id)jumpByInterval:(double)arg1;
- (id)endSeek;
- (id)beginSeekWithDirection:(long long)arg1;
- (id)initWithResponse:(id)arg1 seekSupport:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

