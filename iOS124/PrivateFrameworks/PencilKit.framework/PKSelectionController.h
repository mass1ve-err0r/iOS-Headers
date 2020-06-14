//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/UIDropInteractionDelegate_Private-Protocol.h>

@class NSString, NSUUID, PKSelectionView, PKSpaceInsertionController, PKStrokeSelection, UIDropInteraction;
@protocol PKSelectionDelegate;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private>
{
    struct CGPoint _dropPosition;
    NSUUID *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    PKSpaceInsertionController *_spaceInsertionController;
    UIDropInteraction *_dropInteraction;
    _Bool _hasCurrentSelection;
    _Bool _isCurrentlyAddingSpace;
    id <PKSelectionDelegate> _selectionDelegate;
    PKStrokeSelection *_currentStrokeSelection;
    PKSelectionView *_selectionView;
    struct CGAffineTransform _selectionTransform;
}

@property(retain, nonatomic) PKSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) _Bool isCurrentlyAddingSpace; // @synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace;
@property(nonatomic) struct CGAffineTransform selectionTransform; // @synthesize selectionTransform=_selectionTransform;
@property(retain, nonatomic) PKStrokeSelection *currentStrokeSelection; // @synthesize currentStrokeSelection=_currentStrokeSelection;
@property(nonatomic) _Bool hasCurrentSelection; // @synthesize hasCurrentSelection=_hasCurrentSelection;
@property(nonatomic) __weak id <PKSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void).cxx_destruct;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)moveStrokeSelectionToLocation:(struct CGPoint)arg1;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (_Bool)didResizeWhitespace;
- (void)dismissSpacingResizeHandles;
- (void)hideStrokes:(id)arg1 inDrawing:(id)arg2;
- (id)strokesForSpaceInsertionWithStrokeSelection:(id)arg1 inDrawing:(id)arg2 offset:(double)arg3;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (id)setupSpaceInsertionControllerIfNecessary;
- (void)_moveCurrentStrokeSelectionForDrop:(id)arg1 atLocation:(struct CGPoint)arg2 offsetInTouchView:(struct CGPoint)arg3;
- (struct CGAffineTransform)_selectionTransformForStrokes:(id)arg1 atLocation:(struct CGPoint)arg2 dragOffsetInDragView:(struct CGPoint)arg3 constrainSelection:(_Bool)arg4 inDrawing:(id)arg5;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(_Bool)arg2 withStrokeSelection:(id)arg3;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(_Bool)arg2;
- (void)_pasteStrokeSelection:(id)arg1 atPoint:(struct CGPoint)arg2 inDrawing:(id)arg3;
- (void)paste:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)clearSelectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSelectionIfNecessary;
- (void)addItemsToPasteboard;
- (void)resetStrokesAndClearSelectionForceRefresh:(_Bool)arg1;
- (void)registerCommandWithUndoManager:(id)arg1;
- (void)eraseSelection;
- (void)didScroll:(struct CGPoint)arg1;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(_Bool)arg3 createSelection:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(_Bool)arg3 createSelection:(_Bool)arg4;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(_Bool)arg3;
- (id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2;
- (void)_removeSelectionViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeSelectionView;
- (id)rotateUIImage:(id)arg1 clockwise:(_Bool)arg2;
- (id)_rotateImageIfNecessary:(id)arg1;
- (void)addViewForStrokeSelection:(id)arg1 isDragSource:(_Bool)arg2 drawing:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (struct CGSize)viewSizeForStrokeSelection:(id)arg1;
- (void)moveSelectionViewBasedOnStrokeTransform:(struct CGAffineTransform)arg1 drawing:(id)arg2;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform)arg3 drawing:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform)arg3 drawing:(id)arg4;
- (void)didSelectStrokesNotification:(id)arg1;
- (struct CGPoint)intersectionPointAlongStroke:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2 visibleOnscreenStrokes:(id)arg3;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2;
- (void)dealloc;
- (id)initWithSelectionDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

