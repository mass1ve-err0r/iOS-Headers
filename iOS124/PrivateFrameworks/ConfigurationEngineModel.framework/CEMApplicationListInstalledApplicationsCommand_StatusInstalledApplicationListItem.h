//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationListInstalledApplicationsCommand_StatusInstalledApplicationListItem : CEMPayloadBase
{
    NSString *_statusIdentifier;
    NSString *_statusExternalVersionIdentifier;
    NSString *_statusVersion;
    NSString *_statusShortVersion;
    NSString *_statusName;
    NSString *_statusBundleSize;
    NSString *_statusDynamicSize;
    NSNumber *_statusIsValidated;
    NSNumber *_statusInstalling;
    NSNumber *_statusAppStoreVendable;
    NSNumber *_statusDeviceBasedVPP;
    NSNumber *_statusBetaApp;
    NSNumber *_statusAdHocCodeSigned;
    NSNumber *_statusHasUpdateAvailable;
    NSNumber *_statusDownloadFailed;
    NSNumber *_statusDownloadWaiting;
    NSNumber *_statusDownloadPaused;
    NSNumber *_statusDownloadCancelled;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withAppStoreVendable:(id)arg6 withDeviceBasedVPP:(id)arg7 withBetaApp:(id)arg8 withAdHocCodeSigned:(id)arg9 withHasUpdateAvailable:(id)arg10;
+ (id)buildWithIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withBundleSize:(id)arg6 withDynamicSize:(id)arg7 withIsValidated:(id)arg8 withInstalling:(id)arg9 withAppStoreVendable:(id)arg10 withDeviceBasedVPP:(id)arg11 withBetaApp:(id)arg12 withAdHocCodeSigned:(id)arg13 withHasUpdateAvailable:(id)arg14 withDownloadFailed:(id)arg15 withDownloadWaiting:(id)arg16 withDownloadPaused:(id)arg17 withDownloadCancelled:(id)arg18;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSNumber *statusDownloadCancelled; // @synthesize statusDownloadCancelled=_statusDownloadCancelled;
@property(copy, nonatomic) NSNumber *statusDownloadPaused; // @synthesize statusDownloadPaused=_statusDownloadPaused;
@property(copy, nonatomic) NSNumber *statusDownloadWaiting; // @synthesize statusDownloadWaiting=_statusDownloadWaiting;
@property(copy, nonatomic) NSNumber *statusDownloadFailed; // @synthesize statusDownloadFailed=_statusDownloadFailed;
@property(copy, nonatomic) NSNumber *statusHasUpdateAvailable; // @synthesize statusHasUpdateAvailable=_statusHasUpdateAvailable;
@property(copy, nonatomic) NSNumber *statusAdHocCodeSigned; // @synthesize statusAdHocCodeSigned=_statusAdHocCodeSigned;
@property(copy, nonatomic) NSNumber *statusBetaApp; // @synthesize statusBetaApp=_statusBetaApp;
@property(copy, nonatomic) NSNumber *statusDeviceBasedVPP; // @synthesize statusDeviceBasedVPP=_statusDeviceBasedVPP;
@property(copy, nonatomic) NSNumber *statusAppStoreVendable; // @synthesize statusAppStoreVendable=_statusAppStoreVendable;
@property(copy, nonatomic) NSNumber *statusInstalling; // @synthesize statusInstalling=_statusInstalling;
@property(copy, nonatomic) NSNumber *statusIsValidated; // @synthesize statusIsValidated=_statusIsValidated;
@property(copy, nonatomic) NSString *statusDynamicSize; // @synthesize statusDynamicSize=_statusDynamicSize;
@property(copy, nonatomic) NSString *statusBundleSize; // @synthesize statusBundleSize=_statusBundleSize;
@property(copy, nonatomic) NSString *statusName; // @synthesize statusName=_statusName;
@property(copy, nonatomic) NSString *statusShortVersion; // @synthesize statusShortVersion=_statusShortVersion;
@property(copy, nonatomic) NSString *statusVersion; // @synthesize statusVersion=_statusVersion;
@property(copy, nonatomic) NSString *statusExternalVersionIdentifier; // @synthesize statusExternalVersionIdentifier=_statusExternalVersionIdentifier;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

