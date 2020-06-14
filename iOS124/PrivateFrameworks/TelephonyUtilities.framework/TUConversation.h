//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSUUID, TUContactsDataProvider, TUHandle;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _locallyCreated;
    TUContactsDataProvider *_contactsDataProvider;
    NSUUID *_UUID;
    NSUUID *_groupUUID;
    long long _state;
    NSSet *_participantHandles;
    NSSet *_remoteMembers;
    NSSet *_activeRemoteParticipants;
    long long _avcSessionToken;
    NSUUID *_messagesGroupUUID;
    TUHandle *_initiator;
    NSString *_messagesGroupName;
    long long _maxVideoDecodesAllowed;
    NSObject *_reportingHierarchyToken;
    NSObject *_reportingHierarchySubToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)numberFormatter;
+ (id)emptyConversationWithGroupUUID:(id)arg1;
@property(retain, nonatomic) NSObject *reportingHierarchySubToken; // @synthesize reportingHierarchySubToken=_reportingHierarchySubToken;
@property(retain, nonatomic) NSObject *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(nonatomic) long long maxVideoDecodesAllowed; // @synthesize maxVideoDecodesAllowed=_maxVideoDecodesAllowed;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(retain, nonatomic) TUHandle *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(nonatomic) long long avcSessionToken; // @synthesize avcSessionToken=_avcSessionToken;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(copy, nonatomic) NSSet *participantHandles; // @synthesize participantHandles=_participantHandles;
@property(nonatomic, getter=isLocallyCreated) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToConversation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) TUContactsDataProvider *contactsDataProvider; // @synthesize contactsDataProvider=_contactsDataProvider;
- (_Bool)isRepresentedByRemoteMembers:(id)arg1;
- (id)initiatorLocalizedName;
- (id)displayName;
- (id)description;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;

@end

