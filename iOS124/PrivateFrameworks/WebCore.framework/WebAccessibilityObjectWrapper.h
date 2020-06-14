//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WebAccessibilityObjectWrapperBase.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase
{
    int m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
}

- (id)description;
- (struct CGPoint)accessibilityClickPoint;
- (id)accessibilityMathType;
- (long long)accessibilityMathLineThickness;
- (_Bool)accessibilityIsMathTopObject;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathPostscripts;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilitySortDirection;
- (id)accessibilityARIACurrentStatus;
- (id)accessibilityInvalidStatus;
- (_Bool)accessibilityIsShowingValidationMessage;
- (_Bool)accessibilityIsExpanded;
- (_Bool)accessibilitySupportsARIAExpanded;
- (_Bool)accessibilityIsPressed;
- (_Bool)accessibilitySupportsARIAPressed;
- (_Bool)accessibilityARIALiveRegionIsAtomic;
- (id)accessibilityARIARelevantStatus;
- (id)accessibilityARIALiveRegionStatus;
- (_Bool)accessibilityARIAIsBusy;
- (id)accessibilitySpeechHint;
- (id)accessibilityIdentifier;
- (id)accessibilityExpandedTextValue;
- (id)textMarkersForRange:(RefPtr_033e7b31)arg1;
- (id)textMarkerRangeForMarkers:(id)arg1;
- (id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(_Bool)arg2;
- (long long)lengthForTextMarkers:(id)arg1;
- (RefPtr_033e7b31)rangeForTextMarkers:(id)arg1;
- (id)previousMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)nextMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)textMarkerForPoint:(struct CGPoint)arg1;
- (id)rectsForSelectionRects:(const Vector_2a2f4e8a *)arg1;
- (id)textRectsFromMarkers:(id)arg1 withText:(id)arg2;
- (id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2;
- (RefPtr_033e7b31)rangeFromMarkers:(id)arg1 withText:(id)arg2;
- (struct CGRect)frameForTextMarkers:(id)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)elementsForRange:(struct _NSRange)arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)attributedStringForElement;
- (id)attributedStringForRange:(struct _NSRange)arg1;
- (id)stringForRange:(struct _NSRange)arg1;
- (id)_stringForRange:(struct _NSRange)arg1 attributed:(_Bool)arg2;
- (id)_stringFromStartMarker:(id)arg1 toEndMarker:(id)arg2 attributed:(_Bool)arg3;
- (id)textMarkerForPosition:(long long)arg1;
- (id)textMarkerRangeForSelection;
- (struct WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)arg1;
- (struct _NSRange)elementTextRange;
- (id)textMarkerRange;
- (long long)positionForTextMarker:(id)arg1;
- (RefPtr_033e7b31)_convertToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(_Bool)arg2;
- (id)stringForTextMarkers:(id)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (_Bool)_addAccessibilityObject:(struct AccessibilityObject *)arg1 toTextMarkerArray:(id)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityMoveSelectionToMarker:(id)arg1;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (void)accessibilityModifySelection:(int)arg1 increase:(_Bool)arg2;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityFindMatchingObjects:(id)arg1;
- (struct AccessibilityObject *)treeItemParentForObject:(struct AccessibilityObject *)arg1;
- (struct AccessibilityObject *)detailParentForObject:(struct AccessibilityObject *)arg1;
- (struct AccessibilityObject *)detailParentForSummaryObject:(struct AccessibilityObject *)arg1;
- (struct CGRect)_accessibilityScrollVisibleRect;
- (struct CGSize)_accessibilityScrollSize;
- (struct CGPoint)_accessibilityScrollPosition;
- (void)postScrollStatusChangeNotification;
- (void)postExpandedChangedNotification;
- (void)postValueChangedNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postChildrenChangedNotification;
- (void)postLoadCompleteNotification;
- (void)postLiveRegionCreatedNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postFocusChangeNotification;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)attachmentView;
- (void)_accessibilityActivate;
- (id)accessibilityTextualContext;
- (_Bool)isAttachment;
- (id)accessibilityLinkedElement;
- (id)accessibilityFlowToElements;
- (_Bool)accessibilityRequired;
- (id)accessibilityLinkRelationshipType;
- (_Bool)accessibilityCanSetValue;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityWebDocumentView;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityContainer;
- (_Bool)containsUnnaturallySegmentedChildren;
- (struct CGRect)accessibilityFrame;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityVisibleContentRect;
- (struct CGRect)accessibilityElementRect;
- (struct CGRect)convertRectToScreenSpace:(struct IntRect *)arg1;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilityScrollToVisible;
- (_Bool)accessibilityPerformEscape;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (id)accessibilityURL;
- (id)accessibilityHint;
- (_Bool)accessibilityIsComboBox;
- (_Bool)accessibilityIsAttachmentElement;
- (id)accessibilityValue;
- (id)accessibilityColorStringValue;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityDatetimeValue;
- (unsigned long long)accessibilityBlockquoteLevel;
- (struct _NSRange)accessibilityColumnRange;
- (struct _NSRange)accessibilityRowRange;
- (unsigned long long)accessibilityARIAColumnIndex;
- (unsigned long long)accessibilityARIARowIndex;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityColumnCount;
- (unsigned long long)accessibilityRowCount;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (id)accessibilityHeaderElements;
- (id)accessibilityTitleElement;
- (struct AccessibilityTable *)tableParent;
- (struct AccessibilityTableCell *)tableCellParent;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (_Bool)_accessibilityIsStrongPasswordField;
- (_Bool)_accessibilityValueIsAutofilled;
- (_Bool)_accessibilityHasTouchEventListener;
- (_Bool)fileUploadButtonReturnsValueInTitle;
- (_Bool)stringValueShouldBeUsedInLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)determineIsAccessibilityElement;
- (_Bool)isSVGGroupElement;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityTextEntryTraits;
- (void)accessibilityVideoEnterFullscreen;
- (void)accessibilityToggleMuteForMedia;
- (_Bool)accessibilityIsMediaMuted;
- (_Bool)accessibilityIsMediaPlaying;
- (id)interactiveVideoDescription;
- (_Bool)accessibilityIsWebInteractiveVideo;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (struct WebAccessibilityObjectWrapper *)_accessibilityFrameAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityFieldsetAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityArticleAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityListAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityTreeAncestor;
- (_Bool)_accessibilityIsLandmarkRole:(int)arg1;
- (_Bool)accessibilityIsDialog;
- (id)accessibilityLanguage;
- (_Bool)accessibilityHasPopup;
- (struct CGPath *)_accessibilityPath;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)disableAttributeCaching;
- (void)enableAttributeCaching;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(struct CGPoint)arg1;
- (_Bool)accessibilityCanFuzzyHitTest;
- (unsigned long long)_axUpdatesFrequentlyTrait;
- (unsigned long long)_axTextAreaTrait;
- (unsigned long long)_axSearchFieldTrait;
- (unsigned long long)_axContainedByFieldsetTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axLinkTrait;
- (_Bool)_prepareAccessibilityCall;
- (void)dealloc;
- (void)detach;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;

@end

