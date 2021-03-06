//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HKOAuth2)
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(out id *)arg3;
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;
+ (id)hk_OAuth2_error:(long long)arg1;
- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;
- (_Bool)hk_OAuth2_isBearerAuthenticationError;
- (_Bool)hk_OAuth2_isAccessDeniedError;
- (_Bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;
- (_Bool)hk_OAuth2_isOAuth2Error;
@end

