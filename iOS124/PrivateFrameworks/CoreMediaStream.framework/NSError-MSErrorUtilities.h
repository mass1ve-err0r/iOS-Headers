//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (id)MSMMCSRetryAfterDate;
- (_Bool)MSIsRegistrationError;
- (_Bool)MSIsQuotaError;
- (_Bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (_Bool)MSIsBadTokenError;
- (_Bool)MSIsAuthError;
- (_Bool)MSIsFatal;
- (_Bool)MSIsCounted;
- (_Bool)MSNeedsBackoff;
- (_Bool)MSCanBeIgnored;
- (_Bool)MSASStateMachineIsCanceledError;
- (_Bool)MSIsTemporaryNetworkError;
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;
- (id)MSFindPrimaryError;
- (id)MSMakePrimaryError;
- (id)MSVerboseDescription;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;
@end

