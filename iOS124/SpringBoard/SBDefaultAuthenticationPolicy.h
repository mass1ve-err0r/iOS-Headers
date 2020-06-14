//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBFAuthenticationPolicy-Protocol.h"

@class NSString, SBSoftwareUpdatePasscodePolicyTypeManager, SecureBackup;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>
{
    SBSoftwareUpdatePasscodePolicyTypeManager *_softwareUpdatePasscodePolicyTypeManager;
    SecureBackup *_secureBackupHelper;
}

@property(retain, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper; // @synthesize secureBackupHelper=_secureBackupHelper;
@property(retain, nonatomic) SBSoftwareUpdatePasscodePolicyTypeManager *softwareUpdatePasscodePolicyTypeManager; // @synthesize softwareUpdatePasscodePolicyTypeManager=_softwareUpdatePasscodePolicyTypeManager;
- (void).cxx_destruct;
- (void)passcodeAuthenticationFailedWithError:(id)arg1;
- (void)clearPasscodeCache;
- (void)cachePasscode:(id)arg1;
- (void)wipeDeviceWithReason:(id)arg1;
- (_Bool)usesSecureMode;
- (_Bool)shouldClearBlockStateOnSync;
- (_Bool)allowAuthenticationRevocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

