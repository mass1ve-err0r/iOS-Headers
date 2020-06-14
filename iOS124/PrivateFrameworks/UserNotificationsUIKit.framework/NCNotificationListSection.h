//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BSDescriptionProviding-Protocol.h>

@class NSArray, NSDate, NSHashTable, NSMutableOrderedSet, NSString;
@protocol NCNotificationListSectionDelegate;

@interface NCNotificationListSection : NSObject <BSDescriptionProviding>
{
    id <NCNotificationListSectionDelegate> _delegate;
    NSString *_title;
    NSString *_identifier;
    NSMutableOrderedSet *_notificationListItems;
    NSHashTable *_notificationListItemsHashTable;
}

@property(retain, nonatomic) NSHashTable *notificationListItemsHashTable; // @synthesize notificationListItemsHashTable=_notificationListItemsHashTable;
@property(retain, nonatomic) NSMutableOrderedSet *notificationListItems; // @synthesize notificationListItems=_notificationListItems;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <NCNotificationListSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_insertionIndexIfExistingCoalescedNotificationForNotificationRequest:(id)arg1;
- (unsigned long long)_indexOfListItemWithCoalescingIdentifier:(id)arg1;
- (unsigned long long)_nextIndexOfExpandedNotificationStackStartingAtIndex:(unsigned long long)arg1 coalescingIdentifier:(id)arg2;
- (unsigned long long)_insertionIndexIfNonExpandedNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexForNotificationRequestItem:(id)arg1;
- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (id)_coalescingIdentifierForNotificationRequest:(id)arg1;
- (_Bool)_shouldInsertForExpandedStackNotificationRequest:(id)arg1;
- (_Bool)_containsNotificationListItem:(id)arg1;
- (unsigned long long)_indexOfListItemMatchingListItem:(id)arg1;
- (id)_notificationRequestForListItem:(id)arg1;
- (id)_notificationRequestItemForListItem:(id)arg1;
- (id)_notificationRequestItemForNotificationRequest:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)indexForNotificationListItem:(id)arg1;
- (id)notificationListItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeNotificationListItem:(id)arg1;
- (unsigned long long)insertNotificationListItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *allNotificationRequests;
- (_Bool)containsNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1;
- (_Bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (id)notificationRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1;
- (long long)indexForNotificationRequest:(id)arg1;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (unsigned long long)modifyNotificationRequest:(id)arg1;
- (unsigned long long)insertNotificationRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSDate *sectionDate;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

