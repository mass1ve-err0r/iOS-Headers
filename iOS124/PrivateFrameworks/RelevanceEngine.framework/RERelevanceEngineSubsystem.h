//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RERelevanceEngine;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineSubsystem : NSObject
{
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    _Bool _running;
    RERelevanceEngine *_relevanceEngine;
}

@property(readonly, nonatomic) __weak RERelevanceEngine *relevanceEngine; // @synthesize relevanceEngine=_relevanceEngine;
- (void).cxx_destruct;
- (void)setRunning:(_Bool)arg1;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;

@end
