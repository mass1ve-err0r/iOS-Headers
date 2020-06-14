//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import <UIKitCore/PKPrinterBrowserDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, PKPrinter, PKPrinterBrowser, UIPrinterSearchingView;
@protocol UIPrinterBrowserOwner;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>
{
    id <UIPrinterBrowserOwner> _ownerPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    _Bool _loaded;
    UIPrinterSearchingView *_searchingView;
    _Bool _searchingViewConstraintsSet;
    _Bool _shouldFilterPrinters;
    double _rowHeight;
    double _maximumPopoverHeight;
}

@property double maximumPopoverHeight; // @synthesize maximumPopoverHeight=_maximumPopoverHeight;
- (void).cxx_destruct;
- (void)showCancelButton;
- (void)removePrinter:(id)arg1 moreGoing:(_Bool)arg2;
- (void)addPrinter:(id)arg1 moreComing:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)printerAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willEnterForeground;
- (void)updateSearching;
- (void)didChangePreferredContentSize;
- (void)stopPrinterBrowser;
- (void)startPrinterBrowser;
- (void)updateViewConstraints;
- (void)loadView;
- (void)adjustPopoverSize;
- (void)printerInfoButtonTapped:(id)arg1;
- (void)selectPrinter:(id)arg1;
- (void)dealloc;
- (id)initWithOwnerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

