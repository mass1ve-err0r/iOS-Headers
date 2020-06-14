//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSUUID;

@interface IDSGroupSessionActiveParticipant : NSObject
{
    NSUUID *_groupUUID;
    unsigned long long _participantIdentifier;
    NSString *_participantURI;
    _Bool _isKnown;
    NSData *_participantPushToken;
}

@property(readonly, nonatomic) NSData *participantPushToken; // @synthesize participantPushToken=_participantPushToken;
@property(readonly, nonatomic) _Bool isKnown; // @synthesize isKnown=_isKnown;
@property(readonly, nonatomic) NSString *participantURI; // @synthesize participantURI=_participantURI;
@property(readonly, nonatomic) unsigned long long participantIdentifier; // @synthesize participantIdentifier=_participantIdentifier;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(_Bool)arg3 participantURI:(id)arg4 pushToken:(id)arg5;

@end

