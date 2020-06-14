//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUILibraryProductInfoView : UIView
{
    NSArray *_infos;
    NSArray *_groupedInfos;
    NSArray *_normalizedGroupedInfos;
    long long _layoutType;
    double _lineSpacing;
    UIView *_headerView;
    UIView *_footerView;
    struct UIEdgeInsets _headerMargin;
    struct UIEdgeInsets _footerMargin;
}

@property(nonatomic) struct UIEdgeInsets footerMargin; // @synthesize footerMargin=_footerMargin;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) struct UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(copy, nonatomic) NSArray *normalizedGroupedInfos; // @synthesize normalizedGroupedInfos=_normalizedGroupedInfos;
@property(copy, nonatomic) NSArray *groupedInfos; // @synthesize groupedInfos=_groupedInfos;
@property(copy, nonatomic) NSArray *infos; // @synthesize infos=_infos;
- (void).cxx_destruct;
- (unsigned long long)_columnCount;
@property(readonly, nonatomic) struct UIEdgeInsets padding;
@property(readonly, nonatomic) long long maxLineCount;
@property(readonly, nonatomic) double interitemSpacing;
- (double)_sectionInfoWidth;
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect)arg2;
- (double)_maxWidthForGroupInfos:(id)arg1;
- (id)_getNormalizedGroupedInfos;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

