//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/EKCalendarItemEditItemDelegate-Protocol.h>
#import <EventKitUI/UIActionSheetDelegate-Protocol.h>
#import <EventKitUI/UIAlertViewDelegate-Protocol.h>

@class EKCalendarItem, EKCalendarItemEditItem, EKEventStore, EKUIRecurrenceAlertController, NSArray, NSMutableSet, NSString, UIBarButtonItem, UIResponder, _UIAccessDeniedView;
@protocol EKCalendarItemEditorDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    NSArray *_editItems;
    NSArray *_orderedEditItems;
    id _revertState;
    _Bool _showsTimeZone;
    NSArray *_currentItems;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKCalendarItemEditItem *_currentEditItem;
    _Bool _giveTitleCellKeyboardFocus;
    int _editItemVisibility;
    _Bool _isIgnoringCellHeightChange;
    _Bool _needsCellHeightChange;
    NSMutableSet *_editItemsDisablingDoneButton;
    long long _lastAuthorizationStatus;
    _Bool _hasAppeared;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_leftButtonSpacer;
    UIBarButtonItem *_rightButtonSpacer;
    double _leftButtonSpace;
    double _rightButtonSpace;
    _Bool _scrollToNotes;
    _Bool _canHideDoneAndCancelButtons;
    _Bool _timeImplicitlySet;
    id <EKCalendarItemEditorDelegate> _editorDelegate;
    EKEventStore *_store;
    EKCalendarItem *_calendarItem;
    UIResponder *_responderToRestoreOnAppearence;
    unsigned long long _visibleSectionToRestoreOnAppearence;
    _UIAccessDeniedView *_accessDeniedView;
}

+ (id)_doneLocalizedString;
+ (id)_addLocalizedString;
+ (id)defaultTitleForCalendarItem;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(nonatomic) _Bool timeImplicitlySet; // @synthesize timeImplicitlySet=_timeImplicitlySet;
@property(readonly) EKCalendarItemEditItem *currentEditItem; // @synthesize currentEditItem=_currentEditItem;
@property(nonatomic) _Bool canHideDoneAndCancelButtons; // @synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons;
@property(nonatomic) _Bool showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) unsigned long long visibleSectionToRestoreOnAppearence; // @synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence;
@property(retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // @synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence;
@property(nonatomic) _Bool scrollToNotes; // @synthesize scrollToNotes=_scrollToNotes;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) EKEventStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <EKCalendarItemEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (void)_performCloseKeyCommand;
- (void)_setUpKeyCommands;
- (void)_presentDetachSheet;
- (id)_viewForSheet;
- (id)_nameForDeleteButton;
- (_Bool)_performSave:(long long)arg1 animated:(_Bool)arg2;
- (void)_performDelete:(long long)arg1;
- (void)deleteClicked:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableViewDidStartReload:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long *)arg2;
- (id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;
- (void)editItemRequiresHeightChange:(id)arg1;
- (void)editItemVisibilityChanged:(id)arg1;
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (long long)rowNumberForEditItem:(id)arg1;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;
- (void)_reallyHandleCellHeightChange;
- (void)_tableViewDidUpdateHeights;
- (void)_tableViewWillUpdateHeights;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;
- (_Bool)_canEnableDoneButton;
- (void)editItem:(id)arg1 wantsKeyboardPinned:(_Bool)arg2;
- (id)viewControllerForEditItem:(id)arg1;
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
- (void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (void)editItemDidEndEditing:(id)arg1;
- (void)_updateDoneButtonState;
- (void)editItem:(id)arg1 didSaveFromDetailViewController:(_Bool)arg2;
- (void)editItemDidStartEditing:(id)arg1;
- (void)_revertEvent;
- (void)_copyEventForPossibleRevert;
@property(nonatomic) double navBarRightContentInset;
@property(nonatomic) double navBarLeftContentInset;
- (void)_setWantsToEnableDoneButton:(_Bool)arg1;
- (void)_setDoneAndCancelButtonVisible:(_Bool)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide;
- (void)_pinKeyboard:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)refreshLocation;
- (void)refreshInvitees;
- (void)refreshStartAndEndDates;
- (void)_setShowingAccessDeniedView:(_Bool)arg1 showSettingsInstructions:(_Bool)arg2;
- (void)storeChanged:(id)arg1;
- (void)setupForEvent;
- (unsigned long long)entityType;
- (id)notificationNamesForLocaleChange;
- (void)customizeActionSheet:(id)arg1;
- (id)defaultAlertTitle;
- (void)setupDeleteButton;
- (id)preferredTitle;
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;
- (void)prepareEditItems;
- (void)_setCalendarItemOnEditItems;
- (void)_configureVisibleItems;
- (_Bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;
- (void)_completeWithAction:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;
- (void)completeWithAction:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;
- (void)focus:(unsigned long long)arg1 select:(_Bool)arg2;
- (_Bool)hasUnsavedChanges;
- (_Bool)willPresentDialogOnSave;
- (void)completeAndSave;
- (void)handleTapOutside;
- (void)done:(id)arg1;
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1;
- (void)cancel:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationDidResume;
- (void)viewDidLoad;
- (void)updateNavButtonsWithSpacing;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (long long)firstTableRowForEditItem:(id)arg1;
- (unsigned long long)tableSectionForEditItem:(id)arg1;
- (int)editItemVisibility;
- (void)setEditItemVisibility:(int)arg1 animated:(_Bool)arg2;
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(_Bool)arg3;
- (void)_localeChanged;
- (id)_orderedEditItems;
- (id)_editItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

