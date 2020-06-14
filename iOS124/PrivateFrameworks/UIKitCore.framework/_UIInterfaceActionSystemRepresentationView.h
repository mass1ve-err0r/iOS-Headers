//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionRepresentationView.h>

#import <UIKitCore/UIInterfaceActionDisplayPropertyObserver-Protocol.h>

@class NSArray, NSSet, NSString, _UIInterfaceActionImagePropertyView, _UIInterfaceActionLabelsPropertyView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver>
{
    _UIInterfaceActionImagePropertyView *_leadingImageView;
    _UIInterfaceActionImagePropertyView *_trailingImageView;
    _UIInterfaceActionLabelsPropertyView *_labelsView;
    NSSet *_viewsToDisplayWhenContentsVisible;
    NSSet *_displayedViews;
    NSArray *_displayedViewsSpacingConstraints;
    NSArray *_displayedViewsPositioningConstraints;
}

@property(readonly, nonatomic) NSArray *displayedViewsPositioningConstraints; // @synthesize displayedViewsPositioningConstraints=_displayedViewsPositioningConstraints;
@property(readonly, nonatomic) NSArray *displayedViewsSpacingConstraints; // @synthesize displayedViewsSpacingConstraints=_displayedViewsSpacingConstraints;
@property(retain, nonatomic) NSSet *displayedViews; // @synthesize displayedViews=_displayedViews;
@property(retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible; // @synthesize viewsToDisplayWhenContentsVisible=_viewsToDisplayWhenContentsVisible;
@property(readonly, nonatomic) _UIInterfaceActionLabelsPropertyView *labelsView; // @synthesize labelsView=_labelsView;
@property(readonly, nonatomic) _UIInterfaceActionImagePropertyView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) _UIInterfaceActionImagePropertyView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
- (void).cxx_destruct;
- (_Bool)_isDisplayingTrailingImageView;
- (_Bool)_isDisplayingLeadingImageView;
- (_Bool)_displayedViewsConstraintsNeedsLoading;
- (void)_activateDisplayedViewsConstraints;
- (void)_invalidateDisplayedViewsConstraints;
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;
- (id)_constraintsForHorizontallyCenteringLabelsView;
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(_Bool)arg1;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(_Bool)arg1;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1;
- (id)_constraintsForVeritcallyCenteringViews:(id)arg1;
- (void)_loadConstraintsForLabelsAndImagesDisplay;
- (void)_loadConstraintsForLabelsOnlyDisplay;
- (void)_loadConstraintsForDisplayedViews;
- (id)_horizontalEdgeReference;
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
- (void)_removeAllDisplayedViews;
- (void)_arrangeDisplayedViews;
- (void)_reloadViewsToDisplayWhenContentsVisible;
- (void)_applyVisualStyleToDisplayedViews;
- (void)_applyVisualStyle;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (_Bool)_hasLoadedContents;
- (void)updateContentsInsertedIntoHierarchy;
- (void)loadContents;
- (void)updateConstraints;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

