//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDAssertion, HDAssertionManager;

@protocol HDAssertionObserver <NSObject>
- (void)assertionManager:(HDAssertionManager *)arg1 assertionInvalidated:(HDAssertion *)arg2;

@optional
- (void)assertionManager:(HDAssertionManager *)arg1 assertionTaken:(HDAssertion *)arg2;
@end

