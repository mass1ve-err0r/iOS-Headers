//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, NSArray, NSMutableArray, UIScreen, _UIDruidSourceWarmUpConnection;

__attribute__((visibility("hidden")))
@interface _UIDragManager : NSObject
{
    _UIDruidSourceWarmUpConnection *_warmUpConnection;
    CAContext *_dragImageContext;
    long long _pendingSessionRequests;
    NSMutableArray *_pendingSessionRequestsCompletionBlocks;
    NSArray *_dragSessionSources;
    NSArray *_dragSessionDestinations;
    UIScreen *_screen;
}

@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
@property(copy, nonatomic) NSArray *dragSessionDestinations; // @synthesize dragSessionDestinations=_dragSessionDestinations;
@property(copy, nonatomic) NSArray *dragSessionSources; // @synthesize dragSessionSources=_dragSessionSources;
- (void).cxx_destruct;
- (void)sessionDestinationDidEnd:(id)arg1;
- (id)dragDestinationWithEvent:(id)arg1;
- (id)sessionSourceWithIdentifier:(unsigned int)arg1;
- (void)sessionSourceDidEnd:(id)arg1;
- (void)performPendingSessionCompletionBlocksIfPossible;
- (void)performAfterCompletingPendingSessionRequests:(CDUnknownBlockType)arg1;
- (_Bool)hasPendingSessionRequests;
- (id)beginDragWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 orInitialCentroid:(struct CGPoint)arg4 requiredContextIds:(id)arg5 shouldPerformHitTesting:(_Bool)arg6 sourceView:(id)arg7 accessibilityEndpoint:(id)arg8;
- (void)warmUpDruid;
- (void)deleteSlots:(id)arg1;
- (unsigned int)uploadImage:(struct CGImage *)arg1;
@property(readonly, nonatomic) CAContext *dragImageContext;
- (void)_willAddDeactivationReason:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end

