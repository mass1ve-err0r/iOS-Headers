//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForIdentifierQuery : _LSBundleQuery
{
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)alwaysAllowedBundleIdentifiers;
+ (id)queryWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

