//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendMessageIntent-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBString;

@interface _INPBSendMessageIntent : PBCodable <_INPBSendMessageIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_attachments;
    _INPBString *_content;
    NSString *_conversationIdentifier;
    _INPBString *_groupName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recipients;
    _INPBContact *_sender;
    NSString *_serviceName;
    _INPBDataString *_speakableGroupName;
}

+ (Class)recipientType;
+ (Class)attachmentType;
@property(retain, nonatomic) _INPBDataString *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) _INPBString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasServiceName;
@property(readonly, nonatomic) _Bool hasSender;
- (id)recipientAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
- (id)attachmentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long attachmentsCount;
- (void)addAttachment:(id)arg1;
- (void)clearAttachments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

