//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDExternalDeviceServerClientConnection, MRDPinPairingDialog;

@protocol MRDPinPairingDialogDelegate <NSObject>

@optional
- (void)pinPairingDialogDidClose:(MRDPinPairingDialog *)arg1 forClient:(MRDExternalDeviceServerClientConnection *)arg2 userCancelled:(_Bool)arg3;
- (void)pinPairingDialogDidOpen:(MRDPinPairingDialog *)arg1 forClient:(MRDExternalDeviceServerClientConnection *)arg2;
@end

