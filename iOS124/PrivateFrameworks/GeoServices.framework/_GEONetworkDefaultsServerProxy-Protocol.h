//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;

@protocol _GEONetworkDefaultsServerProxy <NSObject>
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate;
- (void)updateNetworkDefaults:(void (^)(NSError *))arg1;
@end

