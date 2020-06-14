//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSObject, STContentPrivacyMediaRestrictionsDetailController;
@protocol STContentPrivacyViewModelCoordinator;

@interface STWebFilterDetailController : PSListController
{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
    STContentPrivacyMediaRestrictionsDetailController *_parentMediaRestrictionsController;
}

@property __weak STContentPrivacyMediaRestrictionsDetailController *parentMediaRestrictionsController; // @synthesize parentMediaRestrictionsController=_parentMediaRestrictionsController;
@property(retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (id)_addButtonSpecifierWithGroup:(id)arg1 action:(SEL)arg2;
- (id)listItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)groupSpecifierWithConfiguration:(id)arg1 key:(id)arg2 footerText:(id)arg3 radio:(_Bool)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateParent;
- (void)saveItemValue:(id)arg1 specifier:(id)arg2;
- (void)saveRemovingItem:(id)arg1 value:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (void)addSite:(id)arg1;
- (void)addNamedSite:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)_listItemSpecifiersForSitesGroup:(id)arg1;
- (id)_listItemSpecifiersForNamedSitesGroup:(id)arg1;
- (id)specifiers;
- (id)init;

@end

