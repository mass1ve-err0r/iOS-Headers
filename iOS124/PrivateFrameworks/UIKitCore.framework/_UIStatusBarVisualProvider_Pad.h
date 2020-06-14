//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS
{
    NSDictionary *_orderedDisplayItemPlacements;
    NSLayoutConstraint *_trailingRegionLeadingAnchorConstraint;
    NSLayoutConstraint *_leadingRegionTrailingAnchorConstraint;
    _UIStatusBarDisplayItemPlacement *_datePlacement;
    _UIStatusBarDisplayItemPlacement *_timePlacement;
}

+ (id)expandedFont;
+ (id)normalFont;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets)expandedEdgeInsets;
+ (struct NSDirectionalEdgeInsets)edgeInsets;
+ (double)regionSpacing;
+ (double)height;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement; // @synthesize timePlacement=_timePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement; // @synthesize datePlacement=_datePlacement;
@property(retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint; // @synthesize leadingRegionTrailingAnchorConstraint=_leadingRegionTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint; // @synthesize trailingRegionLeadingAnchorConstraint=_trailingRegionLeadingAnchorConstraint;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (void).cxx_destruct;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_dateTimePreferencesUpdated;
- (_Bool)_updateDateAndTimePlacements;
- (void)itemCreated:(id)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect)arg1;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)styleAttributes;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

