//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgePreferences/BPSSetupPageViewController.h>

#import <BridgePreferences/BPSBuddyController-Protocol.h>
#import <BridgePreferences/PBAutomationDocumentation-Protocol.h>

@class BPSWatchView, NSMutableDictionary, NSString, UIButton, UILabel, UIScrollView;

@interface BPSSetupOptinViewController : BPSSetupPageViewController <PBAutomationDocumentation, BPSBuddyController>
{
    unsigned long long _style;
    BPSWatchView *_watchView;
    UIScrollView *_scrollView;
    UILabel *_detailTextTitleLabel;
    UILabel *_detailTextLabel;
    UIButton *_suggestedChoiceButton;
    UIButton *_alternateChoiceButton;
    UIButton *_learnMoreButton;
    UIButton *_okayButton;
    NSMutableDictionary *_automationBlocks;
}

@property(retain, nonatomic) NSMutableDictionary *automationBlocks; // @synthesize automationBlocks=_automationBlocks;
@property(retain, nonatomic) UIButton *okayButton; // @synthesize okayButton=_okayButton;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIButton *alternateChoiceButton; // @synthesize alternateChoiceButton=_alternateChoiceButton;
@property(retain, nonatomic) UIButton *suggestedChoiceButton; // @synthesize suggestedChoiceButton=_suggestedChoiceButton;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UILabel *detailTextTitleLabel; // @synthesize detailTextTitleLabel=_detailTextTitleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) BPSWatchView *watchView; // @synthesize watchView=_watchView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)wantsOkayPillButton;
- (_Bool)wantsToShowWatchHW;
- (_Bool)wantsLearnMoreButton;
- (_Bool)wantsAlternateChoiceSystemButton;
- (_Bool)wantsAlternateChoicePillButton;
- (_Bool)wantsSuggestedChoicePillButton;
- (void)_madeOptinChoice:(_Bool)arg1 withAlertController:(id)arg2;
- (void)applyConfirmedOptin:(_Bool)arg1;
- (void)showOptinConfirmationAlert:(id)arg1 optinChoice:(_Bool)arg2;
- (id)optinLocalizationBundle;
- (id)optinLocalizationStringsFile;
- (void)viewDidLayoutSubviews;
- (double)suggestedChoicePillDetailTextLabelVerticalOffset;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)noHWDetailOffset;
- (double)noHWImageOffset;
- (double)alternateButtonDetailTextPaddingWithImage;
- (double)okayButtonTopPadding;
- (double)imageDetailPadding;
- (double)sidePadding;
- (id)imageResourceBundleIdentifier;
- (id)imageResource;
- (id)detailAtrributedString;
- (id)detailString;
- (id)detailTitleString;
- (void)okayButtonPressed:(id)arg1;
- (void)learnMoreButtonPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)okayButtonTitle;
- (id)learnMoreButtonTitle;
- (id)alternateButtonTitle;
- (id)suggestedButtonTitle;
- (_Bool)wantsLightenBlendedScreen;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *titleLabel;

@end

