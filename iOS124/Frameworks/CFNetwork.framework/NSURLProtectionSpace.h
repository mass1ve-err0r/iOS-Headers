//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>
{
    NSURLProtectionSpaceInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;
@property(readonly, copy) NSString *protocol;
- (struct __SecTrust *)serverTrust;
- (id)distinguishedNames;
@property(readonly, copy) NSString *authenticationMethod;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *proxyType;
@property(readonly) long long port;
@property(readonly, copy) NSString *host;
@property(readonly) _Bool isProxy;
@property(readonly) _Bool receivesCredentialSecurely;
@property(readonly, copy) NSString *realm;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg1;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)_internalInit;

@end

