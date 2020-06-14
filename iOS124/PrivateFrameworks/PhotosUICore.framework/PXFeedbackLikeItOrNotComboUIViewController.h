//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;
@protocol PXFeedbackFormDelegate;

@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController
{
    _Bool __showsActivityIndicator;
    id <PXFeedbackFormDelegate> _delegate;
    UIActivityIndicatorView *__activityIndicatorView;
}

@property(nonatomic) _Bool _showsActivityIndicator; // @synthesize _showsActivityIndicator=__showsActivityIndicator;
@property(readonly, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // @synthesize _activityIndicatorView=__activityIndicatorView;
@property(retain, nonatomic) id <PXFeedbackFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelFeedback:(id)arg1;
- (void)setShowsActivityIndicator:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_provideFeedback:(id)arg1;
- (void)showMoreFeedbackForm;
- (void)_fileRadar:(id)arg1;
- (void)_doFileRadar:(id)arg1;
- (void)_dislikedIt:(id)arg1;
- (void)_likedIt:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

