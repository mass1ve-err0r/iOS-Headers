//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MIME)
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;
+ (id)mf_timeoutError;
+ (id)mf_cancelledError;
- (_Bool)mf_isTimeoutError;
- (_Bool)mf_isCancelledError;
@end

