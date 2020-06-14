//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    int _diffieHellmanGroup;
    int _lifetimeSeconds;
    long long _encryptionAlgorithm;
    long long _integrityAlgorithm;
}

+ (_Bool)supportsSecureCoding;
@property int lifetimeSeconds; // @synthesize lifetimeSeconds=_lifetimeSeconds;
@property int diffieHellmanGroup; // @synthesize diffieHellmanGroup=_diffieHellmanGroup;
@property long long integrityAlgorithm; // @synthesize integrityAlgorithm=_integrityAlgorithm;
@property long long encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

