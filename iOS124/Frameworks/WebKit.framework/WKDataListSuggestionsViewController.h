//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class WKDataListSuggestionsControl;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsViewController : UITableViewController
{
    WKDataListSuggestionsControl *_control;
}

@property(nonatomic) __weak WKDataListSuggestionsControl *control; // @synthesize control=_control;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;

@end

