//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSMessage-Protocol.h>

@class MSOID, NSData, NSString;
@protocol MSCMSMessage;

@interface MSCMSContentInfo : NSObject <MSMessage>
{
    NSData *_content;
    id <MSCMSMessage> _embeddedContent;
    MSOID *_contentType;
}

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id *)arg3;
@property(retain) MSOID *contentType; // @synthesize contentType=_contentType;
@property(retain) id <MSCMSMessage> embeddedContent; // @synthesize embeddedContent=_embeddedContent;
@property(retain) NSData *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithDataContent:(id)arg1;
- (id)initWithEmbeddedContent:(id)arg1;
- (id)encodeMessageSecurityObject:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

