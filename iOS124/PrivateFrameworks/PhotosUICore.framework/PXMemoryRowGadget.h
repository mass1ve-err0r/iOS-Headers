//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXForYouMemoriesViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>

@class NSMutableDictionary, NSString, PXGadgetSpec, PXMemoriesFeedWidgetDataSourceManager;
@protocol PXGadgetDelegate, PXUIViewControllerZoomTransitionEndPoint;

@interface PXMemoryRowGadget : UIViewController <PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXGadget>
{
    CDStruct_d97c9657 _updateFlags;
    _Bool _hasAppeared;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSMutableDictionary *_viewControllerEntries;
    long long _currentVisibility;
    id <PXUIViewControllerZoomTransitionEndPoint> _currentTransitionEndPoint;
    unsigned long long _currentNumberOfColumns;
}

+ (unsigned long long)numberOfColumnsForCurrentVisibility:(long long)arg1 rowType:(unsigned long long)arg2 numberOfMemories:(unsigned long long)arg3;
+ (long long)visibilityForGadgetSpec:(id)arg1 numberOfMemories:(unsigned long long)arg2;
+ (struct _NSRange)dataSourceRangeForRowType:(unsigned long long)arg1 currentVisibility:(long long)arg2;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) unsigned long long currentNumberOfColumns; // @synthesize currentNumberOfColumns=_currentNumberOfColumns;
@property(retain, nonatomic) id <PXUIViewControllerZoomTransitionEndPoint> currentTransitionEndPoint; // @synthesize currentTransitionEndPoint=_currentTransitionEndPoint;
@property(nonatomic) long long currentVisibility; // @synthesize currentVisibility=_currentVisibility;
@property(retain, nonatomic) NSMutableDictionary *viewControllerEntries; // @synthesize viewControllerEntries=_viewControllerEntries;
@property(readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (long long)_columnSpanForRowType:(unsigned long long)arg1;
- (struct CGRect)_frameForRowType:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (_Bool)_shouldPageForRowType:(unsigned long long)arg1;
- (void)_updateScrollingBehaviorForRowType:(unsigned long long)arg1;
- (void)_removeViewControllerEntryForRowType:(unsigned long long)arg1;
- (void)_refreshViewControllerForRowType:(unsigned long long)arg1 visibility:(long long)arg2;
- (void)_fillViewControllerEntryForRowType:(unsigned long long)arg1;
- (void)_transitionFromCurrentVisibility:(long long)arg1 toNewVisibility:(long long)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(struct _NSRange)arg2;
- (void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(struct _NSRange)arg2;
- (void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2;
- (void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(_Bool)arg3;
- (id)showAllMemoriesFeedAnimated:(_Bool)arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetControllerHasAppeared;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
- (void)_updateScrollingBehaviorIfNeeded;
- (void)_updateNumberOfColumnsIfNeeded;
- (void)_updateVisibilityIfNeeded;
- (void)_dismissIfNeeded;
- (void)_updateIfNeeded;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end

