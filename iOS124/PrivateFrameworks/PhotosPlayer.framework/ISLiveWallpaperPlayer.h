//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayer.h>

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer
{
    CDStruct_1b6d18a9 _videoDuration;
    double _smoothedVelocity;
    _Bool _touching;
    _Bool __active;
    _Bool __seeking;
    float __playRate;
    double _force;
    ISDisplayLink *__displayLink;
}

@property(nonatomic, setter=_setPlayRate:) float _playRate; // @synthesize _playRate=__playRate;
@property(nonatomic, getter=_isSeeking, setter=_setSeeking:) _Bool _seeking; // @synthesize _seeking=__seeking;
@property(nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setActive:) _Bool _active; // @synthesize _active=__active;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic, getter=isTouching) _Bool touching; // @synthesize touching=_touching;
- (void)_handleDidFinishSeeking:(_Bool)arg1;
- (void)_seekVideoToEnd;
- (void)_seekVideoToBeginning;
- (void)_updatePlayer;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)_update;
- (void)statusDidChange;
- (void)didPerformChanges;
- (void)setPlayerItem:(id)arg1;

@end

