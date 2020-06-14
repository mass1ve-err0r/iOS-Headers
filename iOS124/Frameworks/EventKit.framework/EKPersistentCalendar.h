//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSSet, NSString, NSURL;

@interface EKPersistentCalendar : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)calendarWithRandomUUID;
- (id)alarms;
- (void)setAlarms:(id)arg1;
- (void)setDigest:(id)arg1;
- (id)digest;
@property(copy, nonatomic) NSString *pushKey; // @dynamic pushKey;
@property(copy, nonatomic) NSString *subcalAccountID; // @dynamic subcalAccountID;
@property(copy, nonatomic) NSString *bulkRequests; // @dynamic bulkRequests;
- (void)setNotes:(id)arg1;
- (id)notes;
@property(copy, nonatomic) NSString *ownerIdentityLastName; // @dynamic ownerIdentityLastName;
@property(copy, nonatomic) NSString *ownerIdentityFirstName; // @dynamic ownerIdentityFirstName;
@property(copy, nonatomic) NSURL *ownerIdentityAddress; // @dynamic ownerIdentityAddress;
@property(copy, nonatomic) NSString *ownerIdentityPhoneNumber; // @dynamic ownerIdentityPhoneNumber;
@property(copy, nonatomic) NSString *ownerIdentityEmail; // @dynamic ownerIdentityEmail;
@property(copy, nonatomic) NSString *ownerIdentityDisplayName; // @dynamic ownerIdentityDisplayName;
@property(copy, nonatomic) NSString *selfIdentityLastName; // @dynamic selfIdentityLastName;
@property(copy, nonatomic) NSString *selfIdentityFirstName; // @dynamic selfIdentityFirstName;
@property(copy, nonatomic) NSURL *selfIdentityAddress; // @dynamic selfIdentityAddress;
@property(copy, nonatomic) NSString *selfIdentityPhoneNumber; // @dynamic selfIdentityPhoneNumber;
@property(copy, nonatomic) NSString *selfIdentityEmail; // @dynamic selfIdentityEmail;
@property(copy, nonatomic) NSString *selfIdentityDisplayName; // @dynamic selfIdentityDisplayName;
- (void)setAllowedEntities:(int)arg1;
- (int)allowedEntities;
@property(nonatomic) unsigned long long invitationStatus; // @dynamic invitationStatus;
@property(retain, nonatomic) EKPersistentSource *source; // @dynamic source;
@property(copy, nonatomic) NSSet *sharees; // @dynamic sharees;
@property(nonatomic, getter=isPublished) _Bool published; // @dynamic published;
- (void)setIsPublished:(_Bool)arg1;
@property(copy, nonatomic) NSString *publishedURL; // @dynamic publishedURL;
@property(nonatomic) unsigned long long sharingInvitationResponse; // @dynamic sharingInvitationResponse;
@property(copy, nonatomic) NSURL *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(nonatomic) unsigned long long sharingStatus; // @dynamic sharingStatus;
@property(nonatomic) int flags; // @dynamic flags;
- (id)description;
@property(nonatomic) int displayOrder; // @dynamic displayOrder;
@property(retain, nonatomic) NSString *UUID; // @dynamic UUID;
@property(copy, nonatomic) NSString *colorString; // @dynamic colorString;
@property(copy, nonatomic) NSString *symbolicColorName; // @dynamic symbolicColorName;
@property(nonatomic, getter=isColorDisplayOnly) _Bool colorDisplayOnly; // @dynamic colorDisplayOnly;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)setExternalRepresentation:(id)arg1;
- (id)externalRepresentation;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
- (void)setExternalIDTag:(id)arg1;
- (id)externalIDTag;
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;
- (int)entityType;

@end

