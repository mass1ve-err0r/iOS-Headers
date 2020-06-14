//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface PSEditableListController : PSListController
{
    _Bool _editable;
    _Bool _editingDisabled;
}

- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)didLock;
- (void)suspend;
- (_Bool)performDeletionActionForSpecifier:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setEditable:(_Bool)arg1;
- (void)_setEditable:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)editable;
- (void)editDoneTapped;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditButtonEnabled:(_Bool)arg1;
- (void)setEditingButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateNavigationBar;
- (id)_editButtonBarItem;
- (id)init;

@end

