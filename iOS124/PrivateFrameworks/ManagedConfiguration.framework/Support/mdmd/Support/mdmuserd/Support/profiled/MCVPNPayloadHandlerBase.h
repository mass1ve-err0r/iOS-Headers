//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSString;

@interface MCVPNPayloadHandlerBase : MCNewPayloadHandler
{
    struct __SCPreferences *_scPreferences;
    NSString *_originalName;
}

+ (id)managedServiceIDs;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(nonatomic) struct __SCPreferences *scPreferences; // @synthesize scPreferences=_scPreferences;
- (void).cxx_destruct;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)unsetAside;
- (void)setAside;
- (void)remove;
- (_Bool)isInstalled;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)installService:(id)arg1;
- (id)cannotInstallError;
- (id)PPTPDeprecatedError;
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;
- (id)userInputFields;
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;

@end

