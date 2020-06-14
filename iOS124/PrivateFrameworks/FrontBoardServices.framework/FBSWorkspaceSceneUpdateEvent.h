//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneSettingsDiff, FBSSceneTransitionContext;

@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent
{
    FBSSceneSettingsDiff *_settings;
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_settings;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

