//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIResourceLoader;

@protocol SKUIResourceLoaderDelegate <NSObject>

@optional
- (void)resourceLoader:(SKUIResourceLoader *)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidIdle:(SKUIResourceLoader *)arg1;
- (void)resourceLoaderDidBeginLoading:(SKUIResourceLoader *)arg1;
@end

