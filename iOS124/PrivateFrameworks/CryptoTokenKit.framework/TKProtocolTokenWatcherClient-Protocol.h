//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSXPCListenerEndpoint;

@protocol TKProtocolTokenWatcherClient
- (void)getEndpoint:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)addWatcherWithEndpoint:(NSXPCListenerEndpoint *)arg1 reply:(void (^)(NSArray *))arg2;
@end

