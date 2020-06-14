//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerShuffleCommand-Protocol.h>

@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand>
{
    _Bool _supportsChangeShuffle;
    _Bool _supportsAdvanceShuffle;
    long long _currentShuffleType;
    NSArray *_supportedShuffleTypes;
}

@property(nonatomic) _Bool supportsAdvanceShuffle; // @synthesize supportsAdvanceShuffle=_supportsAdvanceShuffle;
@property(nonatomic) _Bool supportsChangeShuffle; // @synthesize supportsChangeShuffle=_supportsChangeShuffle;
@property(retain, nonatomic) NSArray *supportedShuffleTypes; // @synthesize supportedShuffleTypes=_supportedShuffleTypes;
@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
- (void).cxx_destruct;
- (id)advance;
- (id)setShuffleType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

