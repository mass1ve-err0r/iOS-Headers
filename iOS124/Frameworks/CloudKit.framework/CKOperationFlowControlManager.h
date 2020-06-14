//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject
{
    NSMutableDictionary *_flowControlledOperationKeys;
}

@property(readonly) NSMutableDictionary *flowControlledOperationKeys; // @synthesize flowControlledOperationKeys=_flowControlledOperationKeys;
- (void).cxx_destruct;
- (void)unlimitAllOperations;
- (void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3;
- (double)secondsUntilUnlimited:(id)arg1;
- (_Bool)isOperationLimited:(id)arg1 outLimitError:(id *)arg2;
- (id)CKStatusReportArray;
- (id)init;

@end

