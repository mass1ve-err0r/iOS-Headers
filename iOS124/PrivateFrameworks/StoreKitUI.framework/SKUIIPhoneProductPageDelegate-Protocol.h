//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIIPhoneProductPageViewController, SKUIItem;

@protocol SKUIIPhoneProductPageDelegate <NSObject>

@optional
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SKUIItem *)arg2;
@end

