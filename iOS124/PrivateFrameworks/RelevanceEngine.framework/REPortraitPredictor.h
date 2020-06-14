//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

@class NSMutableDictionary, PPNamedEntityStore;

@interface REPortraitPredictor : REPredictor
{
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

+ (double)updateInterval;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (float)userAffinityToContent:(id)arg1;
- (void)update;
- (void)_loadStoreIfNeeded;
- (void)dealloc;
- (id)init;

@end

