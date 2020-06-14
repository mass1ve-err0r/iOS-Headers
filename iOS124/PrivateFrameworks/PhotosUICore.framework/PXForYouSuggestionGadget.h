//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXForYouSuggestionGadgetContentView, PXGadgetSpec, PXRegionOfInterest, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset, PXDisplaySuggestion, PXForYouSuggestionGadgetDelegate;

@interface PXForYouSuggestionGadget : NSObject <PXGadget>
{
    _Bool _contentHidden;
    _Bool _blursDegradedContent;
    _Bool _contentViewVisible;
    unsigned short _suggestionType;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXForYouSuggestionGadgetDelegate> _delegate;
    id <PXDisplaySuggestion> _suggestion;
    PXUIMediaProvider *_mediaProvider;
    id <PXDisplayAsset> _keyAsset;
    PXForYouSuggestionGadgetContentView *_contentView;
    NSString *_title;
    NSString *_subtitle;
    struct CGSize _cachedHeightForWidth;
    struct CGRect _visibleContentRect;
}

+ (id)fetchQueue;
+ (void)preloadResources;
+ (id)placeholderFilters;
@property(nonatomic) unsigned short suggestionType; // @synthesize suggestionType=_suggestionType;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(retain, nonatomic) PXForYouSuggestionGadgetContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGSize cachedHeightForWidth; // @synthesize cachedHeightForWidth=_cachedHeightForWidth;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(nonatomic) _Bool blursDegradedContent; // @synthesize blursDegradedContent=_blursDegradedContent;
@property(nonatomic, getter=isContentHidden) _Bool contentHidden; // @synthesize contentHidden=_contentHidden;
@property(retain, nonatomic) id <PXDisplaySuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(nonatomic) __weak id <PXForYouSuggestionGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)_updateKeyAsset;
- (void)_markSuggestionAsDeclined;
- (void)_markSuggestionAsActive;
- (void)_handleDismiss;
- (void)_handleContentViewTap:(id)arg1;
- (id)_contentViewIfLoaded;
- (void)_updateTitleAndSubtitle;
- (void)_updateContentViewMode;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (id)debugDictionary;
- (id)debugURLsForDiagnostics;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)gadgetControllerHasAppeared;
- (void)contentHasBeenSeen;
- (id)uniqueGadgetIdentifier;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithSuggestion:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

