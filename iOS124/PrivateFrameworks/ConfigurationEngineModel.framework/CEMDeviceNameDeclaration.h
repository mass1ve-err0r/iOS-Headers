//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMDeviceNameDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadName;
    NSNumber *_payloadAllowDeviceNameModification;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withAllowDeviceNameModification:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowDeviceNameModification; // @synthesize payloadAllowDeviceNameModification=_payloadAllowDeviceNameModification;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

