//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSString, NSURL;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest
{
    NSString *_applicationIdentifier;
    unsigned long long _featureIdentifier;
    NSArray *_certificates;
    NSURL *_baseURL;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    NSString *_actionIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *previousContextIdentifier; // @synthesize previousContextIdentifier=_previousContextIdentifier;
@property(copy, nonatomic) NSString *coreIDVNextStepToken; // @synthesize coreIDVNextStepToken=_coreIDVNextStepToken;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

