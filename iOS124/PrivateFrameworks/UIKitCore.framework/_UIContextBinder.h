//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIAnimationFenceCoordinating-Protocol.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSPointerArray, NSString;
@protocol _UICanvasLifecycleStateMonitoring, _UIContextBinderDelegate, _UIContextBinding;

__attribute__((visibility("hidden")))
@interface _UIContextBinder : NSObject <_UIAnimationFenceCoordinating>
{
    id <_UIContextBinderDelegate> _delegate;
    NSPointerArray *_enrolledBindables;
    NSPointerArray *_attachedBindables;
    NSMutableOrderedSet *_contexts;
    id <_UICanvasLifecycleStateMonitoring> _lifecycleMonitor;
    _Bool __registeredPreCommitHandler;
    NSMutableArray *__preCommitHandlers;
    CDUnknownBlockType __realPreCommitHandler;
    CDUnknownBlockType __realPostCommitHandler;
    id <_UIContextBinding> _substrate;
    long long _contextManagementPolicy;
}

+ (id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2;
@property(nonatomic) long long contextManagementPolicy; // @synthesize contextManagementPolicy=_contextManagementPolicy;
@property(readonly, nonatomic) __weak id <_UICanvasLifecycleStateMonitoring> lifecycleMonitor; // @synthesize lifecycleMonitor=_lifecycleMonitor;
@property(readonly, nonatomic) id <_UIContextBinding> substrate; // @synthesize substrate=_substrate;
@property(nonatomic) __weak id <_UIContextBinderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
- (unsigned int)_synchronizeDrawingAcrossProcesses;
- (void)_synchronizeDrawingWithPreCommitHandler:(CDUnknownBlockType)arg1;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (id)_synchronizedDrawingFence;
- (void)_synchronizeDrawing;
- (id)_contextForBindable:(id)arg1;
- (_Bool)permitContextCreationForBindable:(id)arg1;
- (void)recreateContextForBindable:(id)arg1;
- (void)updateBindableOrderWithTest:(CDUnknownBlockType)arg1 force:(_Bool)arg2;
- (void)updateBindableOrderWithTest:(CDUnknownBlockType)arg1;
- (void)createContextsWithTest:(CDUnknownBlockType)arg1 creationAction:(CDUnknownBlockType)arg2;
- (void)purgeContextsWithPurgeAction:(CDUnknownBlockType)arg1;
- (_Bool)bindableIsTopmostAttached:(id)arg1;
- (_Bool)bindableEnrolled:(id)arg1;
- (id)_enrolledBindablePointersAsCopy:(_Bool)arg1;
- (id)_attachedBindablePointersAsCopy:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *attachedBindables;
@property(readonly, nonatomic) NSArray *enrolledBindables;
- (void)updateBindable:(id)arg1;
- (void)detachBindable:(id)arg1;
- (void)attachBindable:(id)arg1;
- (void)expellBindable:(id)arg1;
- (void)enrollBindable:(id)arg1;
- (id)initWithSubstrate:(id)arg1 stateMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

