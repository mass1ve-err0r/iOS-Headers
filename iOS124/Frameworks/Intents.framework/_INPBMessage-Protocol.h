//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBCurrencyAmountValue, _INPBDataString, _INPBDateTime, _INPBInteger, _INPBMessage, _INPBMessageAttachment, _INPBMessageLinkMetadata;

@protocol _INPBMessage <NSObject>
+ (Class)recipientType;
+ (Class)attachmentType;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataString *speakableGroupName;
@property(readonly, nonatomic) _Bool hasSender;
@property(retain, nonatomic) _INPBContact *sender;
@property(readonly, nonatomic) _Bool hasReferencedMessage;
@property(retain, nonatomic) _INPBMessage *referencedMessage;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) _Bool hasPaymentAmount;
@property(retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property(readonly, nonatomic) _Bool hasNumberOfAttachments;
@property(retain, nonatomic) _INPBInteger *numberOfAttachments;
@property(readonly, nonatomic) _Bool hasLocationName;
@property(copy, nonatomic) NSString *locationName;
@property(readonly, nonatomic) _Bool hasLinkMetadata;
@property(retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(copy, nonatomic) NSString *groupName;
@property(readonly, nonatomic) _Bool hasFileExtension;
@property(copy, nonatomic) NSString *fileExtension;
@property(nonatomic) _Bool hasEffect;
@property(nonatomic) int effect;
@property(readonly, nonatomic) _Bool hasDateSent;
@property(retain, nonatomic) _INPBDateTime *dateSent;
@property(readonly, nonatomic) _Bool hasDateLastMessageRead;
@property(retain, nonatomic) _INPBDateTime *dateLastMessageRead;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
@property(copy, nonatomic) NSString *content;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned long long attachmentsCount;
@property(copy, nonatomic) NSArray *attachments;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearRecipients;
- (int)StringAsEffect:(NSString *)arg1;
- (NSString *)effectAsString:(int)arg1;
- (int)StringAsAttributes:(NSString *)arg1;
- (NSString *)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
- (_INPBMessageAttachment *)attachmentAtIndex:(unsigned long long)arg1;
- (void)addAttachment:(_INPBMessageAttachment *)arg1;
- (void)clearAttachments;
@end

