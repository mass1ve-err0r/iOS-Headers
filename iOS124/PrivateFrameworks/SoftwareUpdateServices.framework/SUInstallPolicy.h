//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@interface SUInstallPolicy : NSObject <NSSecureCoding>
{
    unsigned long long _skipsAllowed;
    unsigned long long _type;
    _Bool _autoUpdateEnabled;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool autoUpdateEnabled; // @synthesize autoUpdateEnabled=_autoUpdateEnabled;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long skipsAllowed; // @synthesize skipsAllowed=_skipsAllowed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_setAutoUpdateEnabled:(_Bool)arg1;
- (void)_setType:(unsigned long long)arg1;
- (id)initWithInstallPolicyType:(unsigned long long)arg1;
- (id)init;

@end

