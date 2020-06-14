//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICanvasSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UICanvasStatusBarSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsStatusBarDiffInspector;
}

@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsStatusBarDiffInspector; // @synthesize sceneSettingsStatusBarDiffInspector=_sceneSettingsStatusBarDiffInspector;
- (void).cxx_destruct;
- (void)_updateForcedStatusBarForegroundTransparentWithSceneSettings:(id)arg1 transitionContext:(id)arg2;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

