//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFSigningOperation-Protocol.h>

@class NSString, _SFKeySpecifier;

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation>
{
    id _messageAuthenticationCodeOperationInternal;
}

+ (_Bool)supportsSecureCoding;
+ (id)_defaultMacOperation;
- (void).cxx_destruct;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier; // @dynamic signingKeySpecifier;
@property(readonly) Class superclass;

@end

