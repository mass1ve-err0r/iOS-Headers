//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse
{
    NSString *_conversationIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (void).cxx_destruct;

@end

