//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest
{
    NSString *_authToken;
    NSString *_personID;
}

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3;

@end

