//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Messages/UICollectionViewDataSource-Protocol.h>
#import <Messages/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <Messages/UICollectionViewDelegate-Protocol.h>

@class CKDispatchQueue, MSStickerBrowserViewLayoutSpec, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;
@protocol MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;

@interface MSStickerBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>
{
    _Bool _isRestoringContentOffset;
    _Bool _animating;
    long long _stickerSize;
    id <MSStickerBrowserViewDataSource> _dataSource;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    MSStickerBrowserViewLayoutSpec *_layoutSpec;
    NSMutableArray *_cellsToAnimate;
    NSTimer *_animationTimer;
    unsigned long long _currentlyAnimatingIndex;
    NSMutableDictionary *_stickerCache;
    CKDispatchQueue *_stickerCacheQueue;
    id <MSStickerBrowserViewDisplayDelegate> _displayDelegate;
    struct CGPoint _restoredContentOffset;
    struct CGSize _browserSizeToRestoreFrom;
}

@property(nonatomic) id <MSStickerBrowserViewDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(retain, nonatomic) CKDispatchQueue *stickerCacheQueue; // @synthesize stickerCacheQueue=_stickerCacheQueue;
@property(retain, nonatomic) NSMutableDictionary *stickerCache; // @synthesize stickerCache=_stickerCache;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool isRestoringContentOffset; // @synthesize isRestoringContentOffset=_isRestoringContentOffset;
@property(nonatomic) struct CGSize browserSizeToRestoreFrom; // @synthesize browserSizeToRestoreFrom=_browserSizeToRestoreFrom;
@property(nonatomic) struct CGPoint restoredContentOffset; // @synthesize restoredContentOffset=_restoredContentOffset;
@property(nonatomic) unsigned long long currentlyAnimatingIndex; // @synthesize currentlyAnimatingIndex=_currentlyAnimatingIndex;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSMutableArray *cellsToAnimate; // @synthesize cellsToAnimate=_cellsToAnimate;
@property(retain, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MSStickerBrowserViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
- (void).cxx_destruct;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)invalidateFlowLayout;
- (void)restoreFromState:(id)arg1;
@property(readonly, nonatomic) NSDictionary *stateRestorationInfo;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)prepareForSnapshotting;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)_stickerAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)animateNextCell;
- (void)configureStickerView;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) struct CGPoint contentOffset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 stickerSize:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

