//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError;

__attribute__((visibility("hidden")))
@interface CKOperationFlowControlInfo : NSObject
{
    NSError *_lastError;
    NSDate *_flowControlEndDate;
}

+ (id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) NSDate *flowControlEndDate; // @synthesize flowControlEndDate=_flowControlEndDate;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (void).cxx_destruct;

@end

