//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (AuthKit)
+ (id)ak_wrappedAnisetteError:(int)arg1;
+ (id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1;
- (_Bool)ak_isUserTryAgainError;
- (_Bool)ak_isUserSkippedError;
- (_Bool)ak_isUserCancelError;
@end
