//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIWebDocumentView.h>

#import <UIKitCore/UIWebFormAccessoryDelegate-Protocol.h>
#import <UIKitCore/UIWebTouchEventsGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIWebRotationDelegate-Protocol.h>

@class DOMNode, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, UIResponder, UIWebFormAccessory, UIWebFormDelegate, UIWebTouchEventsGestureRecognizer;
@protocol UIFormPeripheral, UIWebAutoFillDelegate;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate>
{
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    DOMNode *_assistedNodeStartingFocusRedirects;
    struct CGRect _inputViewBounds;
    struct CGRect _addressViewBounds;
    double _lastAdjustmentForScroller;
    unsigned long long _audioSessionCategoryOverride;
    unsigned int _accessoryEnabled:1;
    unsigned int _forceInputView:1;
    unsigned int _formIsAutoFilling:1;
    unsigned int _inputViewObeysDOMFocus:1;
    unsigned int _allowDOMFocusRedirects:1;
    unsigned int _hasEditedTextField:1;
    unsigned int _alwaysDispatchesScrollEvents:1;
    unsigned int _allowsPictureInPictureVideo:1;
    unsigned int _allowsLinkPreview:1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    unsigned long long _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    NSHashTable *_activeHighlighters;
    NSMutableSet *_overflowScrollViewsPendingInsertion;
    NSMutableSet *_overflowScrollViewsPendingDeletion;
    NSMutableSet *_overflowScrollViews;
    NSLock *_pendingOverflowDataLock;
    NSMutableArray *_pendingOverflowScrolls;
    _Bool _pendingGeometryChangeAfterOverflowScroll;
    NSMutableDictionary *_focusPreservingTokens;
    struct {
        NSMutableArray *all;
        NSMutableArray *html;
        NSMutableArray *javascript;
        NSMutableArray *css;
        NSMutableArray *error;
        NSMutableArray *warning;
        NSMutableArray *tip;
        NSMutableArray *log;
    } _messages;
    CDStruct_d58a15aa _pdf;
    id <UIWebAutoFillDelegate> _autoFillDelegate;
}

+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;
+ (void)initialize;
@property(nonatomic) id <UIWebAutoFillDelegate> autoFillDelegate; // @synthesize autoFillDelegate=_autoFillDelegate;
@property(readonly, nonatomic) _Bool hasEditedTextField; // @synthesize hasEditedTextField=_hasEditedTextField;
@property(nonatomic) _Bool allowDOMFocusRedirects; // @synthesize allowDOMFocusRedirects=_allowDOMFocusRedirects;
@property(nonatomic) _Bool inputViewObeysDOMFocus; // @synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus;
@property(nonatomic, getter=isAccessoryEnabled) _Bool accessoryEnabled; // @synthesize accessoryEnabled=_accessoryEnabled;
@property(nonatomic) UIResponder *_editingDelegateForEverythingExceptForms; // @synthesize _editingDelegateForEverythingExceptForms;
@property(retain, nonatomic) DOMNode *_currentAssistedNode; // @synthesize _currentAssistedNode;
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input; // @synthesize _input;
@property(retain, nonatomic) UIWebFormAccessory *_accessory; // @synthesize _accessory;
- (_Bool)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (void)_setUnobscuredSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (id)_collectAdditionalSubviews;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)_removeAdditionalSubview:(id)arg1;
- (void)_addAdditionalSubview:(id)arg1;
- (void)_noteOverflowScrollViewPendingDeletion:(id)arg1;
- (void)_noteOverflowScrollViewPendingInsertion:(id)arg1;
- (_Bool)_hasSubviewContainingWebContent:(id)arg1;
- (void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(_Bool)arg3;
- (_Bool)appendOverflowScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 whileScrolling:(_Bool)arg3;
- (void)_webThreadOverflowScrollOffsetChanged;
- (void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(_Bool)arg6 allowVerticalScrollbar:(_Bool)arg7;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)redrawScaledDocument;
- (void)_removeFindOnPageHighlighter:(id)arg1;
- (id)addFindOnPageHighlighter;
- (_Bool)considerHeightOfRectOfInterestForRotation;
- (struct CGSize)contentSizeForScrollView:(id)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (double)heightToKeepVisible;
- (double)minimumVerticalContentOffset;
- (struct CGRect)rectOfInterestForRotation;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_57d825b2)arg2;
- (CDStruct_57d825b2)scalesForContainerSize:(struct CGSize)arg1;
@property(nonatomic) _Bool alwaysDispatchesScrollEvents;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (void)_startURLificationIfNeededCoalesce:(_Bool)arg1;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_clearSelectionAndUI;
- (_Bool)_dumpWebArchiveAtPath:(id)arg1;
- (void)_clearAllConsoleMessages;
- (void)clearMessagesMatchingMask:(int)arg1;
- (id)messagesMatchingMask:(int)arg1;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect)arg1;
- (struct CGSize)_defaultScrollViewContentSize;
- (void)_zoomToRect:(struct CGRect)arg1 withScale:(double)arg2;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(double)arg3 forceScroll:(_Bool)arg4 formAssistantFrame:(struct CGRect)arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(double)arg3 forceScroll:(_Bool)arg4;
- (void)_zoomToNode:(id)arg1 forceScroll:(_Bool)arg2;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(_Bool)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(_Bool)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 toValue:(double)arg5;
- (struct CGRect)_activeRectForRectToCenter:(struct CGRect)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (struct CGPoint)_convertWindowPointToViewport:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isDispatchingTouchEvents;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_handleDeferredEvents;
- (void)_deferWebEvent:(id)arg1;
- (void)_endDeferringEvents;
- (void)_startDeferringEvents;
- (void)_dispatchWebEvent:(id)arg1;
- (_Bool)_shouldDeferEvents;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)_webViewFormEditedStatusHasChanged:(id)arg1;
- (_Bool)_isAutoFilling;
- (_Bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)_clearFormAutoFillStateForFrame:(id)arg1;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)_autoFillFrame:(id)arg1;
- (void)_resetFormDataForFrame:(id)arg1;
- (id)textFormElement;
- (id)formElement;
- (void)formDelegateTextDidChange;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(_Bool)arg1;
- (void)accessoryDone;
@property(nonatomic) NSString *networkInterfaceName;
@property(nonatomic) unsigned int audioSessionCategoryOverride;
@property(nonatomic) _Bool allowsLinkPreview;
@property(nonatomic) _Bool allowsPictureInPictureVideo;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
- (void)_clearToken:(id)arg1;
- (_Bool)_restoreFocusWithToken:(id)arg1;
- (void)_preserveFocusWithToken:(id)arg1 destructively:(_Bool)arg2;
- (void)_reloadInputViewsAfterPotentialFocusRedirect;
- (void)assistFormNode:(id)arg1;
- (void)_assistFormNode:(id)arg1;
- (void)_endAllowingFocusRedirects;
- (void)_beginAllowingFocusRedirects;
- (void)_updateAccessory;
- (void)_updateAutoFillButton;
- (void)_displayFormNodeInputView;
- (void)_stopAssistingFormNode;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)simulateDidScroll;
- (void)_didScroll;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(_Bool)arg2;
- (void)_stopAssistingNode:(id)arg1;
- (void)_startAssistingNode:(id)arg1;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (_Bool)playsNicelyWithGestures;
- (id)_editingDelegate;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)inputView;
- (id)inputAccessoryView;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (id)keyCommands;
- (_Bool)resignFirstResponder;
- (id)textDocument;
- (id)_keyboardResponder;
- (_Bool)_requiresKeyboardResetOnReload;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (_Bool)_keepKeyboardVisibleDuringFocusRedirects;
- (_Bool)isEditable;
- (void)installGestureRecognizers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;
- (_Bool)isAnyTouchOverActiveArea:(id)arg1;
- (_Bool)shouldIgnoreWebTouch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

