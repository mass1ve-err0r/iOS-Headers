//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface PSWallClockMinuteTimer : NSObject
{
    id _target;
    SEL _action;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)_fireAction;
- (void)invalidate;
- (void)startTimer;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

