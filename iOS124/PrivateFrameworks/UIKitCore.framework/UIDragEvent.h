//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSHashTable, NSMutableSet, NSSet, UIEventEnvironment, UIView, UIWindow, _UIDragEventSample, _UIDropSessionImpl, _UIInternalDraggingSessionDestination, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface UIDragEvent : UIEvent
{
    _UIDragEventSample *_currentSample;
    UIView *_previousEventView;
    UIView *_eventView;
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
    NSMutableSet *_endingGestureRecognizers;
    NSMutableSet *_ignoredGestureRecognizers;
    NSMutableSet *_dynamicGestureRecognizers;
    NSHashTable *_viewsQueriedForDynamicGestures;
    NSMutableSet *_dynamicInteractions;
    _Bool _ignoreDragEnd;
    _Bool _needsHitTestReset;
    _Bool _dragFailed;
    CDUnknownBlockType _dragFailedCallback;
    unsigned int _dragSessionID;
    _UIInternalDraggingSessionDestination *_sessionDestination;
    _UIInternalDraggingSessionSource *_sessionSource;
    UIEventEnvironment *_eventEnvironment;
}

+ (_Bool)_isSessionIDValid:(unsigned int)arg1;
+ (void)_invalidateSessionID:(unsigned int)arg1;
@property(nonatomic) __weak UIEventEnvironment *eventEnvironment; // @synthesize eventEnvironment=_eventEnvironment;
@property(readonly, nonatomic, getter=_sessionSource) _UIInternalDraggingSessionSource *sessionSource; // @synthesize sessionSource=_sessionSource;
@property(readonly, nonatomic, getter=_sessionDestination) _UIInternalDraggingSessionDestination *sessionDestination; // @synthesize sessionDestination=_sessionDestination;
@property(readonly, nonatomic) unsigned int dragSessionID; // @synthesize dragSessionID=_dragSessionID;
- (void).cxx_destruct;
- (void)_reset;
- (void)dealloc;
- (void)_setNeedsHitTestReset;
@property(readonly, nonatomic, getter=_windowServerHitTestContextID) unsigned int windowServerHitTestContextID;
@property(readonly, nonatomic, getter=_touchRoutingPolicyContextID) unsigned int touchRoutingPolicyContextID;
- (void)_dragFailedWithCallback:(CDUnknownBlockType)arg1;
- (void)_ignoreDragEnd;
- (void)_wasDeliveredToGestureRecognizers;
- (_Bool)_isReadyForReset;
@property(readonly, nonatomic, getter=_dynamicGestureRecognizers) NSSet *dynamicGestureRecognizers;
- (id)_updatingDropGestureRecognizers;
- (void)_updateGesturesFromCurrentSample;
- (void)_sendIfNeeded;
- (void)_updateFromCurrentSample;
@property(readonly, nonatomic, getter=_dropSession) _UIDropSessionImpl *dropSession;
@property(readonly, nonatomic) UIWindow *eventWindow;
@property(readonly, nonatomic, getter=_hitTestedView) UIView *hitTestedView;
- (void)_ignoreGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (_Bool)_shouldSendEvent;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) _Bool isFromAccessibilitySession;
@property(readonly, nonatomic) struct CGPoint locationInSceneReferenceSpace;
- (struct CGPoint)locationInView:(id)arg1;
- (id)_windows;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (long long)type;
- (id)initWithDragSessionID:(unsigned int)arg1;

@end

