//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneClientSettingsDiff, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage
{
    long long _source;
    FBSSceneSettingsDiff *_settingsDiff;
    FBSSceneClientSettingsDiff *_clientSettingsDiff;
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // @synthesize clientSettingsDiff=_clientSettingsDiff;
@property(retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_settingsDiff;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
@property(readonly, nonatomic) NSSet *actions;
- (id)init;

@end

