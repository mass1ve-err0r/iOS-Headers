//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSSet, SBSStatusBarTapContextImpl;

@protocol SBSStatusBarStyleOverridesAssertionClient <NSObject>
- (void)statusBarTappedWithContext:(SBSStatusBarTapContextImpl *)arg1 reply:(void (^)(void))arg2;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(NSSet *)arg1;
@end

