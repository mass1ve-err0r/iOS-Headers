//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphIngestProcessor.h>

@interface PGGraphIngestPrefetchEventProcessor : PGGraphIngestProcessor
{
}

- (void)prefetchEventsWithSortedMomentNodes:(id)arg1 locationsToPrefetch:(id *)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

@end

