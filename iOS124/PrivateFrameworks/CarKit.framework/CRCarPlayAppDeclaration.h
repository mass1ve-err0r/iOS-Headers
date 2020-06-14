//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface CRCarPlayAppDeclaration : NSObject
{
    _Bool _systemApp;
    _Bool _requiresGeoSupport;
    _Bool _launchUsingSiri;
    _Bool _supportsPlayableContent;
    _Bool _supportsMessaging;
    _Bool _supportsCalling;
    _Bool _supportsMaps;
    NSString *_bundleIdentifier;
    NSSet *_autoMakerProtocols;
}

+ (id)declarationForBundleIdentifier:(id)arg1 entitlements:(id)arg2 infoPlist:(id)arg3;
+ (id)declarationForAppProxy:(id)arg1;
+ (id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3;
+ (id)requiredEntitlementKeys;
+ (id)requiredInfoKeys;
@property(retain, nonatomic) NSSet *autoMakerProtocols; // @synthesize autoMakerProtocols=_autoMakerProtocols;
@property(nonatomic) _Bool supportsMaps; // @synthesize supportsMaps=_supportsMaps;
@property(nonatomic) _Bool supportsCalling; // @synthesize supportsCalling=_supportsCalling;
@property(nonatomic) _Bool supportsMessaging; // @synthesize supportsMessaging=_supportsMessaging;
@property(nonatomic) _Bool supportsPlayableContent; // @synthesize supportsPlayableContent=_supportsPlayableContent;
@property(nonatomic) _Bool launchUsingSiri; // @synthesize launchUsingSiri=_launchUsingSiri;
@property(nonatomic) _Bool requiresGeoSupport; // @synthesize requiresGeoSupport=_requiresGeoSupport;
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;

@end

