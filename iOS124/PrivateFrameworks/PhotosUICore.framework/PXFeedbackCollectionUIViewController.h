//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXFeedbackFormDelegate-Protocol.h>

@class NSString, UINavigationController;

@interface PXFeedbackCollectionUIViewController : UIViewController <PXFeedbackFormDelegate>
{
    UINavigationController *_navigationController;
    unsigned long long _feedbackCollectionType;
}

- (void).cxx_destruct;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (_Bool)shouldDisplaySecondaryFeedbackButtons;
- (id)viewTitleForRadar;
- (id)longTitleText;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
