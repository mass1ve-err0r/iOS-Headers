//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyWebSharingOperation : CKDatabaseOperation
{
    CDUnknownBlockType _recordSharedBlock;
    CDUnknownBlockType _recordUnsharedBlock;
    CDUnknownBlockType _webShareRecordsCompletionBlock;
    NSArray *_recordIDsToShareReadWrite;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSMutableDictionary *_recordErrors;
    NSMutableArray *_sharedRecordIDs;
    NSMutableArray *_unsharedRecordIDs;
}

@property(retain, nonatomic) NSMutableArray *unsharedRecordIDs; // @synthesize unsharedRecordIDs=_unsharedRecordIDs;
@property(retain, nonatomic) NSMutableArray *sharedRecordIDs; // @synthesize sharedRecordIDs=_sharedRecordIDs;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property(retain, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;
@property(retain, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType webShareRecordsCompletionBlock; // @synthesize webShareRecordsCompletionBlock=_webShareRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordUnsharedBlock; // @synthesize recordUnsharedBlock=_recordUnsharedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordSharedBlock; // @synthesize recordSharedBlock=_recordSharedBlock;
- (id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2;

@end

