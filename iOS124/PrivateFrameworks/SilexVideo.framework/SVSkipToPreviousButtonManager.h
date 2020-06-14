//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVSkipToPreviousButtonManager-Protocol.h>
#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSMutableSet, NSString;
@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving, SVVideoQueueObserving, SVVideoQueueProviding, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoViewControllerProviding;

@interface SVSkipToPreviousButtonManager : NSObject <SVVideoTransitionObserver, SVSkipToPreviousButtonManager>
{
    NSMutableSet *_controls;
    id <SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVVideoSkipLockObserving> _skipLockObserver;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property(retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver; // @synthesize playbackProgressObserver=_playbackProgressObserver;
@property(retain, nonatomic) id <SVVideoSkipLockObserving> skipLockObserver; // @synthesize skipLockObserver=_skipLockObserver;
@property(readonly, nonatomic) id <SVVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property(readonly, nonatomic) id <SVVideoSkipLockObserverFactory> skipLockObserverFactory; // @synthesize skipLockObserverFactory=_skipLockObserverFactory;
@property(readonly, nonatomic) NSMutableSet *controls; // @synthesize controls=_controls;
- (void).cxx_destruct;
- (void)conditionsChanged;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)addControl:(id)arg1;
- (id)initWithSkipLockObserverFactory:(id)arg1 playbackProgressObserverFactory:(id)arg2 videoViewControllerProvider:(id)arg3 queueProvider:(id)arg4 queueObserver:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

