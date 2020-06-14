//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSAuthenticationBulletinOperation, VSIdentityProvider;

@interface VSStoreAuthenticationNotificationOperation : VSAsyncOperation
{
    VSIdentityProvider *_identityProvider;
    NSURL *_logoCacheURL;
    VSAuthenticationBulletinOperation *_authenticationBulletinOperation;
}

@property(retain, nonatomic) VSAuthenticationBulletinOperation *authenticationBulletinOperation; // @synthesize authenticationBulletinOperation=_authenticationBulletinOperation;
@property(copy, nonatomic) NSURL *logoCacheURL; // @synthesize logoCacheURL=_logoCacheURL;
@property(readonly, copy, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

@end

