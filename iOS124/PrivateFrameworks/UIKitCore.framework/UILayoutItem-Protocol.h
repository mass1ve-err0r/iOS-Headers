//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITraitEnvironment-Protocol.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, UIView;
@protocol UILayoutItem;

@protocol UILayoutItem <UITraitEnvironment>
@property(readonly, nonatomic) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(nonatomic) _Bool _ui_usesManualLayout;
@property(readonly, nonatomic) UIView *_ui_view;
@property(readonly, nonatomic) UIView *_ui_superview;
@property(nonatomic) struct CGRect _ui_frame;
@property(readonly, nonatomic) struct CGRect _ui_bounds;
- (void)_ui_removeFromParentLayoutItem;
- (void)_ui_insertSubLayoutItem:(id <UILayoutItem>)arg1 atIndex:(long long)arg2;
- (void)_ui_addSubLayoutItem:(id <UILayoutItem>)arg1;
@end

