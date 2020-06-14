//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXIDCRemoteControllerDelegate-Protocol.h>
#import <AccessibilityUtilities/NSNetServiceBrowserDelegate-Protocol.h>

@class AXIDCSlaveController, NSMutableArray, NSNetServiceBrowser, NSString;
@protocol AXIDCControllerBrowserDelegateProtocol, AXIDCManagerSecurityDelegate;

@interface AXIDCManager : NSObject <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate>
{
    Class _slaveClass;
    Class _remoteClass;
    id <AXIDCControllerBrowserDelegateProtocol> _delegate;
    id <AXIDCManagerSecurityDelegate> _securityDelegate;
    long long _state;
    AXIDCSlaveController *_slaveController;
    NSString *_serviceType;
    NSNetServiceBrowser *_browser;
    NSMutableArray *_remoteControllers;
}

@property(retain, nonatomic) NSMutableArray *remoteControllers; // @synthesize remoteControllers=_remoteControllers;
@property(retain, nonatomic) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) AXIDCSlaveController *slaveController; // @synthesize slaveController=_slaveController;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <AXIDCManagerSecurityDelegate> securityDelegate; // @synthesize securityDelegate=_securityDelegate;
@property(nonatomic) __weak id <AXIDCControllerBrowserDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)stop;
- (id)remoteControllerForHostname:(id)arg1;
- (void)transitionToSlaveWithCompletion:(CDUnknownBlockType)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (void)becomeMaster;
- (_Bool)shouldBecomeMaster;
- (void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(CDUnknownBlockType)arg3;
- (void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearControllers;
- (id)availableRemoteControllers;
- (id)availableControllers;
- (id)initWithServiceType:(id)arg1 remoteClass:(Class)arg2 andSlaveClass:(Class)arg3;
- (id)initWithServiceType:(id)arg1;
- (Class)validateClass:(Class)arg1 isKindOfClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

