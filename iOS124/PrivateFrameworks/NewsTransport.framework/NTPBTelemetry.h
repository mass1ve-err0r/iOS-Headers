//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTelemetry : PBCodable <NSCopying>
{
    long long _appBuild;
    NSString *_appVersion;
    NSString *_carrier;
    int _contentEnvironment;
    NSString *_countryCode;
    NSString *_deviceModel;
    NSString *_devicePlatform;
    NSString *_languageCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSMutableArray *_networkEventGroups;
    NSString *_osCountryCode;
    int _osInstallVariant;
    NSString *_osVersion;
    NSString *_userId;
    NSString *_userStorefrontId;
    struct {
        unsigned int appBuild:1;
        unsigned int contentEnvironment:1;
        unsigned int osInstallVariant:1;
    } _has;
}

+ (Class)networkEventGroupsType;
@property(retain, nonatomic) NSMutableArray *networkEventGroups; // @synthesize networkEventGroups=_networkEventGroups;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *osCountryCode; // @synthesize osCountryCode=_osCountryCode;
@property(retain, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(retain, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long appBuild; // @synthesize appBuild=_appBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)networkEventGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkEventGroupsCount;
- (void)addNetworkEventGroups:(id)arg1;
- (void)clearNetworkEventGroups;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
@property(readonly, nonatomic) _Bool hasUserId;
@property(nonatomic) _Bool hasContentEnvironment;
@property(nonatomic) int contentEnvironment; // @synthesize contentEnvironment=_contentEnvironment;
- (int)StringAsOsInstallVariant:(id)arg1;
- (id)osInstallVariantAsString:(int)arg1;
@property(nonatomic) _Bool hasOsInstallVariant;
@property(nonatomic) int osInstallVariant; // @synthesize osInstallVariant=_osInstallVariant;
@property(readonly, nonatomic) _Bool hasOsCountryCode;
@property(readonly, nonatomic) _Bool hasMobileNetworkCode;
@property(readonly, nonatomic) _Bool hasMobileCountryCode;
@property(readonly, nonatomic) _Bool hasCarrier;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasAppBuild;
@property(readonly, nonatomic) _Bool hasAppVersion;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasDevicePlatform;
@property(readonly, nonatomic) _Bool hasDeviceModel;

@end

