//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessage;

@interface MFMessageBody : NSObject
{
    MFMessage *_message;
}

- (void)dealloc;
- (id)textHtmlPart;
- (id)attachmentURLs;
- (id)attachments;
- (unsigned int)numberOfAttachmentsSigned:(_Bool *)arg1 encrypted:(_Bool *)arg2;
- (id)message;
- (void)setMessage:(id)arg1;
- (_Bool)isRich;
- (_Bool)isHTML;
- (id)htmlContent;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3 isComplete:(_Bool *)arg4;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3;
- (id)rawData;

@end

