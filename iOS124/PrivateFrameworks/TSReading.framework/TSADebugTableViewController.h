//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, TSADebugViewController;

@interface TSADebugTableViewController : UITableViewController
{
    NSMutableArray *_debugItems;
    TSADebugViewController *_parent;
}

- (void)hideImmediately;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

