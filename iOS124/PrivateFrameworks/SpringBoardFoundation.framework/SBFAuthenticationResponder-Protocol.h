//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSError, SBFAuthenticationRequest;

@protocol SBFAuthenticationResponder <NSObject>
- (void)handleInvalidAuthenticationRequest:(SBFAuthenticationRequest *)arg1;
- (void)handleFailedAuthenticationRequest:(SBFAuthenticationRequest *)arg1 error:(NSError *)arg2;
- (void)handleSuccessfulAuthenticationRequest:(SBFAuthenticationRequest *)arg1;
@end

