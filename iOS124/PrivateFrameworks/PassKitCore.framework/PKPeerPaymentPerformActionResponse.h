//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse
{
    _Bool _success;
    long long _status;
}

@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id)initWithData:(id)arg1;

@end

