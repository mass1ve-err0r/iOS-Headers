//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PKPaymentDigitalIssuanceMetadata : NSObject
{
    NSString *_serviceProviderIdentifier;
    NSString *_serviceProviderCountryCode;
    NSArray *_serviceProviderSupportedNetworks;
    NSArray *_serviceProviderCapabilities;
    NSDictionary *_serviceProviderDict;
    NSString *_action;
    NSString *_merchantID;
    NSArray *_defaultSuggestions;
}

@property(readonly, copy, nonatomic) NSArray *defaultSuggestions; // @synthesize defaultSuggestions=_defaultSuggestions;
@property(readonly, copy, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSDictionary *serviceProviderDict; // @synthesize serviceProviderDict=_serviceProviderDict;
@property(readonly, copy, nonatomic) NSArray *serviceProviderCapabilities; // @synthesize serviceProviderCapabilities=_serviceProviderCapabilities;
@property(readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks; // @synthesize serviceProviderSupportedNetworks=_serviceProviderSupportedNetworks;
@property(readonly, copy, nonatomic) NSString *serviceProviderCountryCode; // @synthesize serviceProviderCountryCode=_serviceProviderCountryCode;
@property(readonly, copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

