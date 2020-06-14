//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <VoiceShortcutsUI/VCUIDebugWorkflowViewControllerDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIEditVoiceShortcutViewControllerDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIGalleryViewControllerDelegate-Protocol.h>

@class NSArray, NSString, UISearchController, VCUIVoiceShortcutCell, VCVoiceShortcutClient;

@interface VCUIActiveVoiceShortcutsViewController : UITableViewController <VCUIGalleryViewControllerDelegate, VCUIEditVoiceShortcutViewControllerDelegate, VCUIDebugWorkflowViewControllerDelegate>
{
    VCVoiceShortcutClient *_voiceShortcutClient;
    UISearchController *_searchController;
    NSArray *_voiceShortcuts;
    VCUIVoiceShortcutCell *_prototypeCell;
}

+ (void)initialize;
@property(retain, nonatomic) VCUIVoiceShortcutCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) NSArray *voiceShortcuts; // @synthesize voiceShortcuts=_voiceShortcuts;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
- (void).cxx_destruct;
- (void)galleryViewControllerDidFinish:(id)arg1;
- (void)galleryViewControllerDidCancel:(id)arg1;
- (void)showHandleIntentResponse:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 message:(id)arg2 confirmationHandler:(CDUnknownBlockType)arg3;
- (void)launchExtensionToRunVoiceShortcut:(id)arg1;
- (void)debugWorkflowViewControllerDidFinish:(id)arg1;
- (void)editVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewController:(id)arg1 didSaveWithUpdatedVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didTapCancel;
- (void)createNewShortcut;
- (void)viewDidLoad;
- (void)reloadVoiceShortcuts;
- (id)initWithVoiceShortcutClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

