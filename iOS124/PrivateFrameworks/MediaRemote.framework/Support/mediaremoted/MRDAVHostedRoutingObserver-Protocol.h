//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDAVHostedRoutingController, NSArray;

@protocol MRDAVHostedRoutingObserver <NSObject>
@property(nonatomic) unsigned int discoveryMode;
- (void)hostedRoutingController:(MRDAVHostedRoutingController *)arg1 outputDevicesDidChange:(NSArray *)arg2;
- (void)hostedRoutingController:(MRDAVHostedRoutingController *)arg1 endpointsDidChange:(NSArray *)arg2;
@end

