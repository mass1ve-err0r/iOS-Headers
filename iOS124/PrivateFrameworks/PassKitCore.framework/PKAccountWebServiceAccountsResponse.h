//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse
{
    NSArray *_accounts;
    NSString *_lastUpdated;
}

@property(readonly, copy, nonatomic) NSString *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

