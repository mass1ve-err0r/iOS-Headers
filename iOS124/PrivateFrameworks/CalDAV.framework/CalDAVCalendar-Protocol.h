//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/NSObject-Protocol.h>

@class CoreDAVAction, NSArray, NSDictionary, NSError, NSSet, NSString, NSTimeZone, NSURL;
@protocol CalDAVPrincipal;

@protocol CalDAVCalendar <NSObject>
@property(readonly, nonatomic) NSSet *allItemURLs;
@property(readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property(readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property(readonly, nonatomic) NSArray *itemsToReportAsJunk;
@property(readonly, nonatomic) NSArray *shareeActions;
@property(readonly, nonatomic) NSArray *syncActions;
@property(readonly, nonatomic) _Bool needsPublishUpdate;
@property(retain, nonatomic) NSString *syncToken;
@property(retain, nonatomic) NSString *ctag;
@property(nonatomic) _Bool needsResync;
@property(nonatomic) _Bool wasModifiedLocally;
@property(nonatomic) _Bool isMarkedImmutableSharees;
@property(nonatomic) _Bool isMarkedUndeletable;
@property(nonatomic) _Bool isFamilyCalendar;
@property(nonatomic) _Bool canBeShared;
@property(nonatomic) _Bool canBePublished;
@property(nonatomic) _Bool isAffectingAvailability;
@property(nonatomic) _Bool isPublished;
@property(nonatomic) _Bool isEnabled;
@property(nonatomic) _Bool isRenameable;
@property(nonatomic) _Bool isEditable;
@property(nonatomic) _Bool isPoll;
@property(nonatomic) _Bool isNotification;
@property(nonatomic) _Bool isScheduleOutbox;
@property(nonatomic) _Bool isScheduleInbox;
@property(nonatomic) _Bool isManagedByServer;
@property(nonatomic) _Bool isSubscribed;
@property(nonatomic) _Bool isEventContainer;
@property(nonatomic) _Bool isTaskContainer;
@property(retain, nonatomic) NSSet *sharees;
@property(nonatomic) int sharingStatus;
@property(nonatomic) int order;
@property(retain, nonatomic) NSDictionary *bulkRequests;
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) NSURL *prePublishURL;
@property(retain, nonatomic) NSURL *publishURL;
@property(retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property(retain, nonatomic) NSString *ownerDisplayName;
@property(retain, nonatomic) NSURL *owner;
@property(retain, nonatomic) NSString *pushKey;
@property(retain, nonatomic) NSString *symbolicColorName;
@property(retain, nonatomic) NSString *color;
@property(retain, nonatomic) NSString *notes;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSURL *calendarURL;
@property(retain, nonatomic) NSString *guid;
@property(readonly, nonatomic) id <CalDAVPrincipal> principal;
- (_Bool)hasCalendarUserAddressEquivalentToURL:(NSURL *)arg1;
- (_Bool)deleteResourcesAtURLs:(NSSet *)arg1;
- (_Bool)updateResourcesFromServer:(NSSet *)arg1;
- (_Bool)setURL:(NSURL *)arg1 forResourceWithUUID:(NSString *)arg2;
- (_Bool)setScheduleTag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (_Bool)setEtag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (NSDictionary *)etagsForItemURLs:(NSArray *)arg1;

@optional
- (void)deleteAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)putAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)syncDidFinishWithError:(NSError *)arg1;
- (void)clearShareeActions;
- (void)prepareMergeSyncActionsWithCompletionBlock:(void (^)(id <CalDAVCalendar>))arg1;
- (Class)appSpecificCalendarItemClass;
@end

