//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFPairingIdentity.h>

@interface HAPPairingIdentity : HMFPairingIdentity
{
    unsigned long long _permissions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long permissions; // @synthesize permissions=_permissions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;

@end

