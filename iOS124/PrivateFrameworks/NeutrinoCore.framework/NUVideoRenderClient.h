//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderClient.h>

@class NSArray;

@interface NUVideoRenderClient : NURenderClient
{
    NSArray *_pipelineFilters;
}

@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
- (void).cxx_destruct;
- (void)submitPropertiesRequestForComposition:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

