//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSRequest.h>

@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest
{
    CTCallForwardingValue *_value;
}

+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) CTCallForwardingValue *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionContext:(id)arg1 value:(id)arg2;
- (id)initWithSubscriptionContext:(id)arg1;

@end

