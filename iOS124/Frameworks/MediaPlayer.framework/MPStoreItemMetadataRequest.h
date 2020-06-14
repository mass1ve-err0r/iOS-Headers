//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICClientInfo, ICStorePlatformRequest, ICUserIdentity, ICUserIdentityStore, NSArray, NSNumber, NSString;

@interface MPStoreItemMetadataRequest : NSObject
{
    _Bool _allowLocalEquivalencies;
    _Bool _shouldIgnoreCache;
    _Bool _shouldRequireCachedResults;
    unsigned long long _reason;
    NSArray *_itemIdentifiers;
    NSNumber *_timeoutInterval;
    NSString *_platform;
    double _retryDelay;
    NSString *_clientIdentifier;
    long long _personalizationStyle;
    ICClientInfo *_clientInfo;
    ICUserIdentity *_delegatedUserIdentity;
    ICUserIdentity *_userIdentity;
    ICUserIdentityStore *_userIdentityStore;
}

+ (id)itemIdentifiersForModelObjects:(id)arg1;
@property(retain, nonatomic) ICUserIdentityStore *userIdentityStore; // @synthesize userIdentityStore=_userIdentityStore;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(copy, nonatomic) ICUserIdentity *delegatedUserIdentity; // @synthesize delegatedUserIdentity=_delegatedUserIdentity;
@property(copy, nonatomic) ICClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) _Bool shouldRequireCachedResults; // @synthesize shouldRequireCachedResults=_shouldRequireCachedResults;
@property(nonatomic) _Bool shouldIgnoreCache; // @synthesize shouldIgnoreCache=_shouldIgnoreCache;
@property(nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSNumber *timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) ICStorePlatformRequest *storePlatformRequest;
@property(copy, nonatomic) NSString *requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier;
@property(readonly, nonatomic, getter=isPersonalized) _Bool personalized;
- (id)init;

@end

