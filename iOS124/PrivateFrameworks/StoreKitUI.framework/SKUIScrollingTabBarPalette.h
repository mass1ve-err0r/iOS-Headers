//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SKUIScrollingTabBarBackgroundView;
@protocol SKUIScrollingTabBarPaletteDelegate;

@interface SKUIScrollingTabBarPalette : UIView
{
    _Bool _attached;
    _Bool _tabBarBackgroundExtendsBehindPalette;
    UIView *_contentView;
    double _paletteHeight;
    id <SKUIScrollingTabBarPaletteDelegate> _delegate;
    SKUIScrollingTabBarBackgroundView *_backgroundView;
}

@property(readonly, nonatomic, getter=_backgroundView) SKUIScrollingTabBarBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <SKUIScrollingTabBarPaletteDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tabBarBackgroundExtendsBehindPalette; // @synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette;
@property(readonly, nonatomic) double paletteHeight; // @synthesize paletteHeight=_paletteHeight;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isAttached, setter=_setAttached:) _Bool attached; // @synthesize attached=_attached;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

