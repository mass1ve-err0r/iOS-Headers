//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLUIGestureRecognizerActionTarget : NSObject
{
    NSString *_signalName;
    long long _state;
}

- (void).cxx_destruct;
- (void)handleGesture:(id)arg1;
- (id)initWithSignal:(id)arg1 state:(long long)arg2;

@end

