//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSOperation, NSOperationQueue, _MSPCloudAttemptTaskOperation;
@protocol MSPCloudRequest;

@interface MSPCloudRepeatableTask : NSObject
{
    CDUnknownBlockType _failureHandler;
    CDUnknownBlockType _successHandler;
    NSDate *_started;
    NSDate *_finished;
    _Bool _success;
    _Bool _canRetry;
    NSOperationQueue *_cloudKitOperationsQueue;
    _MSPCloudAttemptTaskOperation *_owningOperation;
    CDUnknownBlockType _attemptHandler;
    CDUnknownBlockType _cancelHandler;
    NSOperation<MSPCloudRequest> *_operation;
    MSPCloudRepeatableTask *_originalErrorTriggeringTask;
    MSPCloudRepeatableTask *_errorResolvingTask;
    MSPCloudRepeatableTask *_parentTask;
}

@property(nonatomic) __weak MSPCloudRepeatableTask *parentTask; // @synthesize parentTask=_parentTask;
@property(retain, nonatomic) MSPCloudRepeatableTask *errorResolvingTask; // @synthesize errorResolvingTask=_errorResolvingTask;
@property(retain, nonatomic) MSPCloudRepeatableTask *originalErrorTriggeringTask; // @synthesize originalErrorTriggeringTask=_originalErrorTriggeringTask;
@property(nonatomic) __weak NSOperation<MSPCloudRequest> *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType attemptHandler; // @synthesize attemptHandler=_attemptHandler;
@property(nonatomic) __weak _MSPCloudAttemptTaskOperation *owningOperation; // @synthesize owningOperation=_owningOperation;
- (void).cxx_destruct;
- (void)succeed;
- (void)setSuccessHandler:(CDUnknownBlockType)arg1;
- (void)failWithError:(id)arg1 canReattempt:(_Bool)arg2 maxAttempts:(unsigned long long)arg3 minimumReattemptDate:(id)arg4;
- (void)setFailureHandler:(CDUnknownBlockType)arg1;
- (void)performRequest:(id)arg1 continuation:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=_desiredQualityOfService) long long desiredQualityOfService;
- (void)performCancel;
- (void)attemptWithAccess:(id)arg1;
- (id)description;
- (id)initWithAttemptHandler:(CDUnknownBlockType)arg1 performCancelHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

