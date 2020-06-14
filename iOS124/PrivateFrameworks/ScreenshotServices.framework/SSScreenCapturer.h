//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/SSTestingCoordinatorDelegate-Protocol.h>
#import <ScreenshotServices/SSUIServiceServerDelegate-Protocol.h>

@class SSDittoRemoteConnection, SSScreenshotsWindow, SSSnapshotter, SSTestingCoordinator, SSUIServiceServer, UIWindow;
@protocol SSScreenCapturerDelegate;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate>
{
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSUIServiceServer *_uiServiceServer;
    SSTestingCoordinator *_testingCoordinator;
    SSScreenshotsWindow *_serviceWindow;
    id <SSScreenCapturerDelegate> _delegate;
}

+ (void)playScreenshotSound;
+ (_Bool)shouldUseScreenCapturerForScreenshots;
+ (id)_currentDisplayLayout;
@property(nonatomic) __weak id <SSScreenCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2;
- (id)_testingCoordinator;
@property(readonly, nonatomic) UIWindow *screenshotsWindow;
- (void)server:(id)arg1 receivedRequest:(id)arg2;
- (void)_takeScreenshotWithPresentationOptions:(id)arg1 appleInternalOptions:(id)arg2;
- (void)_preheatAndTakeScreenshotIfPossibleWithPresentationOptions:(id)arg1 appleInternalOptions:(id)arg2;
- (void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2;
- (id)_environmentDescriptionFromImage:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (id)init;

@end

