//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKUIAccountRefresherDelegate-Protocol.h>

@class EKCalendar, EKEventStore, EKSource, EKUIAccountRefresher, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIBarButtonItem, UIRefreshControl, UITableView, _UIAccessDeniedView;
@protocol EKCalendarChooserDelegate, EKStyleProvider;

@interface EKCalendarChooser : UIViewController <EKUIAccountRefresherDelegate>
{
    EKUIAccountRefresher *_currentAccountRefresher;
    NSMutableDictionary *_accountErrorAnalyticsState;
    _Bool _disableCalendarEditing;
    _Bool _showsDeclinedEventsSetting;
    _Bool _showDefaultCalendarExplanatoryText;
    _Bool _showAccountStatus;
    _Bool _showDetailAccessories;
    _Bool _allowsEdit;
    CDStruct_424d6339 _flags;
    int _chooserMode;
    long long _style;
    NSMutableSet *_selectedCalendars;
    id <EKCalendarChooserDelegate> _delegate;
    unsigned long long _entityType;
    long long _lastAuthorizationStatus;
    EKEventStore *_eventStore;
    UITableView *_tableView;
    UIBarButtonItem *_showAllButton;
    NSMutableArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSMutableDictionary *_customGroupMap;
    NSIndexPath *_checkedRow;
    id <EKStyleProvider> _styleProvider;
    EKSource *_limitedToSource;
    _UIAccessDeniedView *_accessDeniedView;
    UIRefreshControl *_refreshControl;
}

+ (id)_subscribedLocalizedString;
+ (_Bool)groups:(id)arg1 differStructurallyFromGroups:(id)arg2;
+ (id)hideAllString;
+ (id)showAllString;
@property(nonatomic) _Bool allowsEdit; // @synthesize allowsEdit=_allowsEdit;
@property(nonatomic) _Bool showDetailAccessories; // @synthesize showDetailAccessories=_showDetailAccessories;
@property(nonatomic) _Bool showAccountStatus; // @synthesize showAccountStatus=_showAccountStatus;
@property(nonatomic) _Bool showDefaultCalendarExplanatoryText; // @synthesize showDefaultCalendarExplanatoryText=_showDefaultCalendarExplanatoryText;
@property(nonatomic) _Bool showsDeclinedEventsSetting; // @synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting;
@property(nonatomic) _Bool disableCalendarEditing; // @synthesize disableCalendarEditing=_disableCalendarEditing;
@property(nonatomic) int chooserMode; // @synthesize chooserMode=_chooserMode;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) EKSource *limitedToSource; // @synthesize limitedToSource=_limitedToSource;
@property(nonatomic) CDStruct_424d6339 flags; // @synthesize flags=_flags;
@property(nonatomic) __weak id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) NSIndexPath *checkedRow; // @synthesize checkedRow=_checkedRow;
@property(retain, nonatomic) NSMutableDictionary *customGroupMap; // @synthesize customGroupMap=_customGroupMap;
@property(retain, nonatomic) NSMutableDictionary *storeGroupMap; // @synthesize storeGroupMap=_storeGroupMap;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) UIBarButtonItem *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(nonatomic) long long lastAuthorizationStatus; // @synthesize lastAuthorizationStatus=_lastAuthorizationStatus;
@property(nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property(nonatomic) __weak id <EKCalendarChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *selectedCalendarSet; // @synthesize selectedCalendarSet=_selectedCalendars;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_style;
- (void).cxx_destruct;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_sendAnalyticsEvent:(unsigned long long)arg1 forGroup:(id)arg2;
- (void)verifyAccountForGroup:(id)arg1;
- (double)marginForTableView:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_selectAllCalendarsAndStores:(_Bool)arg1;
- (void)_selectCalendar:(id)arg1 selected:(_Bool)arg2;
- (void)_selectGroup:(id)arg1 selected:(_Bool)arg2;
- (void)groupShowAllTapped:(id)arg1;
- (int)_numSelectedGroups;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_cellIdentifierWithSubtitle:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)_declinedEventsSwitchSection;
- (_Bool)_shouldShowGroupNameInSection:(long long)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (_Bool)_tableShouldDisplayVerifyAccountCellForGroup:(id)arg1;
- (long long)tableSectionRow:(long long)arg1 toCalendarIndexInGroup:(long long)arg2;
- (long long)calendarRowOffsetForGroup:(long long)arg1;
- (long long)verifyAccountIndexForGroup:(long long)arg1;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
@property(copy, nonatomic) NSSet *selectedCalendars;
@property(retain, nonatomic) EKCalendar *selectedCalendar;
- (void)_setCalendars:(id)arg1 changedObjectsHint:(id)arg2;
- (id)_statusTextForGroup:(id)arg1;
- (void)_populateGroupsForCalendars:(id)arg1 footersChanged:(_Bool *)arg2;
- (_Bool)_applySelection;
- (id)_loadCalendars;
- (id)_filterCalendars:(id)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (_Bool)_calendarAvailableForEditing:(id)arg1;
- (void)accountRefreshFinished:(id)arg1;
- (void)_finishRefreshing;
- (void)_pulledToRefresh:(id)arg1;
- (void)refresh:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (_Bool)showsWritableCalendarsOnly;
- (void)setShowsWritableCalendarsOnly:(_Bool)arg1;
@property(nonatomic) _Bool allowsPullToRefresh;
@property(nonatomic) _Bool showsRefreshButton;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsDoneButton;
- (unsigned long long)supportedInterfaceOrientations;
@property(nonatomic) _Bool allowsRotation;
- (void)setShowAll:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (id)_tableHeaderView;
- (id)_viewModeTitle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addCalendarButtonPressed;
- (void)setAllSelected:(_Bool)arg1;
- (void)showAllButtonPressed;
- (void)viewDidLoad;
- (_Bool)hasAccountThatCanCreateCalendars;
- (void)loadView;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(id)arg3;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

