//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    UIButton *_contentButton;
}

+ (id)_defaultTitleAttributes;
- (void).cxx_destruct;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (id)_defaultTitleAttributes;
- (id)_newButton;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;

@end

