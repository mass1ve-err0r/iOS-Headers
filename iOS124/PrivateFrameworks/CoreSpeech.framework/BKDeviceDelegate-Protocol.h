//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class BKDevice, BKMatchEvent;

@protocol BKDeviceDelegate <NSObject>

@optional
- (void)device:(BKDevice *)arg1 matchEventOccurred:(BKMatchEvent *)arg2;
@end

