//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDLogEvent, HMDLogEventDispatcher;

@protocol HMDLogEventObserver <NSObject>
- (void)dispatcher:(HMDLogEventDispatcher *)arg1 didReceiveEvent:(HMDLogEvent *)arg2;
@end

