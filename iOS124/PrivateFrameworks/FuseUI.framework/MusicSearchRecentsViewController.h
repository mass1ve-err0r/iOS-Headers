//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/UITableViewDataSource-Protocol.h>
#import <FuseUI/UITableViewDelegate-Protocol.h>

@class MusicSearchRecentsStorage, NSArray, NSString, UIBarButtonItem, UIImageView, UILabel, UITableView, UIView;
@protocol MusicSearchRecentsViewControllerDelegate;

@interface MusicSearchRecentsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIBarButtonItem *_clearBarButtonItem;
    UIImageView *_emptyRecentsImageView;
    UILabel *_emptyRecentsLabel;
    UIView *_emptyRecentsView;
    NSArray *_recentSearches;
    MusicSearchRecentsStorage *_storage;
    id <MusicSearchRecentsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MusicSearchRecentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_recentsStorageDidUpdate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_showTableView;
- (void)_layoutEmptyResultsView;
- (void)_showNoResults;
- (id)_stringAtIndex:(unsigned long long)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_clearButtonTapped:(id)arg1;
- (void)_reloadData;
- (id)contentScrollView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

