//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelLibraryRequest.h>

#import <MediaPlaybackCore/MPCModelPlaybackRequesting-Protocol.h>
#import <MediaPlaybackCore/MPCModelRequestRTCReporting-Protocol.h>

@class MPSectionedCollection, NSString;

@interface MPModelLibraryRequest (MPCModelPlaybackAdditions) <MPCModelPlaybackRequesting, MPCModelRequestRTCReporting>
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (_Bool)shouldExcludeNonShuffleItems;
- (void)setShouldExcludeNonShuffleItems:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MPSectionedCollection *playbackSourceModelObjects;
@property(readonly) Class superclass;
@end

