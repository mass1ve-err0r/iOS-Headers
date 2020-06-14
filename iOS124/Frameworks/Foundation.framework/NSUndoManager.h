//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSUndoManager : NSObject
{
    id _undoStack;
    id _redoStack;
    NSArray *_runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    void *_NSUndoManagerPrivate2;
    void *_NSUndoManagerPrivate3;
}

+ (void)_endTopLevelGroupings;
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(_Bool)arg1;
- (id)redoMenuTitleForUndoActionName:(id)arg1;
- (id)undoMenuTitleForUndoActionName:(id)arg1;
@property(readonly, copy) NSString *redoMenuItemTitle;
@property(readonly, copy) NSString *undoMenuItemTitle;
@property(readonly) _Bool redoActionIsDiscardable;
@property(readonly) _Bool undoActionIsDiscardable;
- (void)setActionIsDiscardable:(_Bool)arg1;
- (void)setActionName:(id)arg1;
- (void)_setGroupIdentifier:(id)arg1;
@property(readonly, copy) NSString *redoActionName;
@property(readonly, copy) NSString *undoActionName;
- (void)registerUndoWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)_forwardTargetInvocation:(id)arg1;
- (void)_registerUndoObject:(id)arg1;
- (id)_methodSignatureForTargetSelector:(SEL)arg1;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)removeAllActionsWithTarget:(id)arg1;
- (void)removeAllActions;
@property(readonly, getter=isRedoing) _Bool redoing;
@property(readonly, getter=isUndoing) _Bool undoing;
@property(readonly) _Bool canRedo;
@property(readonly) _Bool canUndo;
- (void)redo;
- (void)undoNestedGroup;
- (void)undo;
@property(copy) NSArray *runLoopModes;
@property unsigned long long levelsOfUndo;
@property _Bool groupsByEvent;
@property(readonly, getter=isUndoRegistrationEnabled) _Bool undoRegistrationEnabled;
- (void)enableUndoRegistration;
- (void)disableUndoRegistration;
- (void)endUndoGrouping;
- (_Bool)_endUndoGroupRemovingIfEmpty:(_Bool)arg1;
@property(readonly) long long groupingLevel;
- (void)beginUndoGrouping;
- (void)_postCheckpointNotification;
- (void)_prepareEventGrouping;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)_delayAutomaticTermination:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)_rollbackUndoGrouping;
- (void)_commitUndoGrouping;
- (void)_processEndOfEventNotification:(id)arg1;
- (_Bool)_shouldCoalesceTypingForText:(id)arg1:(id)arg2;
- (id)_undoStack;

@end

