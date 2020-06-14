//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVMediaInfo.h>

@class TVPPlaylist, UIColor;

__attribute__((visibility("hidden")))
@interface VUIMediaInfo : TVMediaInfo
{
    _Bool _hasProgress;
    _Bool _showsSecondaryVideoView;
    _Bool _automaticPlaybackStart;
    _Bool _automaticPlaybackStop;
    _Bool _restrictionsAlreadyUnlocked;
    _Bool _shouldDelayLoadingImage;
    _Bool _overridesStartTimeWithResumeTime;
    TVPPlaylist *_tvpPlaylist;
    unsigned long long _playbackStartReason;
    unsigned long long _playbackStopReason;
    UIColor *_backgroundColor;
}

@property(nonatomic) _Bool overridesStartTimeWithResumeTime; // @synthesize overridesStartTimeWithResumeTime=_overridesStartTimeWithResumeTime;
@property(nonatomic) _Bool shouldDelayLoadingImage; // @synthesize shouldDelayLoadingImage=_shouldDelayLoadingImage;
@property(nonatomic) _Bool restrictionsAlreadyUnlocked; // @synthesize restrictionsAlreadyUnlocked=_restrictionsAlreadyUnlocked;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long playbackStopReason; // @synthesize playbackStopReason=_playbackStopReason;
@property(nonatomic, getter=isAutomaticPlaybackStop) _Bool automaticPlaybackStop; // @synthesize automaticPlaybackStop=_automaticPlaybackStop;
@property(nonatomic) unsigned long long playbackStartReason; // @synthesize playbackStartReason=_playbackStartReason;
@property(nonatomic, getter=isAutomaticPlaybackStart) _Bool automaticPlaybackStart; // @synthesize automaticPlaybackStart=_automaticPlaybackStart;
@property(nonatomic) _Bool showsSecondaryVideoView; // @synthesize showsSecondaryVideoView=_showsSecondaryVideoView;
@property(retain, nonatomic) TVPPlaylist *tvpPlaylist; // @synthesize tvpPlaylist=_tvpPlaylist;
@property(readonly, nonatomic) _Bool hasProgress; // @synthesize hasProgress=_hasProgress;
- (void).cxx_destruct;
- (id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2;
- (id)_tvpMediaTypeFromPlayableType:(id)arg1 isRental:(_Bool)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2;
- (id)_auxMediaItemFromVideosPlayable:(id)arg1;
- (id)_storeMediaItemsFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2;
- (void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideosPlayables:(id)arg1 imageProxies:(id)arg2 storeDictionary:(id)arg3;
- (id)init;

@end

