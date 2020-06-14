//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXMutableHorizontalCollectionGadget-Protocol.h>

@class NSDictionary, NSString, PXGadgetOrbContext, PXGadgetSpec;
@protocol PXGadgetDelegate, PXHorizontalCollectionGadgetDelegate;

@interface PXHorizontalCollectionGadget : PXGadgetViewController <PXMutableHorizontalCollectionGadget, PXGadget>
{
    _Bool _visibleGadgetsLoaded;
    _Bool _isPerformingChanges;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    id <PXHorizontalCollectionGadgetDelegate> _horizontalGadgetDelegate;
    NSString *_collectionTitle;
    unsigned long long _collectionAccessoryButtonType;
    NSString *_collectionAccessoryButtonTitle;
    const struct __CFString *_collectionAccessoryButtonEventTrackerKey;
    double _collectionHeight;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpans;
    unsigned long long _gadgetType;
    unsigned long long _headerStyle;
    CDUnknownBlockType _accessoryButtonAction;
    PXGadgetOrbContext *_previewOrbContext;
    long long _currentColumnSpan;
    struct CGSize _cachedMaxHeightForColumnWidth;
    struct CGRect _visibleContentRect;
}

@property(nonatomic) struct CGSize cachedMaxHeightForColumnWidth; // @synthesize cachedMaxHeightForColumnWidth=_cachedMaxHeightForColumnWidth;
@property(nonatomic) long long currentColumnSpan; // @synthesize currentColumnSpan=_currentColumnSpan;
@property(retain, nonatomic) PXGadgetOrbContext *previewOrbContext; // @synthesize previewOrbContext=_previewOrbContext;
@property(nonatomic) _Bool isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property(nonatomic) _Bool visibleGadgetsLoaded; // @synthesize visibleGadgetsLoaded=_visibleGadgetsLoaded;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonAction; // @synthesize accessoryButtonAction=_accessoryButtonAction;
@property(nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property(copy, nonatomic) NSDictionary *columnSpans; // @synthesize columnSpans=_columnSpans;
@property(nonatomic) long long defaultColumnSpan; // @synthesize defaultColumnSpan=_defaultColumnSpan;
@property(readonly, nonatomic) double collectionHeight; // @synthesize collectionHeight=_collectionHeight;
@property(readonly, nonatomic) const struct __CFString *collectionAccessoryButtonEventTrackerKey; // @synthesize collectionAccessoryButtonEventTrackerKey=_collectionAccessoryButtonEventTrackerKey;
@property(readonly, copy, nonatomic) NSString *collectionAccessoryButtonTitle; // @synthesize collectionAccessoryButtonTitle=_collectionAccessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long collectionAccessoryButtonType; // @synthesize collectionAccessoryButtonType=_collectionAccessoryButtonType;
@property(readonly, copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(nonatomic) __weak id <PXHorizontalCollectionGadgetDelegate> horizontalGadgetDelegate; // @synthesize horizontalGadgetDelegate=_horizontalGadgetDelegate;
@property(nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (void)_updateColumnSettings;
- (long long)_columnSpanForTraitCollection:(id)arg1;
- (struct CGSize)_ensureCachedHeightForColumnWidth:(double)arg1;
- (struct CGRect)visibleBounds;
- (void)extendedTraitCollectionDidChange:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetControllerHasAppeared;
- (id)gridPresentation;
- (id)oneUpPresentation;
- (void)_updateCollectionViewPaging;
- (id)debugURLsForDiagnostics;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)loadContentData;
- (struct NSObject *)contentViewController;
- (_Bool)hasLoadedContentData;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (long long)anchorPosition;
- (void)setCollectionHeight:(double)arg1;
- (void)setCollectionAccessoryButtonEventTrackerKey:(struct __CFString *)arg1;
- (void)setCollectionAccessoryButtonTitle:(id)arg1;
- (void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
- (void)setCollectionTitle:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setLayout:(id)arg1;
- (_Bool)isRootGadgetViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithProviders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

