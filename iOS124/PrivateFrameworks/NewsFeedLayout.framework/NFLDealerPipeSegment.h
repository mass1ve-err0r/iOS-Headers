//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLPipeSegment-Protocol.h>

@class NFLSubBatchLayout;

@interface NFLDealerPipeSegment : NSObject <NFLPipeSegment>
{
    unsigned long long _pipeSegmentType;
    NFLSubBatchLayout *_subBatchLayout;
    CDUnknownBlockType _segmentTypeDescriptionProvider;
}

@property(copy, nonatomic) CDUnknownBlockType segmentTypeDescriptionProvider; // @synthesize segmentTypeDescriptionProvider=_segmentTypeDescriptionProvider;
@property(retain, nonatomic) NFLSubBatchLayout *subBatchLayout; // @synthesize subBatchLayout=_subBatchLayout;
@property(nonatomic) unsigned long long pipeSegmentType; // @synthesize pipeSegmentType=_pipeSegmentType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSegmentType:(unsigned long long)arg1 subBatchLayout:(id)arg2 segmentTypeDescriptionProvider:(CDUnknownBlockType)arg3;
- (id)init;

@end

