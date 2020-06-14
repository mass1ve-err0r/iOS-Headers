//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFObservable.h>

@protocol MFObservable, MFScheduler;

__attribute__((visibility("hidden")))
@interface _MFIdealTimerObservable : MFObservable
{
    id <MFObservable> _input;
    id <MFScheduler> _scheduler;
    double _interval;
}

- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 timeInterval:(double)arg2 scheduler:(id)arg3;

@end

