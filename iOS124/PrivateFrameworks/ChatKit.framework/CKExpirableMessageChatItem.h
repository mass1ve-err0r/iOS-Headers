//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAttachmentMessagePartChatItem.h>

@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem
{
}

@property(readonly, nonatomic) _Bool isSaved;
@property(readonly, nonatomic) _Bool isPlayed;
- (_Bool)canSendAsTextMessage;
- (_Bool)canExport;
- (_Bool)canForward;
- (_Bool)canCopy;

@end

