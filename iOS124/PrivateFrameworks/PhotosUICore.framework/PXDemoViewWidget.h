//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXDemoViewWidget : NSObject <PXWidget>
{
    _Bool _isExpanded;
    double _height;
    _Bool __didLoadContent;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    UIView *__containerView;
    UIView *__contentView;
    long long __animationCount;
    struct CGSize __contentSize;
}

@property(nonatomic, setter=_setAnimationCount:) long long _animationCount; // @synthesize _animationCount=__animationCount;
@property(nonatomic, setter=_setDidLoadContent:) _Bool _didLoadContent; // @synthesize _didLoadContent=__didLoadContent;
@property(nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic, setter=_setContentViewAnchoringType:) long long contentViewAnchoringType; // @synthesize contentViewAnchoringType=_contentViewAnchoringType;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (void)userDidSelectDisclosureControl;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (void)loadContentData;
- (void)setContentSize:(struct CGSize)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)_updateContentViewColor;
- (struct CGRect)_contentViewFrameForSize:(struct CGSize)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_loadViews;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(retain, nonatomic) PXPhotosDetailsContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end

