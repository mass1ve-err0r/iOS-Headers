//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@protocol SearchUIFeedbackDelegate;

@interface SearchUIUserFeedbackRequestViewController : UIAlertController
{
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
}

@property(retain) id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (void).cxx_destruct;
- (void)sendFeedbackForResult:(id)arg1 cardSection:(id)arg2 selectedPunchout:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 feedbackDelegate:(id)arg3 sourceView:(id)arg4;

@end

