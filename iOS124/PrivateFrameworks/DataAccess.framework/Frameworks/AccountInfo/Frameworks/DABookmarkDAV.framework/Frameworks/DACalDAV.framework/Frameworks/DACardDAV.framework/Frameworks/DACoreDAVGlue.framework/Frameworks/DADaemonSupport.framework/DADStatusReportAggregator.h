//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DADStatusReportAggregator : NSObject
{
    int _numOutstandingReports;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_persistentUUIDToStatusReport;
    _Bool _finished;
}

- (void).cxx_destruct;
- (void)noteAdditionalReportDicts:(id)arg1;
- (void)_coalesceAndReport;
- (id)initWithStatusReports:(id)arg1 numOutstandingReports:(int)arg2 timeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

