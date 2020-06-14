//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSOperationQueue, VSAuditToken, VSOptional;
@protocol VSSupportedAppsViewControllerDelegate;

@interface VSSupportedAppsViewController : UIViewController
{
    VSOptional *_identityProvider;
    VSAuditToken *_auditToken;
    id <VSSupportedAppsViewControllerDelegate> _delegate;
    NSOperationQueue *_privateQueue;
    NSArray *_apps;
}

@property(copy, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSSupportedAppsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) VSOptional *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)beginLoadingApps;
- (void)_finishLoadingApps:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_doneButtonPresed:(id)arg1;
- (void)_didFinish;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

