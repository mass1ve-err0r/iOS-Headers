//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMItem_CKRecord)
+ (void)resetSyncStateForMessage:(id)arg1 toState:(long long)arg2;
+ (id)createItemWithCKRecord:(id)arg1;
+ (id)populateIMMessageActionItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)messageActionChangeProtobufForCompressedData:(id)arg1;
+ (id)populateIMGroupActionItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)groupActionProtobufForCompressedData:(id)arg1;
+ (id)populateIMLocationShareStatusChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)arg1;
+ (id)populateIMParticipantChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)participantChangeProtobufForCompressedData:(id)arg1;
+ (id)populateIMGroupTitleChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)groupTitleChangeProtobufForCompressedData:(id)arg1;
+ (id)populateIMMessageItemWithProtoBufFields:(id)arg1 withProtbufData:(id)arg2;
+ (id)protobufForCompressedData:(id)arg1;
- (_Bool)shouldStoreMessage;
- (_Bool)_shouldDownloadIfPhoneNumberAndNoSIM:(id)arg1;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;
- (_Bool)_usingStingRay;
- (id)_recordFromServerChangeToken;
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)arg1;
- (id)compressedProtobufDataForMessageActionItem;
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)arg1;
- (id)compressedProtobufDataForGroupActionItem;
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)arg1;
- (id)compressedProtobufDataForLocationShareStatusChangeItem;
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)arg1;
- (id)compressedProtobufDataForParticipantChangeItem;
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)arg1;
- (id)compressedProtobufDataForGroupTitleChangeItem;
- (void)_populateCKRecordWithIMMessageItemFields:(id)arg1;
- (void)_populateCKRecordWithIMItemFields:(id)arg1;
- (id)compressedProtobufDataForMessage;
- (id)compressedProtobufDataWithPadding:(id)arg1;
- (id)_accountControllerSharedInstance;
- (id)_recordType;
@end

