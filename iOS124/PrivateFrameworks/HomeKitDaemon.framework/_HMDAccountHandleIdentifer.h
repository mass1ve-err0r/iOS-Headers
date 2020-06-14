//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class HMDAccountHandle;

__attribute__((visibility("hidden")))
@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier
{
    HMDAccountHandle *_accountHandle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccountHandle:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

