//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFUIScrollView.h>

#import <OpusFoundation/OFUIWindowDraggingAutoscroll-Protocol.h>
#import <OpusFoundation/OFUIWindowDraggingDestination-Protocol.h>
#import <OpusFoundation/OFUIWindowDraggingSource-Protocol.h>
#import <OpusFoundation/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSString, OFUIGridViewCell, OFUIGridViewController, UIPinchGestureRecognizer;
@protocol OFUIGridViewDataSource, OFUIGridViewDelegate, OFUIWindowDraggingSource><OFUIGridViewDragging;

@interface OFUIGridView : OFUIScrollView <OFUIWindowDraggingDestination, OFUIWindowDraggingSource, OFUIWindowDraggingAutoscroll, UIGestureRecognizerDelegate>
{
    OFUIGridViewController *_gridViewController;
    unsigned long long _orientation;
    struct CGSize _cellSize;
    struct CGSize _minCellSize;
    struct CGSize _maxCellSize;
    struct UIEdgeInsets _borderInset;
    unsigned long long _numberOfCellsPerRow;
    double _minimumCellSpacePadding;
    double _cellSpacePadding;
    id <OFUIGridViewDataSource> _dataSource;
    id <OFUIGridViewDelegate> _gridViewDelegate;
    unsigned long long _numberOfCells;
    unsigned long long _numberOfCachedPages;
    unsigned long long _visibleIndexBegin;
    unsigned long long _visibleIndexEnd;
    NSMutableArray *_displayedCells;
    NSMutableArray *_recycledCells;
    _Bool _dirtyLayout;
    _Bool _editing;
    id <OFUIWindowDraggingSource><OFUIGridViewDragging> _draggingSource;
    long long _draggingDestinationIndex;
    long long _draggingDestinationCount;
    _Bool _isDraggingIn;
    UIPinchGestureRecognizer *_liveResizingPinchGestureRecognizer;
    _Bool _allowLiveResizing;
    _Bool _isLiveResizing;
    struct CGSize _cellSizeBeforeLiveResizing;
    _Bool _allowAutoscroll;
    _Bool _allowFastPanning;
    struct CGPoint _fastPanningLastTranslation;
    _Bool _isFastPanning;
    _Bool _allowSelectAll;
    _Bool _allowContinuousSelection;
    double _percentageScrolledToRestore;
    _Bool _canUpdateCells;
    OFUIGridViewCell *_lastCellUpdatedForMerge;
}

@property(nonatomic) _Bool canUpdateCells; // @synthesize canUpdateCells=_canUpdateCells;
@property(nonatomic) double percentageScrolledToRestore; // @synthesize percentageScrolledToRestore=_percentageScrolledToRestore;
@property(nonatomic) _Bool allowContinuousSelection; // @synthesize allowContinuousSelection=_allowContinuousSelection;
@property(nonatomic) _Bool allowSelectAll; // @synthesize allowSelectAll=_allowSelectAll;
@property(nonatomic) _Bool isFastPanning; // @synthesize isFastPanning=_isFastPanning;
@property(nonatomic) _Bool allowFastPanning; // @synthesize allowFastPanning=_allowFastPanning;
@property(nonatomic) _Bool allowAutoscroll; // @synthesize allowAutoscroll=_allowAutoscroll;
@property(nonatomic) _Bool isLiveResizing; // @synthesize isLiveResizing=_isLiveResizing;
@property(nonatomic) _Bool allowLiveResizing; // @synthesize allowLiveResizing=_allowLiveResizing;
@property(readonly, nonatomic) _Bool isDraggingIn; // @synthesize isDraggingIn=_isDraggingIn;
@property(nonatomic) long long draggingDestinationCount; // @synthesize draggingDestinationCount=_draggingDestinationCount;
@property(nonatomic) long long draggingDestinationIndex; // @synthesize draggingDestinationIndex=_draggingDestinationIndex;
@property(nonatomic) id <OFUIWindowDraggingSource><OFUIGridViewDragging> draggingSource; // @synthesize draggingSource=_draggingSource;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) unsigned long long numberOfCells; // @synthesize numberOfCells=_numberOfCells;
@property(nonatomic) id <OFUIGridViewDelegate> gridViewDelegate; // @synthesize gridViewDelegate=_gridViewDelegate;
@property(nonatomic) id <OFUIGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long numberOfCachedPages; // @synthesize numberOfCachedPages=_numberOfCachedPages;
@property(nonatomic) double minimumCellSpacePadding; // @synthesize minimumCellSpacePadding=_minimumCellSpacePadding;
@property(nonatomic) struct UIEdgeInsets borderInset; // @synthesize borderInset=_borderInset;
@property(nonatomic) struct CGSize maxCellSize; // @synthesize maxCellSize=_maxCellSize;
@property(nonatomic) struct CGSize minCellSize; // @synthesize minCellSize=_minCellSize;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) OFUIGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (_Bool)canAutoscroll;
- (void)autoscroll:(float)arg1;
- (float)autoscrollDistance:(struct CGRect)arg1;
- (float)_autoscrollDistanceForProximityToEdge:(float)arg1;
- (void)draggingDestinationEnded:(id)arg1 cancelled:(_Bool)arg2;
- (void)concludeDragOperation:(id)arg1;
- (_Bool)performDragOperation:(id)arg1;
- (struct CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2;
- (_Bool)prepareForDragOperation:(id)arg1;
- (void)draggingDestinationExited:(id)arg1;
- (unsigned long long)draggingDestinationUpdated:(id)arg1;
- (unsigned long long)draggingDestinationEntered:(id)arg1;
- (struct CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
- (struct CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
- (void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
- (void)draggingSource:(id)arg1 prepareItem:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handleLiveResizingPinchGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)moveCellsAtIndexes:(id)arg1 toIndexes:(id)arg2 animated:(_Bool)arg3;
- (void)deleteCellsAtIndexes:(id)arg1 animated:(_Bool)arg2;
- (void)insertCellsAtIndexes:(id)arg1 animated:(_Bool)arg2;
- (id)indexesForVisibleCells;
- (id)visibleCells;
- (id)indexesForDisplayedCells;
- (id)displayedCellWithItem:(id)arg1;
- (id)displayedCells;
- (_Bool)isCellVisible:(id)arg1;
- (_Bool)isFrameEntirelyVisible:(struct CGRect)arg1;
- (_Bool)isFrameVisible:(struct CGRect)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)reloadData;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateCells;
- (struct _NSRange)_displayedCellsRange;
- (void)cleanupDisplayedCells;
- (void)_updateContentSize;
- (struct CGSize)_bestContentSize;
- (long long)_indexAtPosition:(struct CGPoint)arg1;
- (struct CGSize)_cellSizeAtIndex:(long long)arg1;
- (struct CGPoint)_cellPositionAtIndex:(long long)arg1;
- (void)updateLayout:(_Bool)arg1;
- (void)forceLayout;
- (void)_layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForUnloading;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

