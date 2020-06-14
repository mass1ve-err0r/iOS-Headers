//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/UITableViewDataSource-Protocol.h>
#import <VideosUI/UITableViewDelegate-Protocol.h>
#import <VideosUI/VUIDownloadEntityTableViewCellDelegate-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIBarButtonItem, UITableView, VUIDownloadShowTableHeaderView, VUIMediaEntitiesFetchController, VUIMediaEntity;

__attribute__((visibility("hidden")))
@interface VUIDownloadShowTableViewController : VUILibraryFetchControllerViewController <UITableViewDataSource, UITableViewDelegate, VUIMediaEntitiesFetchControllerDelegate, VUIDownloadEntityTableViewCellDelegate>
{
    VUIMediaEntity *_showEntity;
    UITableView *_downloadEntitiesTableView;
    VUIMediaEntitiesFetchController *_fetchController;
    NSArray *_episodesGroupedBySeason;
    VUIDownloadShowTableHeaderView *_sizingHeader;
    NSMutableArray *_episodesBySeason;
    UIBarButtonItem *_rightBarButtonItem;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    NSMutableArray *_assetControllersToRemove;
}

@property(retain, nonatomic) NSMutableArray *assetControllersToRemove; // @synthesize assetControllersToRemove=_assetControllersToRemove;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) NSMutableArray *episodesBySeason; // @synthesize episodesBySeason=_episodesBySeason;
@property(retain, nonatomic) VUIDownloadShowTableHeaderView *sizingHeader; // @synthesize sizingHeader=_sizingHeader;
@property(retain, nonatomic) NSArray *episodesGroupedBySeason; // @synthesize episodesGroupedBySeason=_episodesGroupedBySeason;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property(retain, nonatomic) UITableView *downloadEntitiesTableView; // @synthesize downloadEntitiesTableView=_downloadEntitiesTableView;
@property(retain, nonatomic) VUIMediaEntity *showEntity; // @synthesize showEntity=_showEntity;
- (void).cxx_destruct;
- (void)_popIfNeeded;
- (void)_exitEditingMode;
- (id)_configureAlertControllerForIndexPath:(id)arg1;
- (void)_cancelPressed;
- (void)_editToggled;
- (void)_loadDownloadedShows;
- (void)downloadCellDidRequestCancelDownload:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithMediaEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

