//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMachPortSendRight, NSArray, _UIHostedWindowHostingHandle, _UIViewServiceInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionInfo : NSObject
{
    int _preferredStatusBarVisibility;
    _UIViewServiceInterface *_interface;
    id _viewControllerOperatorProxy;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    id _textEffectsOperatorProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    BSMachPortSendRight *_serviceAccessibilityServerPortWrapper;
    long long _preferredStatusBarStyle;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowAboveStatusBarHostingHandle;
    _UIHostedWindowHostingHandle *_remoteKeyboardsWindowHostingHandle;
}

@property(retain) _UIHostedWindowHostingHandle *remoteKeyboardsWindowHostingHandle; // @synthesize remoteKeyboardsWindowHostingHandle=_remoteKeyboardsWindowHostingHandle;
@property(retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle; // @synthesize textEffectsWindowAboveStatusBarHostingHandle=_textEffectsWindowAboveStatusBarHostingHandle;
@property(retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle; // @synthesize textEffectsWindowHostingHandle=_textEffectsWindowHostingHandle;
@property(retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property int preferredStatusBarVisibility; // @synthesize preferredStatusBarVisibility=_preferredStatusBarVisibility;
@property long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(retain) BSMachPortSendRight *serviceAccessibilityServerPortWrapper; // @synthesize serviceAccessibilityServerPortWrapper=_serviceAccessibilityServerPortWrapper;
@property(retain) NSArray *serviceViewControllerSupportedInterfaceOrientations; // @synthesize serviceViewControllerSupportedInterfaceOrientations=_serviceViewControllerSupportedInterfaceOrientations;
@property(retain) id textEffectsOperatorProxy; // @synthesize textEffectsOperatorProxy=_textEffectsOperatorProxy;
@property(retain) id serviceViewControllerControlMessageProxy; // @synthesize serviceViewControllerControlMessageProxy=_serviceViewControllerControlMessageProxy;
@property(retain) id serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
@property(retain) id viewControllerOperatorProxy; // @synthesize viewControllerOperatorProxy=_viewControllerOperatorProxy;
@property(retain) _UIViewServiceInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;

@end

