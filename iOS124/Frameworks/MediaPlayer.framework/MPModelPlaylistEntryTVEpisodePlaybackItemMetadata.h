//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelTVEpisodePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

+ (id)requiredProperties;
@property(retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;
- (void).cxx_destruct;
- (id)episode;
- (void)setEpisode:(id)arg1;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)modelGenericObject;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

