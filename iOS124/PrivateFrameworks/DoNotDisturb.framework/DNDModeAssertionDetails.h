//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDModeAssertionLifetime, NSString;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _userRequested;
    NSString *_identifier;
    NSString *_modeIdentifier;
    DNDModeAssertionLifetime *_lifetime;
    unsigned long long _syncSuppressionOptions;
}

+ (id)_lifetimeClasses;
+ (_Bool)supportsSecureCoding;
+ (id)userRequestedAssertionDetailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;
+ (id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;
@property(readonly, nonatomic) unsigned long long syncSuppressionOptions; // @synthesize syncSuppressionOptions=_syncSuppressionOptions;
@property(readonly, nonatomic, getter=isUserRequested) _Bool userRequested; // @synthesize userRequested=_userRequested;
@property(readonly, copy, nonatomic) DNDModeAssertionLifetime *lifetime; // @synthesize lifetime=_lifetime;
@property(readonly, copy, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 userRequested:(_Bool)arg4 syncSuppressionOptions:(unsigned long long)arg5;

@end
