//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleViewStyler-Protocol.h>

@class UIColor;

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler>
{
    UIColor *_backgroundColor;
    long long _statusBarStyle;
    long long _topBackgroundStatusBarStyle;
    UIColor *_tabBarTintColor;
    UIColor *_toolbarTintColor;
}

@property(retain, nonatomic) UIColor *toolbarTintColor; // @synthesize toolbarTintColor=_toolbarTintColor;
@property(retain, nonatomic) UIColor *tabBarTintColor; // @synthesize tabBarTintColor=_tabBarTintColor;
@property(readonly, nonatomic) long long topBackgroundStatusBarStyle; // @synthesize topBackgroundStatusBarStyle=_topBackgroundStatusBarStyle;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;
- (void)styleToolbar:(id)arg1;
- (void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
- (void)styleTabBar:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2;

@end

