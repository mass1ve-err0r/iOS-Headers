//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAutoScrollerDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXIndexPathSet, PXSectionedSelectionManager, PXUIAutoScroller, UIGestureRecognizer, UIScrollView;
@protocol PXSwipeSelectionManagerDelegate;

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver>
{
    CDStruct_0794f076 _needsUpdateFlags;
    struct {
        _Bool respondsToItemIndexPathAtLocation;
        _Bool respondsToItemIndexPathClosestLeadingLocation;
        _Bool respondsToItemIndexPathClosestAboveLocation;
        _Bool respondsToShouldSelectItemAtIndexPath;
    } _delegateFlags;
    id <PXSwipeSelectionManagerDelegate> _delegate;
    unsigned long long _state;
    UIScrollView *_scrollView;
    PXSectionedSelectionManager *_selectionManager;
    UIGestureRecognizer *_swipeGestureRecognizer;
    unsigned long long __currentDataSourceIdentifier;
    PXIndexPathSet *__selectedIndexPathsBeforeSwipe;
    id __pausingChangesToken;
    PXUIAutoScroller *__autoScroller;
    struct PXSimpleIndexPath __startingIndexPath;
    struct PXSimpleIndexPath __currentIndexPath;
}

@property(readonly, nonatomic) PXUIAutoScroller *_autoScroller; // @synthesize _autoScroller=__autoScroller;
@property(retain, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken; // @synthesize _pausingChangesToken=__pausingChangesToken;
@property(retain, nonatomic, setter=_setSelectedIndexPathsBeforeSwipe:) PXIndexPathSet *_selectedIndexPathsBeforeSwipe; // @synthesize _selectedIndexPathsBeforeSwipe=__selectedIndexPathsBeforeSwipe;
@property(nonatomic, setter=_setCurrentIndexPath:) struct PXSimpleIndexPath _currentIndexPath; // @synthesize _currentIndexPath=__currentIndexPath;
@property(nonatomic, setter=_setStartingIndexPath:) struct PXSimpleIndexPath _startingIndexPath; // @synthesize _startingIndexPath=__startingIndexPath;
@property(nonatomic, setter=_setCurrentDataSourceIdentifier:) unsigned long long _currentDataSourceIdentifier; // @synthesize _currentDataSourceIdentifier=__currentDataSourceIdentifier;
@property(readonly, nonatomic) UIGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <PXSwipeSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (void)_updateSelectedIndexPaths;
- (void)_invalidateSelectedIndexPaths;
- (void)_endSelection;
- (void)_updateSelectionWithHitIndexPath:(struct PXSimpleIndexPath)arg1 leadingClosestIndexPath:(struct PXSimpleIndexPath)arg2 aboveClosestIndexPath:(struct PXSimpleIndexPath)arg3;
- (void)_beginSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (_Bool)_isSelecting;
- (struct PXSimpleIndexPath)_itemIndexPathClosestAboveLocation:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_itemIndexPathClosestLeadingLocation:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_itemIndexPathAtLocation:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

