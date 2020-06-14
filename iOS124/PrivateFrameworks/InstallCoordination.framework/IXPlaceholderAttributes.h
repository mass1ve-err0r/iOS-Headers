//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _launchProhibited;
    NSString *_bundleVersion;
    NSDictionary *_extensionDictionary;
    NSString *_minimumOSVersion;
    NSDictionary *_requiredDeviceCapabilities;
    NSArray *_sbAppTags;
    NSArray *_lsCounterpartIdentifiers;
    NSString *_sbIconMasqueradeIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sbIconMasqueradeIdentifier; // @synthesize sbIconMasqueradeIdentifier=_sbIconMasqueradeIdentifier;
@property(copy, nonatomic) NSArray *lsCounterpartIdentifiers; // @synthesize lsCounterpartIdentifiers=_lsCounterpartIdentifiers;
@property(copy, nonatomic) NSArray *sbAppTags; // @synthesize sbAppTags=_sbAppTags;
@property(copy, nonatomic) NSDictionary *requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property(copy, nonatomic) NSString *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(copy, nonatomic) NSDictionary *extensionDictionary; // @synthesize extensionDictionary=_extensionDictionary;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
- (void).cxx_destruct;
- (id)description;
- (id)infoPlistContent;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;
- (id)initWithInfoPlistDictionary:(id)arg1;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle *)arg1 error:(id *)arg2;
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id *)arg2;
- (id)_plistKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

