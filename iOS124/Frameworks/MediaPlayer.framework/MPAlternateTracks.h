//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>

@class AVPlayerItemLegibleOutput, MPAVItem, MPAlternateTextTrack, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
    _Bool _disableAlternateTextTrackRendering;
    AVPlayerItemLegibleOutput *_legibleOutput;
    MPAlternateTextTrack *_currentTextTrack;
    NSArray *_outOfBandTextTracks;
}

+ (id)subtitleLanguages;
@property(nonatomic) _Bool disableAlternateTextTrackRendering; // @synthesize disableAlternateTextTrackRendering=_disableAlternateTextTrackRendering;
@property(retain, nonatomic) NSArray *outOfBandTextTracks; // @synthesize outOfBandTextTracks=_outOfBandTextTracks;
- (void).cxx_destruct;
- (void)_suppressAVFSubtitleRendering;
- (id)_currentTextTrackAccordingToAVF;
- (id)_keyForTrackType:(unsigned long long)arg1;
- (void)enableLegibleOutputIfNecessary;
- (void)reloadDataWithChangedCaptionDisplayType:(_Bool)arg1;
- (void)reloadData;
- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;
- (_Bool)hasTracksForTypes:(unsigned long long)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;
- (id)tracksForType:(unsigned long long)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;
@property(retain, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;
- (id)currentTrackForType:(unsigned long long)arg1;
- (void)commitTrackChanges;
- (void)beginTrackChanges;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

