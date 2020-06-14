//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSDate, NSString, PXGadgetSpec, PXInboxAggregateDataSource, PXInboxAggregateDataSourceManager, PXInboxTableViewCellLayoutCoordinator, PXPhotoKitUIMediaProvider, UITableView;
@protocol PXGadgetDelegate, PXInboxModel, PXNavigableForYouViewController;

@interface PXInboxViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXOneUpPresentationDelegate, PXGadget>
{
    _Bool _hasContentToDisplay;
    _Bool _visible;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    UITableView *_tableView;
    id <PXNavigableForYouViewController> _forYouNavigationDelegate;
    NSDate *_lastSeenDate;
    PXInboxAggregateDataSource *_dataSource;
    PXInboxAggregateDataSourceManager *_dataSourceManager;
    PXInboxTableViewCellLayoutCoordinator *_cellLayoutCoordinator;
    double _currentRowHeight;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    id <PXInboxModel> _lastSelectedModel;
    struct _NSRange _dataSourceIndexRange;
    struct CGRect _visibleContentRect;
}

+ (void)preloadResources;
+ (id)createInboxDataSourceManager;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) id <PXInboxModel> lastSelectedModel; // @synthesize lastSelectedModel=_lastSelectedModel;
@property(retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(nonatomic) double currentRowHeight; // @synthesize currentRowHeight=_currentRowHeight;
@property(retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *cellLayoutCoordinator; // @synthesize cellLayoutCoordinator=_cellLayoutCoordinator;
@property(retain, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXInboxAggregateDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(nonatomic) struct _NSRange dataSourceIndexRange; // @synthesize dataSourceIndexRange=_dataSourceIndexRange;
@property(nonatomic) __weak id <PXNavigableForYouViewController> forYouNavigationDelegate; // @synthesize forYouNavigationDelegate=_forYouNavigationDelegate;
@property(nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(readonly, nonatomic) unsigned long long accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)ppt_performBlockAfterLoadingCompletes:(CDUnknownBlockType)arg1;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (void)_startOneUpPresentationForModel:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateSeenState;
- (_Bool)_isModelUnseen:(id)arg1;
- (void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)arg1;
- (_Bool)_shouldHandleAllIndexes;
- (id)_tableViewIndexPathFromDataSourceIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)_dataSourceIndexPathFromTableViewIndexPath:(id)arg1;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (double)_dividerHeight;
- (id)_createDividerView;
- (unsigned long long)_numberOfRows;
- (void)_updateTableViewFrameAndBounds;
- (void)gadgetControllerHasAppeared;
- (struct NSObject *)contentViewController;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
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

