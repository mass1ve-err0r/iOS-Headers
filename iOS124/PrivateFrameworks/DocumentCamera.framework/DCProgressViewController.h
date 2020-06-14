//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DCCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;
@protocol DCProgressViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DCProgressViewController : UIViewController
{
    _Bool _showsCancel;
    NSProgress *_observedProgress;
    id <DCProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    DCCircularProgressView *_circularProgressView;
}

@property(retain, nonatomic) DCCircularProgressView *circularProgressView; // @synthesize circularProgressView=_circularProgressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <DCProgressViewControllerDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) _Bool showsCancel; // @synthesize showsCancel=_showsCancel;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

