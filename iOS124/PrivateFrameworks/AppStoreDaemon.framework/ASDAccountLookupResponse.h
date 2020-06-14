//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSError, NSNumber;

@interface ASDAccountLookupResponse : ASDRequestResponse
{
    _Bool _askToBuyEnabled;
    NSNumber *_accountID;
}

+ (_Bool)supportsSecureCoding;
@property _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(copy) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSError *error; // @dynamic error;

@end
