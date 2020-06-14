//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPLazySectionedCollectionDataSource-Protocol.h>

@class MPCMediaPlayerLegacyPlaylistManager, NSString;

@interface MPCMediaPlayerLegacyPlayerQueueLazySectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>
{
    struct _NSRange _hardQueueRange;
    struct _NSRange _softQueueRange;
    MPCMediaPlayerLegacyPlaylistManager *_playlistManager;
}

@property(readonly, nonatomic) MPCMediaPlayerLegacyPlaylistManager *playlistManager; // @synthesize playlistManager=_playlistManager;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithPlaylistManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

