//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDRemoteActionViewControllerProvider.h>

#import <DataDetectorsUI/EKDayViewControllerDataSource-Protocol.h>
#import <DataDetectorsUI/EKDayViewControllerDelegate-Protocol.h>

@class EKEvent, EKEventStore, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider <EKDayViewControllerDataSource, EKDayViewControllerDelegate>
{
    NSArray *_events;
    EKEvent *_event;
    EKEventStore *_store;
}

@property(retain) EKEventStore *store; // @synthesize store=_store;
@property(retain) EKEvent *event; // @synthesize event=_event;
@property(retain) NSArray *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
- (void)updateSelectedOccurrenceView;
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;
- (void)dayViewControllerIsPinchingDayView:(id)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
- (_Bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
- (void)dayViewControllerDidReloadData:(id)arg1;
- (void)dayViewControllerDidTapEmptySpace:(id)arg1;
- (_Bool)dayViewControllerShouldAllowLongPress:(id)arg1;
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(_Bool)arg3;
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3;
- (_Bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)createViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

