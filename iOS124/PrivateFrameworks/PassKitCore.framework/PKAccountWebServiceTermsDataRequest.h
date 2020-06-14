//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceTermsDataRequest : PKAccountWebServiceRequest
{
    NSURL *_baseURL;
    NSString *_accountIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsDataFormat;
}

@property(copy, nonatomic) NSString *termsDataFormat; // @synthesize termsDataFormat=_termsDataFormat;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

