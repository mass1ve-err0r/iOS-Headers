//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardUIServices/FBUISceneManager-Protocol.h>

@class FBSDisplayMonitor, NSMutableDictionary, NSString;

@interface FBUISceneManager : NSObject <FBUISceneManager>
{
    NSMutableDictionary *_workspacesByID;
    NSMutableDictionary *_sceneHostsByID;
    FBSDisplayMonitor *_displayMonitor;
}

- (void).cxx_destruct;
- (void)workspace:(id)arg1 destroySceneWithIdentifier:(id)arg2;
- (void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
- (id)workspace:(id)arg1 sceneIdentifierForName:(id)arg2;
- (void)invalidateSceneWorkspace:(id)arg1;
- (void)registerSceneWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

