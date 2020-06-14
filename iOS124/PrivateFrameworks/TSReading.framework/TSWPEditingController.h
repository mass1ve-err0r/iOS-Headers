//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDAutoscrollDelegate-Protocol.h>
#import <TSReading/TSDGestureTarget-Protocol.h>
#import <TSReading/TSDTextInput-Protocol.h>
#import <TSReading/TSDTrackerManipulator-Protocol.h>
#import <TSReading/TSKChangeSourceObserver-Protocol.h>
#import <TSReading/TSKPopoverBasedViewControllerDelegate-Protocol.h>
#import <TSReading/TSWPReferenceLibraryViewControllerDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary, NSSet, NSString, TSDAutoscroll, TSDInteractiveCanvasController, TSDMultiPaneController, TSKFidgetResolver, TSKPopoverBasedViewController, TSKSelection, TSWPCharacterStyle, TSWPInteractiveCanvasController, TSWPReferenceLibraryViewController, TSWPSelection, TSWPStorage, TSWPTextKnobTracker, UIPopoverController, UIView;
@protocol TSDAnnotationHosting, TSDEditor, TSDTextSelection, TSWPDismissBlockPopover;

@interface TSWPEditingController : NSObject <TSDAutoscrollDelegate, TSDGestureTarget, TSKPopoverBasedViewControllerDelegate, TSWPReferenceLibraryViewControllerDelegate, TSDTextInput, TSDTrackerManipulator, TSKChangeSourceObserver>
{
    TSWPStorage *_storage;
    unsigned long long _initialStorageChangeCount;
    TSWPInteractiveCanvasController *_interactiveCanvasController;
    TSWPReferenceLibraryViewController *_definitionViewController;
    UIPopoverController *_definitionPopoverController;
    TSKPopoverBasedViewController<TSWPDismissBlockPopover> *_rubyTextViewController;
    _Bool _cancelRubyText;
    TSWPSelection *_selection;
    struct _NSRange _markedRange;
    NSAttributedString *_markedText;
    TSWPCharacterStyle *_insertionStyle;
    unsigned long long _selectionAnchor;
    _Bool _coalescingText;
    _Bool _canCoalesce;
    _Bool _selectionLastModifiedWithKnob;
    _Bool _selectionLastModifiedWithKeyboard;
    _Bool _knobTracking;
    _Bool _tapAndLongPressIsPossible;
    _Bool _ignoreFutureImmediatePresses;
    unsigned long long _knobTag;
    struct CGPoint _knobTrackingDragPoint;
    unsigned int _knobTrackingTapCount;
    _Bool _isBecomingActive;
    struct _NSRange _originalSelectionRange;
    TSDAutoscroll *_autoscroll;
    struct CGPoint _autoscrollPoint;
    _Bool _magnifying;
    NSArray *_suggestions;
    id <TSDEditor> _hostEditor;
    _Bool _suppressBreaks;
    _Bool _suppressTabs;
    _Bool _suppressPhonetics;
    _Bool _disableInspector;
    _Bool _supportsDataDetectors;
    _Bool _isEditingPlainText;
    _Bool _suppressEditMenu;
    unsigned long long _initialPressTextSelectionGranularity;
    _Bool _shouldShowEditMenuForInsertionPoint;
    _Bool _showNextEditMenu;
    struct CGPoint _knobToTouchOffset;
    TSWPTextKnobTracker *_knobTracker;
    _Bool _readyToEnd;
    _Bool _shouldDisplayKeyboard;
    TSKFidgetResolver *_fidgetResolver;
    _Bool _editMenuIsVisible;
    NSString *_mostRecentGestureKind;
    _Bool _gestureBeganWhenEditingBegan;
    _Bool _annotationWasShowingAtStartOfGesture;
    unsigned long long _currentSelectionFlags;
    NSDictionary *_tapInfo;
    TSDMultiPaneController *_insertBreakPopoverController;
    NSMutableDictionary *_dictationInterpretations;
    NSMutableDictionary *_autocorrectedEntries;
    id <TSDAnnotationHosting> _previousSelectedAnnotation;
    UIView *_inputViewForHidingKeyboard;
    _Bool _suppressDataDetectorsOnResignTextInput;
    _Bool _canCoalesceBreakingCharacters;
}

+ (id)_targetedDragPreviewForSelection:(id)arg1 interactiveCanvasController:(id)arg2 reps:(id)arg3 applyScale:(_Bool)arg4 imageFrameUnion:(struct CGRect *)arg5;
+ (id)dropProposalForSession:(id)arg1;
+ (id)retargetedDragItem:(id)arg1 withDefault:(id)arg2 canvasView:(id)arg3 icc:(id)arg4;
+ (id)previewForDragItem:(id)arg1;
+ (id)dragItemForHitRepWithDragInteraction:(id)arg1 session:(id)arg2 canvasView:(id)arg3 icc:(id)arg4 withTouchPoint:(struct CGPoint)arg5;
@property(nonatomic) _Bool canCoalesceBreakingCharacters; // @synthesize canCoalesceBreakingCharacters=_canCoalesceBreakingCharacters;
@property(nonatomic) _Bool coalescingText; // @synthesize coalescingText=_coalescingText;
@property(nonatomic) _Bool disableInspector; // @synthesize disableInspector=_disableInspector;
@property(nonatomic) _Bool suppressTabs; // @synthesize suppressTabs=_suppressTabs;
@property(nonatomic) _Bool suppressPhonetics; // @synthesize suppressPhonetics=_suppressPhonetics;
@property(nonatomic) _Bool suppressBreaks; // @synthesize suppressBreaks=_suppressBreaks;
@property(nonatomic) id <TSDEditor> hostEditor; // @synthesize hostEditor=_hostEditor;
@property(nonatomic) struct CGPoint autoscrollPoint; // @synthesize autoscrollPoint=_autoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=_autoscroll;
@property(readonly, nonatomic) _Bool suppressDataDetectorsOnResignTextInput; // @synthesize suppressDataDetectorsOnResignTextInput=_suppressDataDetectorsOnResignTextInput;
@property(readonly, nonatomic) _Bool selectionLastModifiedWithKeyboard; // @synthesize selectionLastModifiedWithKeyboard=_selectionLastModifiedWithKeyboard;
@property(readonly, nonatomic) _Bool selectionLastModifiedWithKnob; // @synthesize selectionLastModifiedWithKnob=_selectionLastModifiedWithKnob;
@property(readonly, nonatomic) unsigned long long currentSelectionFlags; // @synthesize currentSelectionFlags=_currentSelectionFlags;
@property(nonatomic) _Bool shouldDisplayKeyboard; // @synthesize shouldDisplayKeyboard=_shouldDisplayKeyboard;
@property(nonatomic) _Bool isEditingPlainText; // @synthesize isEditingPlainText=_isEditingPlainText;
@property(nonatomic) _Bool supportsDataDetectors; // @synthesize supportsDataDetectors=_supportsDataDetectors;
@property(nonatomic) _Bool isBecomingActive; // @synthesize isBecomingActive=_isBecomingActive;
@property(nonatomic) _Bool canCoalesce; // @synthesize canCoalesce=_canCoalesce;
@property(readonly, nonatomic) TSWPCharacterStyle *insertionStyle; // @synthesize insertionStyle=_insertionStyle;
@property(nonatomic) unsigned int knobTrackingTapCount; // @synthesize knobTrackingTapCount=_knobTrackingTapCount;
@property(nonatomic) struct CGPoint knobTrackingDragPoint; // @synthesize knobTrackingDragPoint=_knobTrackingDragPoint;
@property(nonatomic) unsigned long long knobTag; // @synthesize knobTag=_knobTag;
@property(nonatomic) _Bool knobTracking; // @synthesize knobTracking=_knobTracking;
@property(readonly, nonatomic) NSAttributedString *markedText; // @synthesize markedText=_markedText;
@property(readonly, retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (_Bool)shouldShowSelectedTextAsFocused;
@property(readonly, nonatomic) _Bool suppressesTextInspector;
- (void)addAllDictationInterpretationRangesInRange:(struct _NSRange)arg1 toRanges:(struct TSWPRangeVector *)arg2;
- (id)dictationInterpretationsAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (void)p_removeAutocorrectionAtCharIndex:(unsigned long long)arg1;
- (int)valueForWritingDirectionPropertyForInspector:(id)arg1;
- (id)p_previousAutocorrectionForWordAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (_Bool)textEditingSupportsFormatBar;
@property(readonly, retain) UIView *inputAccessoryView;
@property(readonly, retain) UIView *inputView;
- (void)p_adjustSelection:(id)arg1 withOtherSelection:(id)arg2 textSelectionGranularity:(unsigned long long)arg3;
- (_Bool)p_canEditTextString;
- (void)p_inputLanguageDidChangeNotification:(id)arg1;
- (void)p_adjustSelection:(id)arg1 withUnscaledCanvasPoint:(struct CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 isTapHold:(_Bool)arg4 allowPastBreak:(_Bool)arg5;
- (id)selectionFromUnscaledCanvasPoint:(struct CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 isTapHold:(_Bool)arg3 allowPastBreak:(_Bool)arg4 selectsEntireLink:(_Bool)arg5;
- (void)p_setSelectionFromPoint:(struct CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 includeListLabels:(_Bool)arg3;
- (void)willBeginMagnification;
- (id)p_extendSelectionToIncludeSmartFields:(id)arg1;
- (id)editingSearchReference;
- (void)setSelectionWithRange:(struct _NSRange)arg1 leadingEdge:(_Bool)arg2 endOfLine:(_Bool)arg3;
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;
- (id)selectionWithRange:(struct _NSRange)arg1;
- (id)textFontAtCharIndex:(unsigned long long)arg1;
- (id)p_columnForCharIndex:(unsigned long long)arg1;
- (id)textColorAtCharIndex:(unsigned long long)arg1;
- (id)selectionRectsForRange:(struct _NSRange)arg1;
- (id)_addSelectionRectsForLayout:(id)arg1 selection:(id)arg2;
- (id)_repsForStorage:(id)arg1 selection:(id)arg2;
- (struct CGRect)p_firstRectForRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;
- (void)extendSelectionRight;
- (void)extendSelectionLeft;
- (void)deleteForward;
- (void)deleteBackward;
- (id)characterStyleForDeletedRange:(struct _NSRange)arg1;
- (void)p_setInsertionStyle:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;
- (void)insertText:(id)arg1;
- (id)textInRange:(struct _NSRange)arg1;
- (id)unfilteredText;
- (unsigned long long)textLength;
- (long long)returnKeyType;
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (void)endEditingAndSelectParent:(id)arg1;
- (void)endEditing;
- (void)abandonMarkedText;
- (_Bool)p_keyboardShouldShowOnscreen;
- (_Bool)wantsKeyboard;
- (_Bool)wantsCaret;
- (_Bool)p_isIgnoringKeyboardInput;
- (void)cancelPhoneticsHUDAnimated:(_Bool)arg1;
- (void)dismissPhoneticsHUDAnimated:(_Bool)arg1;
- (_Bool)isDisplayingPhoneticsHUD;
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;
- (_Bool)p_isCharIndex:(unsigned long long)arg1 withinTextUnit:(int)arg2 inDirection:(long long)arg3;
- (_Bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (unsigned long long)p_charIndexByMovingCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool *)arg2 toBoundary:(int)arg3 inDirection:(long long)arg4 preferPosition:(double *)arg5 isLeadingEdge:(_Bool *)arg6;
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;
- (const struct TSWPLineFragment *)p_nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2 inColumn:(id)arg3;
- (const struct TSWPLineFragment *)p_lastVisibleLineFragmentForCharIndex:(unsigned long long)arg1 eol:(_Bool)arg2;
- (const struct TSWPLineFragment *)p_lineFragmentForCharIndex:(unsigned long long)arg1 column:(id *)arg2 eol:(_Bool)arg3;
- (id)logicalToVisualSelection:(id)arg1;
- (id)calculateVisualRunsFromSelection:(id)arg1 updateControllerSelection:(_Bool)arg2;
- (void)invalidateSelectionVisualRuns;
- (unsigned long long)p_lineIndexForCharIndex:(unsigned long long)arg1 column:(id *)arg2 eol:(_Bool)arg3;
- (unsigned long long)p_MoveByLineRange:(struct _NSRange)arg1 up:(_Bool)arg2;
- (id)p_layoutTargetForCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2;
- (_Bool)p_isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(int)arg3 inDirection:(long long)arg4;
- (_Bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (unsigned long long)p_charIndexAtPoint:(struct CGPoint)arg1 isAtEndOfLine:(_Bool *)arg2;
- (unsigned long long)closestCharIndexToPoint:(struct CGPoint)arg1 isAtEndOfLine:(_Bool *)arg2;
- (id)p_highlightSelectionForSelection:(id)arg1;
- (_Bool)canAcceptOrRejectChange;
- (_Bool)canAddOrShowComment;
- (_Bool)canRemoveHighlightForCurrentSelection;
- (_Bool)canShowCommentForCurrentSelectionGetHighlight:(id *)arg1 range:(struct _NSRange *)arg2;
- (_Bool)canHighlightCurrentSelection;
- (id)currentFontColor;
- (_Bool)p_isTextInputEditor;
- (void)customSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)noReplacementsFound:(id)arg1;
- (void)p_switchToReplaceSelection;
- (void)styleAction:(id)arg1;
- (void)definitionAction:(id)arg1;
- (void)replaceAction:(id)arg1;
- (id)extraMenuItems;
- (void)p_addCommonEditItemsIntoMenu:(id)arg1;
- (void)p_addInsertItemsIntoMenu:(id)arg1;
- (void)customSelect:(id)arg1;
- (void)select:(id)arg1;
- (void)popoverControllerDidDismissPopoverBasedViewController:(id)arg1;
- (void)referenceLibrarayViewControllerWasDismissed:(id)arg1;
- (_Bool)editorKeyboardLanguageIsRTL;
- (id)editorKeyboardLanguage;
- (long long)writingDirectionForCharIndex:(unsigned long long)arg1;
- (_Bool)canSetWritingDirection:(int)arg1;
- (_Bool)selectionIsOnEmptyParagraph;
- (void)copyObject:(id)arg1;
- (void)copyToPasteboard:(id)arg1;
- (void)copy:(id)arg1;
- (id)copyString;
- (id)currentLayoutParent;
- (id)styleProvider;
- (int)p_canPerformOptInEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)p_canInsertBreak;
- (_Bool)p_canSelectAllWithSender:(id)arg1;
- (_Bool)p_selectionIsSimpleInsertionPoint;
- (_Bool)textStorage:(id)arg1 hasWhitespaceBoundedWordAtSelection:(id)arg2;
- (struct CGRect)targetRectForSelection:(id)arg1;
- (struct CGRect)overrideCaretRectForSelection:(id)arg1;
- (struct _NSRange)smartDeletionSelection:(id)arg1 isVisual:(_Bool *)arg2;
- (_Bool)pStorageCanAcceptDrawableAttachments;
- (id)pasteboardController;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)p_selectionForRep:(id)arg1 point:(struct CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 isTapHold:(_Bool)arg4 precise:(_Bool)arg5 includeListLabels:(_Bool)arg6 allowPastBreak:(_Bool)arg7 selectsEntireLink:(_Bool)arg8;
- (id)p_selectionFromUnscaledCanvasPoint:(struct CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 isTapHold:(_Bool)arg3 allowPastBreak:(_Bool)arg4 selectsEntireLink:(_Bool)arg5;
- (_Bool)p_hitListLabelAtCharIndex:(unsigned long long)arg1 atNaturalPoint:(struct CGPoint)arg2 inRep:(id)arg3;
- (void)p_setTappedSelection:(id)arg1;
- (void)p_sendHandleTapNotification;
- (void)tappedOnKnob:(id)arg1;
- (id)selectionForRep:(id)arg1 point:(struct CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3;
- (void)tappedInRep:(id)arg1 point:(struct CGPoint)arg2 tapCount:(unsigned long long)arg3 isTapHold:(_Bool)arg4 precise:(_Bool)arg5;
- (unsigned long long)textSelectionGranularityForTapCount:(unsigned long long)arg1;
- (unsigned long long)charIndexInRep:(id)arg1 fromPoint:(struct CGPoint)arg2 allowPastBreak:(_Bool)arg3 allowNotFound:(_Bool)arg4 pastCenterGoesToNextChar:(_Bool)arg5 isAtEndOfLine:(_Bool *)arg6;
- (unsigned long long)charIndexInRep:(id)arg1 fromPoint:(struct CGPoint)arg2 allowPastBreak:(_Bool)arg3 allowNotFound:(_Bool)arg4 isAtEndOfLine:(_Bool *)arg5;
- (unsigned long long)charIndexInRep:(id)arg1 fromPoint:(struct CGPoint)arg2 allowPastBreak:(_Bool)arg3 isAtEndOfLine:(_Bool *)arg4 leadingEdge:(_Bool *)arg5;
- (id)p_hitRepWithPoint:(struct CGPoint)arg1 keyboardAdjustmentDelta:(double)arg2;
- (unsigned long long)countOfHyperlinksInUserSelection;
- (void)clearMarkedRange;
@property(readonly, nonatomic) struct _NSRange markedRange;
- (_Bool)trackingKnobInParagraphMode;
- (_Bool)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;
- (_Bool)isInParagraphMode;
- (id)p_columnForCharIndex:(unsigned long long)arg1 withStorage:(id)arg2;
- (id)extendSelectionToParagraphs:(id)arg1;
- (void)selectionChangedWithFlags:(unsigned long long)arg1 wpFlags:(unsigned long long)arg2;
- (void)p_postSelectionContentsChangedNotification;
- (void)p_postWillStyleTextNotification;
- (void)protectedStopMagnification;
- (void)p_beginMagnification:(id)arg1 forRep:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)revertLastSelectionChangeIfElapsedTimeIsUnderPinFidgetThreshold;
- (void)p_setSelection:(id)arg1 withFlags:(unsigned long long)arg2 force:(_Bool)arg3;
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)p_setRevertibleSelection:(id)arg1;
@property(retain, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
- (void)setInsertionPoint:(unsigned long long)arg1 withFlags:(unsigned long long)arg2;
@property(nonatomic) unsigned long long insertionPoint;
- (void)p_handleKnobDragGestureRecognizer:(id)arg1;
- (void)p_endAutoscroll;
- (void)p_beginOperationAndTakeControl;
- (void)operationDidEnd;
- (_Bool)readyToEndOperation;
- (id)tracker;
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (_Bool)handleGesture:(id)arg1;
- (void)p_handleTapGestures:(id)arg1;
- (void)p_createKnobTracker:(id)arg1 forRep:(id)arg2 tapCount:(unsigned long long)arg3;
- (void)p_beginKnobTrackingSelection:(id)arg1 forRep:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)p_dismissDefinitionPopover;
- (void)p_cancelTapAndLongPressPreviousSelector;
- (void)p_beginTapAndLongPress:(id)arg1;
- (void)p_handleTapAndTouchGesture:(id)arg1;
- (void)handleHardPressGestureRecognizer:(id)arg1;
- (void)endHardPressGestureRecognizer:(id)arg1;
- (id)p_updateEditingRepIfApplicableWithGesture:(id)arg1 unscaledCanvasPoint:(struct CGPoint)arg2;
- (void)p_stopHorizontalRangedMagnification;
- (void)p_moveHorizontalRangedLoupeForRep:(id)arg1 unscaledCanvasPoint:(struct CGPoint)arg2;
- (void)p_beginHorizontalRangedMagnificationForRep:(id)arg1 unscaledCanvasPoint:(struct CGPoint)arg2;
- (struct CGPoint)p_clampPointToLine:(struct CGPoint)arg1 trackingRep:(id)arg2;
- (void)p_handleLongPressGesture:(id)arg1;
- (void)p_handleSwipeMoveCaretWithTextGranularity:(long long)arg1 textDirection:(long long)arg2 layoutDirection:(long long)arg3;
- (_Bool)canHandleGesture:(id)arg1;
- (_Bool)swipeableParagraphIsSelected;
- (_Bool)canHandleSwipeGestureForGestureRecognizer:(id)arg1 outDelta:(long long *)arg2 outTextDirection:(long long *)arg3 outLayoutDirection:(long long *)arg4;
- (id)p_repForSwipeAtUnscaledLocation:(struct CGPoint)arg1;
- (_Bool)p_respondsToRubyGestures;
- (_Bool)p_respondsToHyperlinkGestures;
- (_Bool)p_respondsToListGestures;
- (_Bool)isUnscaledPointInTextSelection:(struct CGPoint)arg1;
- (id)p_documentViewController;
- (struct CGRect)p_adjustedPopoverTargetRectForRange:(struct _NSRange)arg1;
- (id)p_viewControllerForPresenting;
- (id)p_wordRangesForRange:(struct _NSRange)arg1;
- (void)p_clearSecondaryHighlight;
- (void)p_highlightRubyTextWithRange:(struct _NSRange)arg1;
- (double)targetPointSizeForSelectionWithViewScale:(double)arg1;
- (double)viewScaleForSelectionWithTargetPointSize:(double)arg1;
- (double)p_effectiveFontSizeForCurrentSelection;
- (struct _NSRange)editRange;
- (id)topLevelInspectorAutosaveName;
- (void)updateHUDState;
- (void)p_cancelDelayedSelectors;
- (_Bool)canCenterHUD;
- (void)p_updateHUDState;
- (void)p_rescheduleDelayedUpdateHUDState;
- (_Bool)isSelectionSingleAnchoredDrawableAttachment;
- (void)p_clearEditMenuFlags;
- (void)dismissActivePopovers;
- (_Bool)wantsDoneButtonWhenEditing;
- (_Bool)editorCanHideEditMenu;
- (_Bool)shouldShowEditMenu;
- (struct CGRect)p_targetRectForSelection:(id)arg1;
- (void)p_suppressSelectionHighlight:(_Bool)arg1;
- (id)p_editingRepForCharIndex:(unsigned long long)arg1;
- (id)editingReps;
- (void)cancelKnobTrackingAndMagnifying;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)willResignTextInputEditor;
- (void)willResignTextInputEditorAndDeselect:(_Bool)arg1;
- (id)p_containingShapeRep;
- (void)didBecomeTextInputEditor;
- (void)willResignCurrentEditor;
- (void)didBecomeCurrentEditor;
- (id)documentRoot;
- (id)model;
- (void)teardown;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 interactiveCanvasController:(id)arg2;
@property(readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
- (struct _NSRange)tsax_rangeOfLineFragmentAtCharIndex:(unsigned long long)arg1;
- (id)tsax_listItemLabelForCharIndex:(unsigned long long)arg1 textIsLiteral:(_Bool *)arg2;
- (id)_repsForStorage:(id)arg1 selection:(id)arg2;
- (id)dragItemForCurrentSelectionWithDragInteraction:(id)arg1 session:(id)arg2 withTouchPoint:(struct CGPoint)arg3;
- (unsigned long long)p_getVisualInsertionPointIndexForString:(id)arg1 selection:(id)arg2;
- (unsigned long long)p_getVisualDeletionIndexForSelection:(id)arg1 backward:(_Bool *)arg2;
- (const struct TSWPLineFragment *)p_lineFragmentWithCaretInfo:(CDStruct_7549c2a6 *)arg1 forSelection:(id)arg2;
- (int)p_writingDirectionForCharAtIndex:(unsigned long long)arg1;
- (void)p_selection:(id)arg1 toGlyphRange:(CDStruct_bccfccf2 *)arg2;
- (unsigned long long)p_leftEdgeForSelection:(id)arg1 withLeadingEdge:(_Bool *)arg2;
- (unsigned long long)p_rightEdgeForSelection:(id)arg1 withLeadingEdge:(_Bool *)arg2;
- (unsigned long long)p_LeftCharForInsertion:(const CDStruct_bccfccf2 *)arg1;
- (struct _NSRange)p_adjustVisualSelection:(id)arg1 withOtherSelection:(id)arg2;
- (unsigned long long)charIndexMovingByWordFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;
- (int)p_moveFromCharIndex:(unsigned long long *)arg1 tokenizerRef:(struct __CFStringTokenizer **)arg2 tokenizerRange:(struct _NSRange *)arg3 direction:(long long)arg4 currentWordRange:(struct _NSRange)arg5 newWordRange:(struct _NSRange *)arg6 reasonToStop:(unsigned int)arg7;
- (struct __CFStringTokenizer *)p_createTokenizerForCharIndex:(unsigned long long)arg1 outTokenizerRange:(struct _NSRange *)arg2;
- (unsigned long long)p_adjustedCharIndexForWordTestingFromCharIndex:(unsigned long long)arg1 forDirection:(long long)arg2;
- (_Bool)p_isLayoutLeftToRightAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool *)arg2 inDirection:(long long)arg3;
- (struct _NSRange)p_expandParagraphRangeForEnumerator:(struct TSWPParagraphEnumerator *)arg1;
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;
- (unsigned long long)p_layoutOrderCharIndexForCaretCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;
- (unsigned long long)p_caretCharIndexForLayoutOrderCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;
- (_Bool)pIsSelectionPlaceHolderTextWithSelection:(id)arg1;
- (_Bool)pIsSelectionPlaceHolderText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property(readonly) Class superclass;
@property(readonly) _Bool wantsRawArrowKeyEvents;

@end

