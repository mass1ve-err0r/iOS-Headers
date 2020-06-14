//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem
{
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
    unsigned long long _lastKnownNumberOfSubitems;
}

- (void).cxx_destruct;
- (id)_editItemForIndex:(unsigned long long)arg1;
- (id)_lowestEditItem;
- (id)footerView;
- (id)footerTitle;
- (double)footerHeightForWidth:(double)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (void)setDelegate:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)forceTableReloadOnSave;
- (_Bool)requiresReconfigurationOnSave;
- (void)reset;
- (id)init;

@end

