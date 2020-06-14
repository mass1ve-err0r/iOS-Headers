//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/ENCypher-Protocol.h>

@class NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)cypherWithEndpoint:(id)arg1 error:(id *)arg2;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id *)arg5;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSString *identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

