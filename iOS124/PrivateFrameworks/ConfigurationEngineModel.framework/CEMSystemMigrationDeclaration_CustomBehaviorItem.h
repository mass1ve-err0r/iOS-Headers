//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase
{
    NSString *_payloadContext;
    NSArray *_payloadPaths;
}

+ (id)buildRequiredOnlyWithContext:(id)arg1 withPaths:(id)arg2;
+ (id)buildWithContext:(id)arg1 withPaths:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadPaths; // @synthesize payloadPaths=_payloadPaths;
@property(copy, nonatomic) NSString *payloadContext; // @synthesize payloadContext=_payloadContext;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
