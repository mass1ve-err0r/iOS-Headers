//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, PXUpdater, _UIContentUnavailableView;

@interface PXEmptyPlaceholderViewController : UIViewController
{
    PXUpdater *_updater;
    NSString *_placeholderTitle;
    NSString *_placeholderMessage;
}

@property(copy, nonatomic) NSString *placeholderMessage; // @synthesize placeholderMessage=_placeholderMessage;
@property(copy, nonatomic) NSString *placeholderTitle; // @synthesize placeholderTitle=_placeholderTitle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_updatePlaceholderView;
- (void)_scheduleLayout;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) _UIContentUnavailableView *_placeholderView;
- (void)loadView;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

