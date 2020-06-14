//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKCacheDeleteManager : NSObject
{
    _Bool _alreadyCapturedErrorWithAutoBugCapture;
    _Bool _allowsWritingToDisk;
    _Bool _deviceLowOnDiskSpace;
    _Bool _isUpdatingAttachmentFileSizes;
}

+ (id)sharedInstance;
@property _Bool isUpdatingAttachmentFileSizes; // @synthesize isUpdatingAttachmentFileSizes=_isUpdatingAttachmentFileSizes;
@property(nonatomic, getter=isDeviceLowOnDiskSpace) _Bool deviceLowOnDiskSpace; // @synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace;
@property(nonatomic) _Bool allowsWritingToDisk; // @synthesize allowsWritingToDisk=_allowsWritingToDisk;
@property(nonatomic) _Bool alreadyCapturedErrorWithAutoBugCapture; // @synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (id)_fileTransfersToValidate:(struct __CFArray *)arg1;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (id)_fileTransfersToDelete:(struct __CFArray *)arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (_Bool)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(_Bool)arg2;
- (_Bool)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(_Bool)arg2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4;
- (void)_cacheDeleteSetUp;
- (void)registerWithCacheDelete;
- (void)updateAttachmentFileSizesWithActivity:(id)arg1;
- (_Bool)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1;
- (id)_ckUtilitiesSharedInstance;
- (id)init;

@end

