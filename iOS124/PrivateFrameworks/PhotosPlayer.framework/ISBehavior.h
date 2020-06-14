//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISPlayerState;
@protocol ISBehaviorDelegate;

@interface ISBehavior : NSObject
{
    _Bool _active;
    id <ISBehaviorDelegate> _delegate;
    ISPlayerState *_initialLayoutInfo;
}

@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) ISPlayerState *initialLayoutInfo; // @synthesize initialLayoutInfo=_initialLayoutInfo;
@property(nonatomic) __weak id <ISBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoWillPlayToEnd;
- (void)videoWillPlayToPhoto;
- (void)videoDidPlayToEnd;
- (void)setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)prerollVideoAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setVideoVolume:(float)arg1;
- (void)setVideoPlayRate:(float)arg1;
- (void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)videoPlayerItemDidChange;
- (void)activeDidChange;
- (void)resignActive;
- (void)becomeActive;
@property(readonly, nonatomic) long long behaviorType;
- (id)initWithInitialLayoutInfo:(id)arg1;

@end

