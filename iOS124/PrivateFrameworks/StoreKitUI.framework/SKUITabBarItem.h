//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL, UIColor, UITabBarItem, UIViewController;

@interface SKUITabBarItem : NSObject <NSCopying>
{
    _Bool _alwaysCreatesRootViewController;
    long long _barTintStyle;
    UIViewController *_customRootViewController;
    NSString *_metricsIdentifier;
    NSURL *_rootURL;
    Class _rootViewControllerClass;
    NSString *_tabIdentifier;
    UITabBarItem *_underlyingTabBarItem;
    UIColor *_userInterfaceTintColor;
}

@property(retain, nonatomic) UIColor *userInterfaceTintColor; // @synthesize userInterfaceTintColor=_userInterfaceTintColor;
@property(retain, nonatomic) UITabBarItem *underlyingTabBarItem; // @synthesize underlyingTabBarItem=_underlyingTabBarItem;
@property(readonly, nonatomic) NSString *tabIdentifier; // @synthesize tabIdentifier=_tabIdentifier;
@property(retain, nonatomic) Class rootViewControllerClass; // @synthesize rootViewControllerClass=_rootViewControllerClass;
@property(copy, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property(copy, nonatomic) NSString *metricsIdentifier; // @synthesize metricsIdentifier=_metricsIdentifier;
@property(retain, nonatomic) UIViewController *customRootViewController; // @synthesize customRootViewController=_customRootViewController;
@property(nonatomic) long long barTintStyle; // @synthesize barTintStyle=_barTintStyle;
@property(nonatomic) _Bool alwaysCreatesRootViewController; // @synthesize alwaysCreatesRootViewController=_alwaysCreatesRootViewController;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTabIdentifier:(id)arg1;
- (id)init;

@end

