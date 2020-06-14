//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/SFWebAppRemoteViewControllerProtocol-Protocol.h>

@class NSString;
@protocol _SFWebAppViewControllerDelegate;

@interface _SFWebAppViewController : _UIRemoteViewController <SFWebAppRemoteViewControllerProtocol>
{
    id <_SFWebAppViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <_SFWebAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didChangeFullScreen:(_Bool)arg1;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(_Bool)arg2;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;
- (void)didChangeLoadingState:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadWebAppWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

