//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RTCReporting, TVPPlayer;

__attribute__((visibility("hidden")))
@interface TVPPlayerReporter : NSObject
{
    TVPPlayer *_player;
    RTCReporting *_rtcAgent;
    NSString *_optFlag;
    double _timeWatched;
    double _timeWatchedStart;
    NSObject *_reportingHierarchyToken;
}

+ (void)initialize;
@property(retain, nonatomic) NSObject *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property double timeWatchedStart; // @synthesize timeWatchedStart=_timeWatchedStart;
@property double timeWatched; // @synthesize timeWatched=_timeWatched;
@property(retain) NSString *optFlag; // @synthesize optFlag=_optFlag;
@property(retain) RTCReporting *rtcAgent; // @synthesize rtcAgent=_rtcAgent;
@property(nonatomic) __weak TVPPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)_rtcAgentUserInfo;
- (void)_sendSessionSummaryIfNecessary;
- (void)_sendPlaybackStartupEventsIfNecessary;
- (void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (id)_gatherSessionSummary;
- (void)_playerCurrentMediaItemDidChange:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_tearDownRTCAgent;
- (void)_setupRTCAgent;
- (void)_playerStateWillChange:(id)arg1;
- (void)sendPlaybackStartupMetricsManually;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

@end

