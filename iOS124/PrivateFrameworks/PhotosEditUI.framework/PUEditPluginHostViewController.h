//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosEditUI/PLDismissableViewController-Protocol.h>

@class NSNumber, NSString, PUEditPlugin;
@protocol NSCopying, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditPluginHostViewController : UIViewController <PLDismissableViewController>
{
    _Bool __extensionDidBeginContentEditing;
    _Bool __didHandleCancel;
    _Bool __didHandleDone;
    PUEditPlugin *_plugin;
    id <PUEditPluginHostViewControllerDataSource> _dataSource;
    id <PUEditPluginHostViewControllerDelegate> _delegate;
    UIViewController *__remoteViewController;
    id <NSCopying> __request;
    id __disablingIdleTimerToken;
    NSNumber *__allowsFullScreen;
}

@property(retain, nonatomic, setter=_setAllowsFullScreen:) NSNumber *_allowsFullScreen; // @synthesize _allowsFullScreen=__allowsFullScreen;
@property(retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken; // @synthesize _disablingIdleTimerToken=__disablingIdleTimerToken;
@property(nonatomic, setter=_setDidHandleDone:) _Bool _didHandleDone; // @synthesize _didHandleDone=__didHandleDone;
@property(nonatomic, setter=_setDidHandleCancel:) _Bool _didHandleCancel; // @synthesize _didHandleCancel=__didHandleCancel;
@property(nonatomic, setter=_setExtensionDidBeginContentEditing:) _Bool _extensionDidBeginContentEditing; // @synthesize _extensionDidBeginContentEditing=__extensionDidBeginContentEditing;
@property(copy, setter=_setRequest:) id <NSCopying> _request; // @synthesize _request=__request;
@property(retain, setter=_setRemoteViewController:) UIViewController *_remoteViewController; // @synthesize _remoteViewController=__remoteViewController;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_beginDisablingIdleTimer;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_dismiss;
- (id)_extensionVendorProxy;
- (id)_hostContext;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(_Bool)arg1;
- (void)_beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryAllowsFullScreen:(CDUnknownBlockType)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

