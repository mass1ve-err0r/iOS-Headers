//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SBSRemoteAlertHandle;

@protocol SBSRemoteAlertHandleObserver <NSObject>

@optional
- (void)remoteAlertHandle:(SBSRemoteAlertHandle *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(SBSRemoteAlertHandle *)arg1;
- (void)remoteAlertHandleDidActivate:(SBSRemoteAlertHandle *)arg1;
@end

