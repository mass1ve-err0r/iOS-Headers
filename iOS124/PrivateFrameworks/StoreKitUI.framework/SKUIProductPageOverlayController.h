//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKStoreProductViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIIPadProductPageDelegate-Protocol.h>

@class NSArray, NSString, SKUIClientContext, SKUIItem, SKUIOverlayContainerViewController, UIView, UIViewController;
@protocol SKUIProductPageOverlayDelegate;

@interface SKUIProductPageOverlayController : NSObject <SKUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate>
{
    SKUIClientContext *_clientContext;
    id <SKUIProductPageOverlayDelegate> _delegate;
    SKUIItem *_initialItem;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIViewController *_parentViewController;
}

@property(readonly, nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak id <SKUIProductPageOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showWithInitialViewController:(id)arg1;
- (void)_showOverlayViewController;
- (void)_removeOverlayViewController;
- (void)_finishDismissAndNotifyDelegate:(_Bool)arg1 withViewController:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)_backstopViewAction:(id)arg1;
- (void)iPadProductPageCannotOpen:(id)arg1;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(CDUnknownBlockType)arg3;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) NSArray *URLs;
- (void)showWithInitialURLs:(id)arg1;
- (void)showWithInitialURLRequest:(id)arg1;
- (void)showWithInitialURL:(id)arg1;
- (void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)showWithInitialItemIdentifier:(long long)arg1;
- (void)showWithInitialItem:(id)arg1;
@property(readonly, nonatomic) long long numberOfVisibleOverlays;
- (void)dismiss;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

