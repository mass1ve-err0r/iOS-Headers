//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessage.h>

@interface IMMessage (CKAdditions)
- (_Bool)__ck_isAcknowledgmentMessage;
- (id)__ck_undowngradedMessage;
- (id)__ck_downgradedMessage;
- (id)__ck_mediaObjects;
- (id)__ck_attachmentPreviewTextForAttachmentAtIndex:(long long)arg1;
- (id)__ck_previewTextWithChat:(id)arg1 ignorePluginContent:(_Bool)arg2;
- (id)__ck_previewTextWithChat:(id)arg1;
- (_Bool)__ck_isSMS;
- (_Bool)__ck_isiMessage;
- (id)__ck_service;
- (_Bool)__ck_isEqualToMessageUsingGUID:(id)arg1;
@end

