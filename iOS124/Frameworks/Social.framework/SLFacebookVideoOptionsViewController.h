//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSURL, SLVideoQualityOption;
@protocol SLFacebookVideoOptionsDelegate;

__attribute__((visibility("hidden")))
@interface SLFacebookVideoOptionsViewController : UITableViewController
{
    NSArray *_qualityOptions;
    NSURL *_videoAssetURL;
    SLVideoQualityOption *_selectedOption;
    id <SLFacebookVideoOptionsDelegate> _delegate;
}

@property(nonatomic) __weak id <SLFacebookVideoOptionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)_generateQualityOptionsWithAssetURL:(id)arg1;
- (void)setSelectedQualityOption:(id)arg1;
- (id)initWithVideoAssetURL:(id)arg1;

@end

