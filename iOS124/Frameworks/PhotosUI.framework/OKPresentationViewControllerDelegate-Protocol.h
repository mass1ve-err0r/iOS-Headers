//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class AVAsset, NSString, OKPresentationViewController;

@protocol OKPresentationViewControllerDelegate <NSObject>

@optional
- (void)presentationViewController:(OKPresentationViewController *)arg1 renderingTimeLogMessage:(NSString *)arg2 withTimestamp:(double)arg3;
- (void)dismissPresentationViewController:(OKPresentationViewController *)arg1;
- (void)presentationViewController:(OKPresentationViewController *)arg1 changedFrameOfMainNavigatorTo:(struct CGRect)arg2;
- (void)endFadingForTrackID:(NSString *)arg1;
- (void)beginFadingForTrackID:(NSString *)arg1 fadeDuration:(double)arg2;
- (void)endDuckingForTrackID:(NSString *)arg1;
- (void)beginDuckingForTrackID:(NSString *)arg1 toDuckLevel:(double)arg2 fadeDuration:(double)arg3;
- (void)audioFinishedPlayingForTrackID:(NSString *)arg1;
- (void)audioStartedPlayingForTrackID:(NSString *)arg1 withAVAsset:(AVAsset *)arg2 atVolume:(double)arg3;
- (void)couchPotatoPlaybackFinished;
- (void)presentationViewControllerDidAppear:(OKPresentationViewController *)arg1;
- (void)presentationViewControllerDidPrepare:(OKPresentationViewController *)arg1;
@end

