//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/NSObject-Protocol.h>

@class SCNScene;
@protocol SCNSceneRenderer;

@protocol _SCNSceneRendererDelegate <NSObject>

@optional
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 willRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 updateAtTime:(double)arg2;
@end

