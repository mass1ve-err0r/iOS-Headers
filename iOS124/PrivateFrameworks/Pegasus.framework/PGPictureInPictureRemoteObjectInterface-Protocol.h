//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class NSArray, PGHostedWindowHostingHandle, PGPlaybackProgress;

@protocol PGPictureInPictureRemoteObjectInterface <NSObject>
- (oneway void)setLoadedTimeRanges:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setPlaybackProgress:(PGPlaybackProgress *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setShouldShowLoadingIndicator:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setShouldShowAlternateActionButtonImage:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)cleanupWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(void (^)(_Bool, NSError *, BKSAnimationFenceHandle *))arg4;
- (oneway void)setupStopAnimated:(_Bool)arg1 activateApplicationIfNeeded:(_Bool)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(void (^)(_Bool, NSError *, BKSAnimationFenceHandle *))arg2;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setupStartAnimated:(_Bool)arg1 hostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg2 preferredContentSize:(struct CGSize)arg3 initialInterfaceOrientation:(long long)arg4 initialLayerFrame:(struct CGRect)arg5 completionHandler:(void (^)(_Bool, NSError *))arg6;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end

