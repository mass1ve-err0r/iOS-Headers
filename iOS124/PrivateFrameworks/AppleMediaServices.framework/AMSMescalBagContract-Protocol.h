//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLBagContract-Protocol.h>

@class AMSBagValue;

@protocol AMSMescalBagContract <AMSURLBagContract>
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;

@optional
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@end

