//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <Silex/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSString, UIView;
@protocol SXItemizedScrollViewDataSource;

@interface SXItemizedScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _contentTooSmall;
    _Bool _gotActiveViewIndexChange;
    id <SXItemizedScrollViewDataSource> _dataSource;
    unsigned long long _activeViewIndex;
    NSArray *_frames;
    NSIndexSet *_visibleIndices;
    NSMutableDictionary *_visibleViewsByIndex;
    struct _NSRange _visibleRange;
    struct CGSize _framesAreValidForSize;
}

@property(retain, nonatomic) NSMutableDictionary *visibleViewsByIndex; // @synthesize visibleViewsByIndex=_visibleViewsByIndex;
@property(nonatomic) _Bool gotActiveViewIndexChange; // @synthesize gotActiveViewIndexChange=_gotActiveViewIndexChange;
@property(nonatomic) _Bool contentTooSmall; // @synthesize contentTooSmall=_contentTooSmall;
@property(retain, nonatomic) NSIndexSet *visibleIndices; // @synthesize visibleIndices=_visibleIndices;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) struct CGSize framesAreValidForSize; // @synthesize framesAreValidForSize=_framesAreValidForSize;
@property(readonly, nonatomic) unsigned long long activeViewIndex; // @synthesize activeViewIndex=_activeViewIndex;
@property(readonly, nonatomic) struct _NSRange visibleRange; // @synthesize visibleRange=_visibleRange;
@property(nonatomic) __weak id <SXItemizedScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)viewManagementForRange:(struct _NSRange)arg1;
- (void)rebuildFramesArray;
- (void)determineNewVisibilityRange;
- (struct CGRect)frameForViewAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *activeView;
- (void)setActiveViewIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reindexate;
- (void)forceCorrectFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

