//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSDictionary, NSError, PHAdjustmentDataRequest;

@protocol PHAdjustmentDataRequestDelegate <NSObject>
- (void)adjustmentDataRequest:(PHAdjustmentDataRequest *)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(NSError *)arg4;
- (void)adjustmentDataRequest:(PHAdjustmentDataRequest *)arg1 didFinishWithResultInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

