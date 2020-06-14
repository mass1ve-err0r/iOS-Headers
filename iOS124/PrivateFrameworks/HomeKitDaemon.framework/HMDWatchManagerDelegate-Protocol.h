//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDWatchManager;

@protocol HMDWatchManagerDelegate <NSObject>

@optional
- (void)watchManager:(HMDWatchManager *)arg1 didRemoveConnectedWatch:(HMDDevice *)arg2;
- (void)watchManager:(HMDWatchManager *)arg1 didAddConnectedWatch:(HMDDevice *)arg2;
@end

