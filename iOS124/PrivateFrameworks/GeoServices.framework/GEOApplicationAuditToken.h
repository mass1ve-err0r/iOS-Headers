//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding>
{
    NSData *_tokenData;
    NSString *_proxiedBundleId;
    NSString *_resolvedBundleId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *proxiedBundleId; // @synthesize proxiedBundleId=_proxiedBundleId;
- (void).cxx_destruct;
- (id)_bundleIdForAuditToken;
- (_Bool)isEqual:(id)arg1;
- (id)bundleId;
- (id)backingTokenData;
- (id)init;
- (id)publicLogDescription;
- (id)description;
- (id)initWithProxiedApplicationBundleId:(id)arg1;
- (id)initWithAuditTokenData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end

