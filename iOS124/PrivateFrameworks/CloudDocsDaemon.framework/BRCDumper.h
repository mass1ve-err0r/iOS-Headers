//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BRCDumper : NSObject
{
}

- (void)changeAttributes:(int)arg1;
- (void)changeBgColor:(int)arg1;
- (void)changeFgColor:(int)arg1;
- (void)startAttributes:(int)arg1;
- (void)startBgColor:(int)arg1;
- (void)startFgColor:(int)arg1;
- (void)startBgColor:(int)arg1 attr:(int)arg2;
- (void)startFgColor:(int)arg1 attr:(int)arg2;
- (id)stringForReset;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)reset;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)write:(const char *)arg1;

@end

