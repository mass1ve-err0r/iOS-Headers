//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIBarButtonItem, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorViewController : UITableViewController
{
    NSArray *_sceneViewModels;
    UIImage *_sortBarButtonImage;
    UIView *_loadingContentView;
    UIBarButtonItem *_sortButton;
    UIBarButtonItem *_shareButton;
}

@property(retain, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIBarButtonItem *sortButton; // @synthesize sortButton=_sortButton;
@property(retain, nonatomic) UIView *loadingContentView; // @synthesize loadingContentView=_loadingContentView;
@property(retain, nonatomic) UIImage *sortBarButtonImage; // @synthesize sortBarButtonImage=_sortBarButtonImage;
@property(copy, nonatomic) NSArray *sceneViewModels; // @synthesize sceneViewModels=_sceneViewModels;
- (void).cxx_destruct;
- (id)_assetGridViewControllerForViewModel:(id)arg1;
- (id)_commaSeparatedValueRepresentation;
- (void)didSelectShareButton:(id)arg1;
- (id)_titleForSortOrder:(unsigned long long)arg1;
- (id)_sortViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;
- (void)didSelectSortButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didSelectDoneButton:(id)arg1;
- (void)updateToolbarButtons;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

