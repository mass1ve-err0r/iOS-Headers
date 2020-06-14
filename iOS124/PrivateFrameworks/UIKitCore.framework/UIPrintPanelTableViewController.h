//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import <UIKitCore/UITextFieldDelegate-Protocol.h>

@class NSString, UIPrintPanelViewController, UIPrintPreviewViewController, UIPrinterBrowserViewController, _UIPrintMessageAndSpinnerView;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController <UITextFieldDelegate>
{
    UIPrintPanelViewController *_printPanelViewController;
    long long _settingsRow;
    long long _rangeRow;
    long long _copiesRow;
    long long _duplexRow;
    long long _grayscaleRow;
    long long _stapleRow;
    long long _punchRow;
    long long _paperRow;
    long long _jobAccountIDRow;
    long long _settingsSection;
    _Bool _contactingPrinter;
    _Bool _printerWarningWasShown;
    _Bool _settingsExpanded;
    UIPrintPreviewViewController *_printPreviewViewController;
    long long _previousPageIndexInCenterOfPreview;
    UIPrinterBrowserViewController *_browserController;
    _UIPrintMessageAndSpinnerView *_messageAndSpinner;
}

- (void).cxx_destruct;
- (_Bool)accessibilityPerformMagicTap;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelButtonPressed:(id)arg1;
- (void)printButtonPressed:(id)arg1;
- (void)promptForJobAccountID;
- (void)selectJobAccountID;
- (void)dismissKeyboardIfNeccessary;
- (id)jobAccountTextField;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateJobAccountID:(id)arg1;
- (void)updatePunch:(id)arg1;
- (void)updateStaple:(id)arg1;
- (void)updateGrayscale:(id)arg1;
- (void)updateDuplex:(id)arg1;
- (void)updateCopies:(id)arg1;
- (void)updateSettingsSummaryText;
- (void)updatePageRangeText;
- (void)updatePageRange:(struct _NSRange)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)textForSettings;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)heightOfPreviewView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)moreButtonPushed:(id)arg1;
- (id)keyCommands;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)clearPrintPanelViewController;
- (id)pdfFileURL;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3;
- (void)setShowPreviewGenerating:(_Bool)arg1;
- (void)showPreviewGenerating;
- (void)setShowContactingPrinter:(_Bool)arg1;
- (_Bool)shouldEnablePrintButton;
- (void)showContacting;
- (void)showCancelButton;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)_updateSize;
- (void)_update:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

