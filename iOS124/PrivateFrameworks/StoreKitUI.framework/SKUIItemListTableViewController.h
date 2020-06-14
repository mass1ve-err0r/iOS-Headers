//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <StoreKitUI/SKUIItemCollectionDelegate-Protocol.h>

@class NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIItemList, SKUIResourceLoader, SKUIStyledImageDataConsumer, SKUIUber, SSVLoadURLOperation;
@protocol SKUIItemListTableDelegate;

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate>
{
    _Bool _delegateWantsCanRemove;
    _Bool _delegateWantsDidRemove;
    _Bool _delegateWantsWillDisplay;
    _Bool _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemArtworkContext *_artworkContext;
    SKUIItemCollectionController *_itemCollectionController;
    SSVLoadURLOperation *_loadMoreOperation;
    _Bool _requestedLoadMore;
    _Bool _loadsMoreItems;
    _Bool _suspended;
    id <SKUIItemListTableDelegate> _delegate;
    SKUIClientContext *_clientContext;
    SKUIItemList *_itemList;
    NSOperationQueue *_operationQueue;
    double _rowHeight;
    long long _selectionStyle;
    long long _separatorStyle;
    SKUIUber *_uber;
    struct CGSize _imageBoundingSize;
}

@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool loadsMoreItems; // @synthesize loadsMoreItems=_loadsMoreItems;
@property(retain, nonatomic) SKUIItemList *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
@property(nonatomic) __weak id <SKUIItemListTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadRemainingItemsWithPriority:(long long)arg1;
- (id)_itemCollectionController;
- (void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)itemTableView:(id)arg1 didRemoveCell:(id)arg2;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
@property(readonly, nonatomic) NSString *visibleMetricsImpressions;
- (void)unhideIcons;
- (void)setItemCellClass:(Class)arg1;
- (void)setItemArtworkContext:(id)arg1;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property(retain, nonatomic) SKUIResourceLoader *artworkLoader;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

