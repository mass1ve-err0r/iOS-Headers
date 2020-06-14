//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSData, NSString;

@interface CEMManagementUpdateEnrollmentCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSData *_payloadProfile;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProfile:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withProfile:(id)arg2;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSData *payloadProfile; // @synthesize payloadProfile=_payloadProfile;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (_Bool)mustBeSupervised;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

