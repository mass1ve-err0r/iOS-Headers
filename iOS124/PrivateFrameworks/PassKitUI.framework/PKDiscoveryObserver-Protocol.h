//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKDiscoveryService;

@protocol PKDiscoveryObserver <NSObject>

@optional
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(PKDiscoveryService *)arg1;
- (void)discoveryService:(PKDiscoveryService *)arg1 receivedUpdatedDiscoveryArticleLayouts:(NSArray *)arg2;
@end

