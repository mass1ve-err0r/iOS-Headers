//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBUILockScreenDisableAssertion.h>

@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion
{
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end

