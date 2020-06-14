//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface AMSAuthenticateOptions : NSObject <NSCopying>
{
    unsigned long long _authenticationType;
    _Bool _allowServerDialogs;
    _Bool _canMakeAccountActive;
    _Bool _allowSecondaryCredentialSource;
    _Bool _remoteProxyAuthentication;
    NSDictionary *_createAccountQueryParams;
    NSString *_defaultButtonString;
    NSString *_logKey;
    id _presentingViewController;
    NSString *_promptTitle;
    NSString *_proxyAppBundleID;
    NSString *_proxyAppName;
    NSString *_reason;
    NSString *_userAgent;
    unsigned long long _credentialSource;
    NSString *_mediaType;
}

@property(readonly, nonatomic, getter=isRemoteProxyAuthentication) _Bool remoteProxyAuthentication; // @synthesize remoteProxyAuthentication=_remoteProxyAuthentication;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property(nonatomic) _Bool allowSecondaryCredentialSource; // @synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *proxyAppName; // @synthesize proxyAppName=_proxyAppName;
@property(retain, nonatomic) NSString *proxyAppBundleID; // @synthesize proxyAppBundleID=_proxyAppBundleID;
@property(retain, nonatomic) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
@property(retain, nonatomic) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property(retain, nonatomic) NSDictionary *createAccountQueryParams; // @synthesize createAccountQueryParams=_createAccountQueryParams;
@property(nonatomic) _Bool canMakeAccountActive; // @synthesize canMakeAccountActive=_canMakeAccountActive;
@property(nonatomic) _Bool allowServerDialogs; // @synthesize allowServerDialogs=_allowServerDialogs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(nonatomic) unsigned long long authenticationType;
@property(readonly, nonatomic) NSDictionary *optionsDictionaryForRemoteProxyAuthentication;
- (id)optionsDictionary;
@property(readonly, nonatomic) _Bool allowSilentAuthentication;
- (id)initWithOptionsDictionary:(id)arg1;
- (id)init;

@end

