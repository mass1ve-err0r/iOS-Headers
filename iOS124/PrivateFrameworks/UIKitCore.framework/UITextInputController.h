//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIResponderStandardEditActions-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputAdditions-Protocol.h>
#import <UIKitCore/UITextInput_Internal-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSLayoutManager, NSSet, NSString, UIResponder, UITextChecker, UITextInputPasswordRules, UITextInputTraits, UITextPasteController, UITextPosition, UITextRange, UIView, _UIDictationAttachment, _UITextInputControllerTokenizer, _UITextKitTextRange, _UITextServiceSession, _UITextUndoManager, _UITextUndoOperationTyping;
@protocol UITextInput, UITextInputControllerDelegate, UITextInputDelegate, UITextInputPrivate, UITextInputTokenizer;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions>
{
    id <UITextInputDelegate> _inputDelegate;
    _UITextKitTextRange *_selectedTextRange;
    _UITextInputControllerTokenizer *_tokenizer;
    UITextPasteController *_pasteController;
    NSLayoutManager *_layoutManager;
    NSHashTable *_observedScrollViews;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    UITextInputTraits *_textInputTraits;
    struct _NSRange _markedTextRange;
    struct _NSRange _markedTextSelection;
    NSDictionary *_markedTextStyle;
    struct {
        unsigned int delegateRespondsToTextInputShouldBeginEditing:1;
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText:1;
        unsigned int delegateRespondsToTextInputDidChange:1;
        unsigned int delegateRespondsToTextInputDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange:1;
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion:1;
        unsigned int textOrSelectionChangeOriginatesWithKeyboard:1;
        unsigned int showingTextStyleOptions:1;
        unsigned int undoRedoInProgress:1;
        unsigned int textOrSelectionChangeOriginatesWithMarkedText:1;
        unsigned int nextSelectionChangeMustUpdate:1;
        unsigned int hasTextAlternatives:1;
        unsigned int suppressDelegateChangeNotifications:1;
    } _tiFlags;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    UITextChecker *_textChecker;
    NSSet *_whitelistedTypingAttributes;
    _UIDictationAttachment *_dictationPlaceholder;
    _Bool _allowsEditingTextAttributes;
    _Bool _continuousSpellCheckingEnabled;
    NSDictionary *_emptyStringAttributes;
    NSDictionary *_typingAttributes;
    id <UITextInputControllerDelegate> _delegate;
    struct _NSRange _previousSelectedRange;
}

+ (_Bool)_pasteboardHasStrings;
@property(nonatomic) struct _NSRange previousSelectedRange; // @synthesize previousSelectedRange=_previousSelectedRange;
@property(nonatomic) _Bool continuousSpellCheckingEnabled; // @synthesize continuousSpellCheckingEnabled=_continuousSpellCheckingEnabled;
@property(nonatomic) __weak id <UITextInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(copy, nonatomic) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(nonatomic) _Bool allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property(copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes; // @synthesize emptyStringAttributes=_emptyStringAttributes;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_textInputTraits;
- (void)_resetShowingTextStyle:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_toggleFontTrait:(int)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_clearSelectionUI;
- (_Bool)_isDisplayingShareViewController;
- (_Bool)_isDisplayingLookupViewController;
- (_Bool)_isDisplayingReferenceLibraryViewController;
- (_Bool)_isDisplayingShortcutViewController;
- (void)_define:(id)arg1;
- (void)_removeShortcutController;
- (void)_share:(id)arg1;
- (void)_removeShareController;
- (void)_removeDefinitionController;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_pasteRawAttributedString:(id)arg1 asRichText:(_Bool)arg2;
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(_Bool)arg2;
- (id)_attributedStringForInsertionOfAttributedString:(id)arg1;
- (void)pasteItemProviders:(id)arg1;
- (_Bool)_pasteFromPasteboard:(id)arg1 andMatchStyle:(_Bool)arg2;
- (void)_pasteAndMatchStyle:(_Bool)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)_copySelectionToClipboard:(id)arg1;
- (void)_copySelectionToClipboard;
- (void)removeTextStylingFromString:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (_Bool)_isSecureTextEntry;
- (void)replace:(id)arg1;
- (void)selectAll;
- (id)_selectedAttributedText;
- (id)_selectedText;
- (_Bool)_shouldHandleResponderAction:(SEL)arg1;
- (_Bool)_canHandleResponderAction:(SEL)arg1;
- (void)delegateWillChangeAttributedText:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange)arg3 resultLength:(unsigned long long *)arg4;
- (void)_setSelectedRangeToEndIfNecessary;
- (void)clearText;
- (void)changeWillBeUndone:(id)arg1;
- (void)stopCoalescing;
- (_Bool)isCoalescing;
- (_Bool)_undoRedoInProgress;
- (void)_setUndoRedoInProgress:(_Bool)arg1;
- (void)undoDidChangeText;
- (void)undoWillChangeText;
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange)arg3 replacementText:(id)arg4;
- (void)coalesceInTextView:(id)arg1 affectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)_undoManagerWillUndo:(id)arg1;
- (id)undoManager;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
- (struct CGRect)_caretRectForOffset:(unsigned long long)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (void)_updateEmptyStringAttributes;
- (void)_invalidateEmptyStringAttributes;
- (void)_invalidateTypingAttributes;
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;
- (id)_attributesForReplacementInRange:(struct _NSRange)arg1;
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)_fixupTypingAttributeForAttributes:(id)arg1;
@property(copy, nonatomic, getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:) NSSet *_whitelistedTypingAttributes;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (struct _NSRange)markedRange;
- (void)_forceUnmarkTextDueToEditing;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(copy) UITextRange *selectedTextRange;
- (void)_performWhileSuppressingDelegateNotifications:(CDUnknownBlockType)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)attributedTextInRange:(id)arg1;
- (id)textInRange:(id)arg1;
- (void)_ensureSelectionVisible;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (id)_parentScrollView;
- (unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)arg1 downstream:(_Bool)arg2;
- (id)_characterPositionForPoint:(struct CGPoint)arg1;
- (id)_rectsForRange:(struct _NSRange)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)updateSelection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)removeSpellingMarkersForCurrentWord;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (id)textRangeForNSRange:(struct _NSRange)arg1;
- (struct _NSRange)nsRangeForTextRange:(id)arg1;
- (void)checkSpellingForWordInRange:(id)arg1;
- (void)preheatTextChecker;
- (id)textChecker;
- (void)checkSmartPunctuationForWordInRange:(id)arg1;
- (void)deleteBackward;
- (void)didEndEditing;
- (void)_updateRangeForSmartDelete;
- (struct _NSRange)_rangeForBackwardsDelete;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (_Bool)_hasDictationPlaceholder;
- (id)_filteredAttributedTextInRange:(struct _NSRange)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(_Bool)arg2;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange)arg1;
- (void)insertAttributedText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)removeAlternativesForCurrentWord;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)_mightHaveSelection;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (void)_insertText:(id)arg1 fromKeyboard:(_Bool)arg2;
- (int)atomStyle;
- (_Bool)drawsAsAtom;
@property(nonatomic) struct _NSRange selectedRange;
- (void)_coordinateSelectionChange:(CDUnknownBlockType)arg1;
- (void)_ensureSelectionValid;
- (void)_setSelectedTextRange:(id)arg1;
- (struct _NSRange)_selectedRange;
- (void)_setSelectedRange:(struct _NSRange)arg1;
- (void)_selectionDidScroll:(id)arg1;
- (id)interactionAssistant;
- (id)_firstTextView;
- (void)_selectionGeometryChanged;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_updatePasteController;
- (void)_updateFirstTextView;
- (_Bool)_shouldConsiderTextViewForGeometry:(id)arg1;
- (void)_textContainerDidChangeView:(id)arg1;
- (void)_teardownTextContainerView:(id)arg1;
- (void)_setupTextContainerView:(id)arg1;
- (void)_setInternalGestureRecognizers;
- (id)_textStorage;
- (id)_layoutManager;
- (_Bool)_delegateShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)_sendDelegateChangeNotificationsForText:(_Bool)arg1 selection:(_Bool)arg2;
- (void)_sendDelegateWillChangeNotificationsForText:(_Bool)arg1 selection:(_Bool)arg2;
- (id)_senderForDelegateNotifications;
- (void)_cancelDictationIfNecessaryForChangeInRange:(struct _NSRange)arg1;
- (void)_detachFromLayoutManager;
- (void)dealloc;
- (id)_initWithLayoutManager:(id)arg1;
- (id)_selectableText;
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(_Bool)arg3;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (void)_unmarkText;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)_hasMarkedText;
- (_Bool)_usesAsynchronousProtocol;
- (void)_setGestureRecognizers;
- (long long)_selectionAffinity;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_setHistory:(id)arg1 withExtending:(_Bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(_Bool)arg4;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
- (id)_fontForCaretSelection;
- (id)_textColorForCaretSelection;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (_Bool)_range:(id)arg1 intersectsRange:(id)arg2;
- (_Bool)_range:(id)arg1 containsRange:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (id)_fullRange;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_replaceDocumentWithText:(id)arg1;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_deleteForwardAndNotify:(_Bool)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (void)_setCaretSelectionAtEndOfSelection;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (_Bool)_hasMarkedTextOrRangedSelection;
- (_Bool)_isEmptySelection;
- (struct CGRect)_selectionClipRect;
- (_Bool)_selectionAtDocumentEnd;
- (_Bool)_selectionAtDocumentStart;
- (_Bool)_selectionAtWordStart;
- (void)_setSelectionToPosition:(id)arg1;
- (id)_fullText;
- (id)_wordContainingCaretSelection;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterAfterCaretSelection;
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (int)_indexForTextPosition:(id)arg1;
- (void)_selectAll;
- (struct _NSRange)_selectedRangeWithinMarkedText;
- (struct _NSRange)_selectedNSRange;
- (id)textInputSuggestionDelegate;
- (id)_keyInput;
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;

// Remaining properties
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

