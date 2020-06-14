//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASChangedCollectionLeaf.h>

@class ASMeetingRequest, NSArray, NSData, NSDate, NSString;

@interface ASEmailItem : ASChangedCollectionLeaf
{
    _Bool _shouldIncludeExceptionDateInUid;
    _Bool _read;
    _Bool _flagged;
    _Bool _bodyTruncated;
    _Bool _readIsSet;
    _Bool _flaggedIsSet;
    _Bool _verbIsSet;
    _Bool _isDraft;
    _Bool _hasAttachments;
    int _importance;
    int _bodySize;
    int _lastVerb;
    int _bodyType;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_from;
    NSArray *_replyTo;
    NSDate *_date;
    NSString *_subject;
    NSString *_displayTo;
    NSString *_body;
    NSString *_messageClass;
    NSArray *_attachments;
    NSString *_threadTopic;
    NSData *_conversationId;
    NSData *_conversationIndex;
    NSString *_mimeData;
    NSString *_folderId;
    NSString *_longID;
    NSString *_sender;
    NSArray *_bcc;
    NSString *_preview;
    ASMeetingRequest *_meetingRequest;
}

+ (_Bool)supportsSecureCoding;
+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic, setter=_setMeetingRequest:) ASMeetingRequest *meetingRequest; // @synthesize meetingRequest=_meetingRequest;
@property(nonatomic) _Bool hasAttachments; // @synthesize hasAttachments=_hasAttachments;
@property(retain, nonatomic) NSString *preview; // @synthesize preview=_preview;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(copy, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property(nonatomic) int bodyType; // @synthesize bodyType=_bodyType;
@property(nonatomic) _Bool verbIsSet; // @synthesize verbIsSet=_verbIsSet;
@property(nonatomic) _Bool flaggedIsSet; // @synthesize flaggedIsSet=_flaggedIsSet;
@property(nonatomic) _Bool readIsSet; // @synthesize readIsSet=_readIsSet;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) int lastVerb; // @synthesize lastVerb=_lastVerb;
@property(retain, nonatomic) NSString *longID; // @synthesize longID=_longID;
@property(retain, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(retain, nonatomic) NSString *mimeData; // @synthesize mimeData=_mimeData;
@property(retain, nonatomic) NSData *conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(retain, nonatomic) NSData *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSString *threadTopic; // @synthesize threadTopic=_threadTopic;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *messageClass; // @synthesize messageClass=_messageClass;
@property(nonatomic) _Bool bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;
@property(nonatomic) int bodySize; // @synthesize bodySize=_bodySize;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) _Bool flagged; // @synthesize flagged=_flagged;
@property(nonatomic) _Bool read; // @synthesize read=_read;
@property(nonatomic) int importance; // @synthesize importance=_importance;
@property(retain, nonatomic) NSString *displayTo; // @synthesize displayTo=_displayTo;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSArray *replyTo; // @synthesize replyTo=_replyTo;
@property(copy, nonatomic) NSArray *from; // @synthesize from=_from;
@property(copy, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *to; // @synthesize to=_to;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setReplyToString:(id)arg1;
- (void)setFromString:(id)arg1;
- (void)setBCCString:(id)arg1;
- (void)setCCString:(id)arg1;
- (void)setToString:(id)arg1;
@property(readonly, nonatomic) int meetingMessageType;
@property(readonly, nonatomic) NSData *meetingRequestMetaData;
@property(readonly, nonatomic) NSString *meetingRequestUUID;
- (long long)compare:(id)arg1;
- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (_Bool)_isSearchResult;
- (void)postProcessApplicationData;
- (void)processAppDataForStream;
- (void)_processApplicationData:(_Bool)arg1;

@end

