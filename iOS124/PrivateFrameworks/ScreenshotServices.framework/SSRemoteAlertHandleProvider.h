//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSString, SBSRemoteAlertHandle;
@protocol SSRemoteAlertHandleProviderDelegate;

@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver>
{
    SBSRemoteAlertHandle *_handle;
    id <SSRemoteAlertHandleProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SSRemoteAlertHandleProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)screenshotServicesAlertHandle;
- (id)_screenshotServicesServiceAlertDefinition;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)_callDelegate:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)prepare;
@property(readonly, nonatomic) _Bool isActive;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

