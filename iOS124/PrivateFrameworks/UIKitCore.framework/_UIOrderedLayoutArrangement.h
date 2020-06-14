//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILayoutArrangement.h>

#import <UIKitCore/_UIOLAPropertySource-Protocol.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource>
{
    NSMapTable *_spacingOrCenteringGuides;
    NSMapTable *_edgeToEdgeConstraintsForVisibleItems;
    NSMapTable *_edgeToEdgeConstraintsForHiddenItems;
    NSMapTable *_relatedDimensionConstraints;
    NSMapTable *_hidingDimensionConstraints;
    NSMapTable *_multilineTextWidthDisambiguationConstraints;
    NSMapTable *_customSpacings;
    double _proportionalFillDenominator;
    _Bool _itemOrderingChanged;
    _Bool _itemFittingSizeChanged;
    _Bool _baselineRelativeArrangement;
    double _spacing;
    long long _distribution;
}

+ (Class)_configurationHistoryClass;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) NSMapTable *customSpacings; // @synthesize customSpacings=_customSpacings;
@property(nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property(nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged; // @synthesize _itemOrderingChanged;
- (void).cxx_destruct;
- (id)_baselineViewVendTallest:(_Bool)arg1 forFirstBaseline:(_Bool)arg2;
- (id)_lastVisibleItem;
- (id)_firstVisibleItem;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1;
- (id)_tallestItem;
- (double)_calculatedIntrinsicHeight;
- (void)_cleanUpGuides;
- (void)_clearAllConstraintsArrays;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_updateArrangementConstraints;
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (_Bool)_itemCountChanged;
- (_Bool)_wantsProportionalDistribution;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1;
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)arg1;
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)arg1 hiddenItem:(id)arg2;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4 isHidden:(_Bool)arg5;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4;
- (double)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4;
- (long long)_precedingLocationAttributeForGuideConstraint;
- (long long)_minAttributeForGapConstraint;
- (long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;
- (long long)_minAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;
- (void)_adjustConstraintConstantsIfPossible;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processPrecedingVisisbleItem:(_Bool)arg3;
- (void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processAdjacentHiddenItems:(_Bool)arg3;
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (id)_dimensionRefItemFromConstraint:(id)arg1;
- (id)_orderedPropertySource;
- (id)_orderedConfigurationHistory;
- (double)customSpacingAfterItem:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (id)_identifierForSpanningLayoutGuide;
- (_Bool)_hasStaleConfiguration;
- (_Bool)_hasStaleSpacing;
- (_Bool)_customSpacingChanged;
- (void)_updateConfigurationHistory;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_trackChangesAffectingExternalBaselineConstraints:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) long long axis;

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

