//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DataDetectorsUI/DDRemoteActionHostViewControllerDelegate-Protocol.h>

@class DDRemoteAction, DDRemoteActionHostViewController, NSDate, NSExtension, NSLayoutConstraint, NSMutableArray, NSString, UINavigationController, UIView;
@protocol DDRemoteActionViewServiceProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface DDRemoteActionManagerViewController : UIViewController <DDRemoteActionHostViewControllerDelegate>
{
    DDRemoteActionHostViewController *_remoteViewController;
    id <DDRemoteActionViewServiceProtocol> _serviceContext;
    UIView *_loadingView;
    UIView *_errorView;
    UIView *_titleBar;
    NSLayoutConstraint *_titleBarBottomConstraint;
    NSLayoutConstraint *_navControllerTopConstraint;
    UIView *_hitView;
    UINavigationController *_navigationController;
    NSDate *_loadingDate;
    _Bool _loaded;
    _Bool _displayed;
    _Bool _shouldDeferPresenting;
    NSString *_platerTitle;
    NSMutableArray *_rawSwipeActions;
    DDRemoteActionManagerViewController *_strongSelf;
    _Bool _previewMode;
    DDRemoteAction *_action;
    NSExtension *_extension;
    id <NSCopying> _request;
}

@property(retain) id <NSCopying> request; // @synthesize request=_request;
@property(retain) NSExtension *extension; // @synthesize extension=_extension;
@property __weak DDRemoteAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
- (void).cxx_destruct;
- (void)DDRemoteActionDidTerminateWithError:(id)arg1;
- (void)showErrorView;
- (void)removeLoadingViewToShowView:(id)arg1;
- (void)showLoadingView;
- (id)controllerVerticalMargin;
- (void)unloadRemoteAction;
- (void)updatePreviewMode;
- (void)addHitOverlay;
- (void)presentRemoteViewController;
- (void)showRemoteController;
- (void)loadRemoteAction:(id)arg1;
- (id)previewActionItems;
- (void)loadTitleBarIfNeeded;
- (void)dismissViewController;
- (void)loadNavigationControllerIfNeeded;
- (id)emptyViewcontroller;
- (id)doneButton;
- (id)initWithAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

