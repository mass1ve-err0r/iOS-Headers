//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKApplicationViewController.h>

@class CMKCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUCameraApplicationViewController : CMKApplicationViewController
{
    CMKCameraRollSpec *_spec;
    DeferredFrameworkLoader *_deferredLoader;
}

@property(retain, nonatomic) DeferredFrameworkLoader *deferredLoader; // @synthesize deferredLoader=_deferredLoader;
@property(retain, nonatomic) CMKCameraRollSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)definesPresentationContext;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg1;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(_Bool)arg2;
- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;

@end

