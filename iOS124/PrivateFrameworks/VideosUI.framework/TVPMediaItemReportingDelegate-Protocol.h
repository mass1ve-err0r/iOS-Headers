//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSDate, NSError, NSObject, NSString, TVPPlaybackState;
@protocol TVPMediaItem, TVPPlayback;

@protocol TVPMediaItemReportingDelegate <NSObject>

@optional
- (void)mediaItemAllInitialLoadingComplete:(NSObject<TVPMediaItem> *)arg1 totalTime:(double)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItemPlayerItemStatusDidBecomeReadyToPlay:(NSObject<TVPMediaItem> *)arg1 timeTakenForOperation:(double)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItemDidPrepareForPlaybackInitiation:(NSObject<TVPMediaItem> *)arg1 timeTakenForOperation:(double)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItemDidLoadAVAssetKeys:(NSObject<TVPMediaItem> *)arg1 timeTakenForOperation:(double)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItemDidPrepareForLoading:(NSObject<TVPMediaItem> *)arg1 timeTakenForOperation:(double)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItem:(NSObject<TVPMediaItem> *)arg1 errorDidOccur:(NSError *)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItemDidSwitchVariantStreams:(NSObject<TVPMediaItem> *)arg1 player:(NSObject<TVPPlayback> *)arg2;
- (void)mediaItem:(NSObject<TVPMediaItem> *)arg1 elapsedTimeDidChangeTo:(double)arg2 playbackDateDidChangeTo:(NSDate *)arg3 dueToTimeJump:(_Bool)arg4;
- (void)mediaItemBufferingDidBecomeLikelyToKeepUp:(NSObject<TVPMediaItem> *)arg1 timeTakenForOperation:(double)arg2 player:(NSObject<TVPPlayback> *)arg3;
- (void)mediaItemWillStartBuffering:(NSObject<TVPMediaItem> *)arg1 player:(NSObject<TVPPlayback> *)arg2;
- (void)mediaItemDidStall:(NSObject<TVPMediaItem> *)arg1 player:(NSObject<TVPPlayback> *)arg2;
- (void)mediaItem:(NSObject<TVPMediaItem> *)arg1 didChangeFromPlaybackState:(TVPPlaybackState *)arg2 toPlaybackState:(TVPPlaybackState *)arg3 updatedRate:(double)arg4 player:(NSObject<TVPPlayback> *)arg5;
- (void)mediaItem:(NSObject<TVPMediaItem> *)arg1 willChangeFromPlaybackState:(TVPPlaybackState *)arg2 toPlaybackState:(TVPPlaybackState *)arg3 updatedRate:(double)arg4 player:(NSObject<TVPPlayback> *)arg5;
- (void)mediaItemWillNoLongerBeCurrentItem:(NSObject<TVPMediaItem> *)arg1 player:(NSObject<TVPPlayback> *)arg2 reason:(NSString *)arg3;
- (void)mediaItemDidBecomeCurrentItem:(NSObject<TVPMediaItem> *)arg1 player:(NSObject<TVPPlayback> *)arg2 reason:(NSString *)arg3;
@end

