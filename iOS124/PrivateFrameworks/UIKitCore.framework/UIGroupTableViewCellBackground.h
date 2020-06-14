//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellBackground : UIView
{
    struct {
        unsigned int selected:1;
    } _groupBackgroundFlags;
    int _sectionLocation;
    long long _selectionStyle;
    long long _separatorStyle;
    UIColor *_selectionTintColor;
    double _sectionBorderWidth;
}

+ (id)_roundedRectBezierPathInRect:(struct CGRect)arg1 withSectionLocation:(int)arg2 sectionCornerRadius:(double)arg3 cornerRadiusAdjustment:(double)arg4 sectionBorderWidth:(double)arg5 forBorder:(_Bool)arg6;
+ (void)initialize;
+ (void)_flushCacheOnNotification:(id)arg1;
@property(nonatomic) double sectionBorderWidth; // @synthesize sectionBorderWidth=_sectionBorderWidth;
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
- (void).cxx_destruct;
- (id)_topShadowViewWithColor:(id)arg1;
- (id)_contentMaskLayer;
- (void)layoutSubviews;
- (id)backgroundColor;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setSelectionTintColor:(id)arg1 layoutSubviews:(_Bool)arg2;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)_setSectionLocationAnimationDidStop;
- (void)setFrame:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (struct UIEdgeInsets)_backgroundImageCapInsets;
- (struct CGSize)_backgroundImageSize;
- (_Bool)_usesResizableBackgroundImage;
- (void)_layoutSubviews:(_Bool)arg1;
- (struct CGRect)_backgroundImageContentsCenter;
- (struct CGRect)_backgroundImageContentsRect;
- (id)_fillColor;
- (id)_bottomShadowColor;
- (id)_topShadowColor;
- (id)_separatorColor;
- (id)_sectionBorderColor;
- (double)_sectionCornerRadius;
- (struct CGRect)_contentRectForContentHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

