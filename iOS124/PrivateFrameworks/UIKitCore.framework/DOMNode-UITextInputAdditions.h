//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

#import <UIKitCore/UIKeyInput-Protocol.h>
#import <UIKitCore/UIKeyboardInput-Protocol.h>
#import <UIKitCore/UITextInputPrivate-Protocol.h>
#import <UIKitCore/UITextInputTokenizer-Protocol.h>

@class NSDictionary, NSIndexSet, NSString, RTIInputSystemSourceSession, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;
@protocol UITextInputDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UITextInputPrivate, UIKeyInput, UITextInputTokenizer>
- (id)textDocument;
@property(nonatomic) long long selectionAffinity;
- (_Bool)editing;
- (_Bool)editable;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) _Bool hasText;
- (void)unmarkText;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)moveDown;
- (void)moveUp;
- (void)moveLeft;
- (void)moveRight;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(_Bool)arg3;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
- (id)_textSelectingContainer;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;
- (_Bool)becomesEditableWithGestures;
- (_Bool)isEditing;
- (_Bool)isEditable;
- (id)content;
- (void)updateSelection;
- (id)selectionView;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)updateAutoscroll:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)setInitialSelectionBehavior:(int)arg1;
- (int)initialSelectionBehavior;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(nonatomic) id textSuggestionDelegate;
- (_Bool)isShowingPlaceholder;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (struct CGRect)caretRect;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1 inset:(double)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1 withInset:(double)arg2;
- (int)selectionState;
- (void)selectAll;
- (_Bool)selectionAtWordStart;
- (_Bool)selectionAtDocumentStart;
- (_Bool)hasSelection;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (struct _NSRange)selectionRange;
- (int)wordOffsetInRange:(id)arg1;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)clearMarkedText;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (id)uiWebDocumentView;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)handleKeyWebEvent:(id)arg1;
- (_Bool)requiresKeyEvents;
- (id)delegate;
- (void)setSecure:(_Bool)arg1;
- (id)textInputTraits;
- (void)setupPlaceholderTextIfNeeded;
- (_Bool)hasContent;
- (void)takeTraitsFrom:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(nonatomic) long long _textInputSource;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) long long selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;
@end

