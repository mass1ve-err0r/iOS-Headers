//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICDelegateToken, ICUserIdentity, ICUserIdentityProperties, NSArray, NSDate;

@protocol ICDelegateAccountStoreWriter <NSObject>
- (void)removeAllTokensWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)removeTokensExpiringBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)setToken:(ICDelegateToken *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeTokenForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)addDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeIdentityPropertiesForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

