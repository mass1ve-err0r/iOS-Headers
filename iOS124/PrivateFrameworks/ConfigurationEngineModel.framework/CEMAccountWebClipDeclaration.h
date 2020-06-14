//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMAccountWebClipDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadPrecomposed;
    NSNumber *_payloadFullScreen;
    NSString *_payloadURL;
    NSNumber *_payloadIsRemovable;
    NSString *_payloadLabel;
    NSString *_payloadIcon;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withURL:(id)arg2 withLabel:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withPrecomposed:(id)arg2 withFullScreen:(id)arg3 withURL:(id)arg4 withIsRemovable:(id)arg5 withLabel:(id)arg6 withIcon:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadIcon; // @synthesize payloadIcon=_payloadIcon;
@property(copy, nonatomic) NSString *payloadLabel; // @synthesize payloadLabel=_payloadLabel;
@property(copy, nonatomic) NSNumber *payloadIsRemovable; // @synthesize payloadIsRemovable=_payloadIsRemovable;
@property(copy, nonatomic) NSString *payloadURL; // @synthesize payloadURL=_payloadURL;
@property(copy, nonatomic) NSNumber *payloadFullScreen; // @synthesize payloadFullScreen=_payloadFullScreen;
@property(copy, nonatomic) NSNumber *payloadPrecomposed; // @synthesize payloadPrecomposed=_payloadPrecomposed;
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

