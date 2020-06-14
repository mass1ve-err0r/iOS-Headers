//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@interface PHAAcknowledgeDeletionsWorkerJob : PHAAssetProcessingJob
{
}

- (void)finish;
- (void)prepare;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (void)_deleteStateRecordsForSuccessfulResults;
- (void)_deleteStateRecordsForLocalUUIDs:(id)arg1;

@end

