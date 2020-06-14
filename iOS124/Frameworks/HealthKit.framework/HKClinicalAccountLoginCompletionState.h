//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding>
{
    _Bool _wasRelogin;
    HKClinicalAccount *_account;
    NSNumber *_alternateCredentialPersistentID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool wasRelogin; // @synthesize wasRelogin=_wasRelogin;
@property(copy, nonatomic) NSNumber *alternateCredentialPersistentID; // @synthesize alternateCredentialPersistentID=_alternateCredentialPersistentID;
@property(readonly, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 wasRelogin:(_Bool)arg2;

@end

