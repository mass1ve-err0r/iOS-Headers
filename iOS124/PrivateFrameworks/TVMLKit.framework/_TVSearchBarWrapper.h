//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _TVSearchBarWrapper : UIView
{
    UISearchBar *_searchBar;
    _Bool _enabled;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (_Bool)canBecomeFocused;

@end

