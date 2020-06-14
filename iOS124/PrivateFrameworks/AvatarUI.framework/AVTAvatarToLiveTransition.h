//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;

@interface AVTAvatarToLiveTransition : AVTTransition
{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

@property(readonly, nonatomic) id <AVTAvatarTransitionModel> avatarTransitionModel; // @synthesize avatarTransitionModel=_avatarTransitionModel;
- (void).cxx_destruct;
- (void)performTransition;
- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;

@end

