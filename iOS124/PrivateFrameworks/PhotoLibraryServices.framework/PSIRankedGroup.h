//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PSIGroup;

@interface PSIRankedGroup : NSObject
{
    PSIGroup *_group;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PSIGroup *group; // @synthesize group=_group;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 score:(double)arg2;

@end

