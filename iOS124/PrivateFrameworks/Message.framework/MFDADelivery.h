//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailDelivery.h>

@class DAMailAccount, NSString;

@interface MFDADelivery : MFMailDelivery
{
    DAMailAccount *_DAMailAccount;
    NSString *_folderId;
    NSString *_accountId;
    NSString *_repliedMessageId;
    NSString *_forwardedMessageId;
    NSString *_repliedLongId;
    NSString *_forwardedLongId;
}

- (id)deliverSynchronously;
- (id)newMessageWriter;
- (void)setDAMailAccount:(id)arg1;
- (void)dealloc;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;

@end

