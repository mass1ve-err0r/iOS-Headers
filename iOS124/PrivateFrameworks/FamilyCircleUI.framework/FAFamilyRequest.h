//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount;

@interface FAFamilyRequest : AAFamilyRequest
{
    ACAccount *_appleAccount;
}

@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
- (void).cxx_destruct;
- (void)_configureRequest:(id)arg1 includePayload:(_Bool)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;

@end

