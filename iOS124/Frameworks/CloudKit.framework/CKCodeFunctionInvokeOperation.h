//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSData, NSError, NSString;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation
{
    _Bool _local;
    _Bool _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _functionInvokeCompletionBlock;
    CDUnknownBlockType _perRecordProgressBlock;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedRequest;
    NSData *_serializedResponse;
    NSError *_responseError;
}

@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool local; // @synthesize local=_local;
@property(copy, nonatomic) NSData *serializedRequest; // @synthesize serializedRequest=_serializedRequest;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType functionInvokeCompletionBlock; // @synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 local:(_Bool)arg4;

@end

