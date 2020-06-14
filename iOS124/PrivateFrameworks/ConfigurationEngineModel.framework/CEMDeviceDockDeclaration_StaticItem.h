//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceDockDeclaration_StaticItemTileData, NSString;

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase
{
    CEMDeviceDockDeclaration_StaticItemTileData *_payloadTileData;
    NSString *_payloadTileType;
}

+ (id)buildRequiredOnlyWithTileData:(id)arg1 withTileType:(id)arg2;
+ (id)buildWithTileData:(id)arg1 withTileType:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadTileType; // @synthesize payloadTileType=_payloadTileType;
@property(copy, nonatomic) CEMDeviceDockDeclaration_StaticItemTileData *payloadTileData; // @synthesize payloadTileData=_payloadTileData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

