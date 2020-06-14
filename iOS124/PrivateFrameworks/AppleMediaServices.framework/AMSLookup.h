//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSProcessInfo, NSString;
@protocol AMSLookupBagContract;

@interface AMSLookup : AMSTask
{
    NSString *_caller;
    AMSProcessInfo *_clientInfo;
    id <AMSLookupBagContract> _contract;
    NSString *_imageProfile;
    NSString *_keyProfile;
    NSString *_platform;
    long long _signatureType;
    long long _version;
    NSString *_language;
}

@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long signatureType; // @synthesize signatureType=_signatureType;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(retain, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(retain, nonatomic) id <AMSLookupBagContract> contract; // @synthesize contract=_contract;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *caller; // @synthesize caller=_caller;
- (void).cxx_destruct;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (void)_addJSSignatureToRequest:(id)arg1;
- (id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2;
- (id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)initWithBagContract:(id)arg1;

@end

