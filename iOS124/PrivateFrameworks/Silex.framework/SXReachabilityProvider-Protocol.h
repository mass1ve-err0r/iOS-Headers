//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXReachabilityObserver;

@protocol SXReachabilityProvider <NSObject>
- (void)removeReachabilityObserver:(id <SXReachabilityObserver>)arg1;
- (void)addReachabilityObserver:(id <SXReachabilityObserver>)arg1;
- (_Bool)isNetworkReachable;
@end

