//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, PUSectionedGridLayout, UIView;
@protocol PUGridRenderedStripDataSource;

__attribute__((visibility("hidden")))
@interface PUGridRenderedStrip : UICollectionReusableView
{
    _Bool _extendsToTop;
    _Bool __needsRendering;
    int _backgroundColorValue;
    double _itemContentScale;
    double _leftContentInset;
    NSArray *_itemIndexPaths;
    long long _visualSectionIndex;
    id <PUGridRenderedStripDataSource> _dataSource;
    PUSectionedGridLayout *_layout;
    unsigned long long _contentExtenderType;
    UIView *_topContentView;
    UIView *__sideExtendedContentView;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct _NSRange _visualItemRange;
}

@property(readonly, nonatomic) UIView *_sideExtendedContentView; // @synthesize _sideExtendedContentView=__sideExtendedContentView;
@property(nonatomic, setter=_setNeedsRendering:) _Bool _needsRendering; // @synthesize _needsRendering=__needsRendering;
@property(readonly, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(nonatomic) _Bool extendsToTop; // @synthesize extendsToTop=_extendsToTop;
@property(nonatomic) unsigned long long contentExtenderType; // @synthesize contentExtenderType=_contentExtenderType;
@property(nonatomic) __weak PUSectionedGridLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <PUGridRenderedStripDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) struct _NSRange visualItemRange; // @synthesize visualItemRange=_visualItemRange;
@property(readonly, nonatomic) long long visualSectionIndex; // @synthesize visualSectionIndex=_visualSectionIndex;
@property(retain, nonatomic) NSArray *itemIndexPaths; // @synthesize itemIndexPaths=_itemIndexPaths;
@property(nonatomic) int backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
@property(nonatomic) double leftContentInset; // @synthesize leftContentInset=_leftContentInset;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double itemContentScale; // @synthesize itemContentScale=_itemContentScale;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (_Bool)_disableRasterizeInAnimations;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_updateExtendedContents;
- (void)_render;
@property(readonly, nonatomic) long long numberOfColumns;
- (void)setVisualSectionIndex:(long long)arg1 andVisualItemRange:(struct _NSRange)arg2;
- (void)setNeedsRendering;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

