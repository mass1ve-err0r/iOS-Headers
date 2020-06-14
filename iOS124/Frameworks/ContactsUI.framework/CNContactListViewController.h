//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNAvatarCardControllerDelegate-Protocol.h>
#import <ContactsUI/CNAvatarViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactDataSourceDelegate-Protocol.h>
#import <ContactsUI/CNContactListBannerViewDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIObjectViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIPeopleGroupsGridViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNVCardImportControllerDelegate-Protocol.h>
#import <ContactsUI/CNVCardImportControllerPresentationDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ContactsUI/UISearchBarDelegate-Protocol.h>
#import <ContactsUI/UISearchControllerDelegate-Protocol.h>
#import <ContactsUI/UISearchResultsUpdating-Protocol.h>
#import <ContactsUI/UITableViewDragDestinationDelegate-Protocol.h>
#import <ContactsUI/UITableViewDragSourceDelegate-Protocol.h>

@class CNAvatarCardController, CNAvatarViewController, CNContact, CNContactFormatter, CNContactListBannerView, CNUIContactsEnvironment, CNUIPeopleGroupsGridViewController, CNVCardImportController, NSArray, NSObject, NSString, UISearchBar, UISearchController, _UIContentUnavailableView;
@protocol CNContactDataSource, CNContactListViewControllerDelegate;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIPeopleGroupsGridViewControllerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate>
{
    CNContact *_preferredForNameMeContact;
    _Bool _shouldDisplayMeContactBanner;
    _Bool _shouldAutoHideMeContactBanner;
    _Bool _allowsSearching;
    _Bool _presentsSearchUI;
    _Bool _pendingSearchControllerActivation;
    _Bool _shouldUseLargeTitle;
    _Bool _shouldDisplayGroupsGrid;
    _Bool _shouldAllowDrags;
    _Bool _shouldAllowDrops;
    NSObject<CNContactDataSource> *_dataSource;
    _UIContentUnavailableView *_noContactsView;
    id <CNContactListViewControllerDelegate> _delegate;
    NSString *_meContactBannerFootnoteLabel;
    NSString *_meContactBannerFootnoteValue;
    CNContactFormatter *_contactFormatter;
    CNAvatarCardController *_cardController;
    UISearchController *_searchController;
    UISearchBar *_searchBar;
    CDUnknownBlockType _searchCompletionBlock;
    CNContactListBannerView *_meContactBanner;
    double _contentOffsetDueToMeContactBanner;
    CNUIContactsEnvironment *_environment;
    CNAvatarViewController *_meBannerAvatarController;
    NSArray *_pendingLayoutBlocks;
    CNUIPeopleGroupsGridViewController *_groupsGridController;
    NSArray *_tableViewHeaderConstraints;
    NSString *_pendingSearchQuery;
    CNVCardImportController *_vCardImportController;
    CNContactListViewController *_searchResultsController;
}

+ (id)emptyContact;
@property(nonatomic) _Bool shouldAllowDrops; // @synthesize shouldAllowDrops=_shouldAllowDrops;
@property(nonatomic) _Bool shouldAllowDrags; // @synthesize shouldAllowDrags=_shouldAllowDrags;
@property(nonatomic) _Bool shouldDisplayGroupsGrid; // @synthesize shouldDisplayGroupsGrid=_shouldDisplayGroupsGrid;
@property(retain, nonatomic) CNContactListViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(readonly, nonatomic) _Bool shouldUseLargeTitle; // @synthesize shouldUseLargeTitle=_shouldUseLargeTitle;
@property(retain, nonatomic) CNVCardImportController *vCardImportController; // @synthesize vCardImportController=_vCardImportController;
@property(nonatomic) _Bool pendingSearchControllerActivation; // @synthesize pendingSearchControllerActivation=_pendingSearchControllerActivation;
@property(retain, nonatomic) NSString *pendingSearchQuery; // @synthesize pendingSearchQuery=_pendingSearchQuery;
@property(retain, nonatomic) NSArray *tableViewHeaderConstraints; // @synthesize tableViewHeaderConstraints=_tableViewHeaderConstraints;
@property(retain, nonatomic) CNUIPeopleGroupsGridViewController *groupsGridController; // @synthesize groupsGridController=_groupsGridController;
@property(retain, nonatomic) NSArray *pendingLayoutBlocks; // @synthesize pendingLayoutBlocks=_pendingLayoutBlocks;
@property(retain, nonatomic) CNAvatarViewController *meBannerAvatarController; // @synthesize meBannerAvatarController=_meBannerAvatarController;
@property(readonly, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) _Bool presentsSearchUI; // @synthesize presentsSearchUI=_presentsSearchUI;
@property(readonly, nonatomic) double contentOffsetDueToMeContactBanner; // @synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner;
@property(retain, nonatomic) CNContactListBannerView *meContactBanner; // @synthesize meContactBanner=_meContactBanner;
@property(copy, nonatomic) CDUnknownBlockType searchCompletionBlock; // @synthesize searchCompletionBlock=_searchCompletionBlock;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(nonatomic) _Bool allowsSearching; // @synthesize allowsSearching=_allowsSearching;
@property(copy, nonatomic) NSString *meContactBannerFootnoteValue; // @synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue;
@property(copy, nonatomic) NSString *meContactBannerFootnoteLabel; // @synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel;
@property(nonatomic) _Bool shouldAutoHideMeContactBanner; // @synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner;
@property(nonatomic) __weak id <CNContactListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)vCardImportControllerDidCompleteQueue:(id)arg1;
- (void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2;
- (void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)dragItemsForIndexPath:(id)arg1;
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)startSearchingForString:(id)arg1;
- (void)startSearching;
- (void)cancelSearch:(id)arg1;
- (void)beginSearch:(id)arg1;
- (void)peopleGroupsGridViewControllerDidChange:(id)arg1;
- (id)hostingViewControllerForController:(id)arg1;
- (void)didUpdateContentForAvatarViewController:(id)arg1;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
@property(nonatomic) _Bool shouldDisplayMeContactBanner; // @synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner;
- (void)refreshTableViewHeader;
- (void)refreshTableViewHeaderIfVisible;
@property(readonly, nonatomic) CNContact *preferredForNameMeContact;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (_Bool)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;
- (_Bool)canSelectContactAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (id)_sections;
- (void)contactDataSourceMeContactDidChange:(id)arg1;
- (void)contactDataSourceDidChangeDisplayName:(id)arg1;
- (void)contactDataSourceDidChange:(id)arg1;
- (_Bool)updateFrameAndDisplayNoContactsViewIfNeeded;
- (_Bool)hasNoContacts;
@property(readonly, nonatomic) _UIContentUnavailableView *noContactsView; // @synthesize noContactsView=_noContactsView;
- (void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)searchForString:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (void)_searchBarDidEndEditing:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)_applicationEnteringForeground:(id)arg1;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (void)_updateCountStringNow:(_Bool)arg1;
- (void)_contactCountTelemetry:(unsigned long long)arg1;
- (void)reloadContacts;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (_Bool)selectContact:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
@property(readonly, nonatomic) NSArray *selectedContacts;
- (void)setupForMultiSelection;
- (void)performWhenViewIsLaidOut:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureNavigationBarForLargeTitles;
- (void)viewDidLoad;
- (void)_updateTableViewRowHeight;
- (void)loadView;
- (id)createTableView;
@property(readonly, nonatomic) id <CNContactDataSource> originalDataSource;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)isHandlingSearch;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(_Bool)arg3;
- (id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(_Bool)arg2;
- (id)initWithDataSource:(id)arg1 searchable:(_Bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

