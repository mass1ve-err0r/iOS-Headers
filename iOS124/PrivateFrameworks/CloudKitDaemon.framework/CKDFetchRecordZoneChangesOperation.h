//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>

@class CKDFetchZoneChangesRequestOperationResult;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation
{
    _Bool _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    long long _changeTypes;
    CKDFetchZoneChangesRequestOperationResult *_savedResult;
}

@property(nonatomic) _Bool clientIsUsingLegacyCKFetchRecordChangesOperationAPI; // @synthesize clientIsUsingLegacyCKFetchRecordChangesOperationAPI=_clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property(retain, nonatomic) CKDFetchZoneChangesRequestOperationResult *savedResult; // @synthesize savedResult=_savedResult;
@property(nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
- (void).cxx_destruct;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteOperationEnding;
- (void)_noteOperationBeginning;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (id)activityCreate;
- (id)pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

