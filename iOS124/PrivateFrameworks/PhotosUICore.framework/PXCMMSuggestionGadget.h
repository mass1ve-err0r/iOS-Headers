//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMSuggestionView, PXGadgetSpec, PXPersonFaceTileImageCombiner, UIColor, UILongPressGestureRecognizer;
@protocol PXCMMSuggestion, PXGadgetDelegate;

@interface PXCMMSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>
{
    PXCMMSuggestionView *_suggestionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    PXPersonFaceTileImageCombiner *_faceTileImageCombiner;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    id <PXCMMSuggestion> _suggestion;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) id <PXCMMSuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_longPressGesture:(id)arg1;
- (void)_updateLongPressGestureRecognizer;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_presentSuggestion:(id)arg1 animated:(_Bool)arg2 pptConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)_setCombinedFaceTileImage:(id)arg1;
- (void)_updatePeopleSuggestionFaceTileImagesForPersons:(id)arg1;
- (void)_changeViewConfiguration:(CDUnknownBlockType)arg1;
- (void)_loadSuggestion:(id)arg1;
- (void)contentHasBeenSeen;
- (id)uniqueGadgetIdentifier;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(readonly, nonatomic) _Bool supportsHighlighting;
- (void)gadgetControllerHasAppeared;
- (struct NSObject *)contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)ppt_presentComposeRecipientViewAfterDelay:(double)arg1;
- (void)ppt_presentDetailView;
- (void)presentDetailViewAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(nonatomic) struct CGRect visibleContentRect;

@end

