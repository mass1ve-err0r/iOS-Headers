//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PGGraphMeaningNode;

@interface PGZeroKeywordMapping : NSObject
{
    PGGraphMeaningNode *_displayNode;
    NSArray *_mappedMeaningNodes;
}

@property(readonly, nonatomic) NSArray *mappedMeaningNodes; // @synthesize mappedMeaningNodes=_mappedMeaningNodes;
@property(readonly, nonatomic) PGGraphMeaningNode *displayNode; // @synthesize displayNode=_displayNode;
- (void).cxx_destruct;
- (id)initWithDisplayNode:(id)arg1 mappedMeaningNodes:(id)arg2;

@end

