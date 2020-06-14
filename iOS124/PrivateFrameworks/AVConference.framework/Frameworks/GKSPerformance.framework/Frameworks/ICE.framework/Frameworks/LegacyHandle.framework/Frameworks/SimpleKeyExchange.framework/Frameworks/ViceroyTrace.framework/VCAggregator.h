//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViceroyTrace/VCAdaptiveLearningDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, VCAggregatorDelegate;

__attribute__((visibility("hidden")))
@interface VCAggregator : NSObject <VCAdaptiveLearningDelegate>
{
    int _interval;
    int _frequency;
    _Bool _isDuplicationEnabled;
    NSString *_localInterfaceType;
    NSString *_connectionType;
    unsigned int _switchIntoDupCount;
    NSObject<OS_dispatch_queue> *_stateQueue;
    id <VCAggregatorDelegate> _delegate;
}

- (_Bool)didUpdateStringFrom:(id *)arg1 toString:(id)arg2;
- (_Bool)changeDuplication:(_Bool)arg1;
- (int)previousISBRForSegment:(id)arg1;
- (int)shortTermAverageBWEForSegment:(id)arg1;
- (int)longTermAverageBWEForSegment:(id)arg1;
- (int)shortTermAverageSARBRForSegment:(id)arg1;
- (int)longTermAverageSARBRForSegment:(id)arg1;
- (int)shortTermAverageSATXBRForSegment:(id)arg1;
- (int)longTermAverageSATXBRForSegment:(id)arg1;
- (int)shortTermAverageISBRForSegment:(id)arg1;
- (int)longTermAverageISBRForSegment:(id)arg1;
- (int)initialSettledBitrate;
- (int)shortTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageTBRForSegment:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)adaptiveLearningState;
- (id)aggregatedSessionReport;
- (id)aggregatedCallReports;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)saveCallSegmentHistory;
- (id)aggregatedSegmentQRReport;
- (id)aggregatedSegmentReport:(int)arg1;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (void)flushCurrentSegment;
- (void)throwNotSupportedExceptionForMethod:(id)arg1;
@property(readonly) id <VCAggregatorDelegate> delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

