//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/MTMediaPlaylistItem-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <MTMediaPlaylistItem>
{
    unsigned long long _overallPosition;
    NSArray *_eventData;
    unsigned long long _duration;
    struct _NSRange _timeRange;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) struct _NSRange timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) unsigned long long overallPosition; // @synthesize overallPosition=_overallPosition;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 eventData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long startOverallPosition;
@property(readonly) Class superclass;

@end

