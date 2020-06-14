/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider> {
    NSDictionary * _orderedDisplayItemPlacements;
    _UIStatusBarRegion * _radarRegion;
    _UIStatusBar * _statusBar;
    _UIStatusBarRegion * _timeRegion;
}

@property (nonatomic, readonly) bool canFixupDisplayItemAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) _UIStatusBarRegion *radarRegion;
@property (nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;
@property (nonatomic, retain) _UIStatusBarRegion *timeRegion;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForQuietMode;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3;
- (void)itemCreated:(id)arg1;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)radarRegion;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setRadarRegion:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setTimeRegion:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;
- (id)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;
- (id)timeRegion;
- (id)willUpdateWithData:(id)arg1;

@end