//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMCoreAutomationNotifications : NSObject
{
    long long _chatsWrittenCount;
    long long _messagesWrittenCount;
    long long _attachmentsWrittenCount;
}

+ (id)sharedInstance;
@property(readonly) long long attachmentsWrittenCount; // @synthesize attachmentsWrittenCount=_attachmentsWrittenCount;
@property(readonly) long long messagesWrittenCount; // @synthesize messagesWrittenCount=_messagesWrittenCount;
@property(readonly) long long chatsWrittenCount; // @synthesize chatsWrittenCount=_chatsWrittenCount;
- (void)addNewMessagesSyncedCount:(long long)arg1;
- (void)addNewAttachmentsSyncedCount:(long long)arg1;
- (void)addNewChatsSyncedCount:(long long)arg1;
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(_Bool)arg2;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(_Bool)arg2;
- (void)postCoreAutomationNotificationWithAction:(id)arg1;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(_Bool)arg2 messagesDidSync:(_Bool)arg3 attachmentsDidSync:(_Bool)arg4;
- (void)clearSyncCounts;
- (id)init;

@end

