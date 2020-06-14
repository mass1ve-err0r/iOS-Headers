//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSceneViewController.h"

#import "SBApplicationSceneViewControlling-Protocol.h"

@class NSString, SBApplicationSceneView, SBSceneHandle, UIView;
@protocol SBScenePlaceholderContentContext;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling>
{
}

- (id)initWithSceneHandle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
@property(readonly, nonatomic, getter=_sceneView) SBApplicationSceneView *sceneView; // @dynamic sceneView;
@property(readonly) Class superclass;

@end

