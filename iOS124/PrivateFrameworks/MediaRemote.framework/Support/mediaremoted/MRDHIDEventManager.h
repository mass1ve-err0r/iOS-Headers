//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRDHIDEventManager : NSObject
{
}

- (void)_dispatchKeypressEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2;
- (void)dispatchUnicodeEventWithText:(id)arg1;
- (void)dispatchKeypressEvent:(unsigned long long)arg1;
- (void)dispatchHomeButton;
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;

@end

