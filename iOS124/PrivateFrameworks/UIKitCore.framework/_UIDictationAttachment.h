//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIDictationAttachment : NSTextAttachment
{
    NSDictionary *_typingAttributesBeforeInsertion;
    struct _NSRange _attachmentRange;
}

@property(copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion; // @synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion;
@property(nonatomic) struct _NSRange attachmentRange; // @synthesize attachmentRange=_attachmentRange;
- (void).cxx_destruct;

@end

