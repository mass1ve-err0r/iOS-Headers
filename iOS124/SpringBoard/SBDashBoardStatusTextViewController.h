//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@class MCProfileConnection, NSString, SBDashBoardStatusTextView;
@protocol SBDashBoardStatusTextViewControllerDelegate;

@interface SBDashBoardStatusTextViewController : SBDashBoardViewControllerBase
{
    SBDashBoardStatusTextView *_view;
    NSString *_overrideFooterText;
    MCProfileConnection *_profileConnection;
    id <SBDashBoardStatusTextViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBDashBoardStatusTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *overrideFooterText; // @synthesize overrideFooterText=_overrideFooterText;
- (void).cxx_destruct;
- (id)_legalContact;
- (id)_legalString;
- (void)_updateTextForLegal;
- (void)_updateTextForProvisionalEnrollment;
- (void)_updateTextForSupervision;
- (void)_updateTextForDeviceInformation;
- (void)_updateTextForProfiles;
- (void)_updateText;
- (void)_profileStateChangedNotification:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)statusTextView;
- (id)init;

@end

