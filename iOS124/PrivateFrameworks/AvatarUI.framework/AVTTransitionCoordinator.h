//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AVTTransitionScheduler;

@interface AVTTransitionCoordinator : NSObject
{
    double _delay;
    id <AVTTransitionScheduler> _scheduler;
    NSMutableArray *_pendingTransitions;
    NSMutableArray *_runningTransitions;
}

+ (CDUnknownBlockType)eventHandlerForCoordinator:(id)arg1;
+ (id)concurrentTransitionCoordinatorWithDelay:(double)arg1;
+ (id)synchronousTransitionCoordinator;
@property(readonly, nonatomic) NSMutableArray *runningTransitions; // @synthesize runningTransitions=_runningTransitions;
@property(readonly, nonatomic) NSMutableArray *pendingTransitions; // @synthesize pendingTransitions=_pendingTransitions;
@property(retain, nonatomic) id <AVTTransitionScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)cancelAllTransitions;
- (void)cancelTransitionsMatchingModel:(id)arg1;
- (id)allTransitions;
- (id)transitionsMatchingModel:(id)arg1;
- (void)startNextTransition;
- (void)didCompleteRunningTransition:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)dealloc;
- (id)init;

@end

