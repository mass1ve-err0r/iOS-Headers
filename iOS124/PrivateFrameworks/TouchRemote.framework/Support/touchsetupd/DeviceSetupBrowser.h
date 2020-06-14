//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TRDeviceSetupBrowserDelegate-Protocol.h"
#import "TRDeviceSetupPeripheralDelegate-Protocol.h"

@class NSMutableSet, NSString, TRDeviceSetupBrowser;
@protocol OS_dispatch_source;

@interface DeviceSetupBrowser : NSObject <TRDeviceSetupBrowserDelegate, TRDeviceSetupPeripheralDelegate>
{
    _Bool _buddySetupDone;
    int _buddySetupDoneToken;
    _Bool _buddySetupDoneTokenIsValid;
    NSMutableSet *_discoveredPeripherals;
    double _lastTapTimeInterval;
    _Bool _scanning;
    NSObject<OS_dispatch_source> *_scanningDurationTimer;
    TRDeviceSetupBrowser *_setupBrowser;
    NSObject<OS_dispatch_source> *_setupTimeoutTimer;
    _Bool _setupInProgress;
    double _scanningStartTimeInterval;
}

+ (id)sharedSetupBrowser;
- (void).cxx_destruct;
- (void)_startSetupTimeoutTimer;
- (void)_endScanIfNecessary;
- (void)_endActualScan;
- (void)_cancelScanningDurationTimer;
- (void)_beginActualScan;
- (void)endScan;
- (void)beginScan;
- (void)deviceSetupPeripheralSetupDidFail:(id)arg1 withError:(id)arg2;
- (void)deviceSetupPeripheralSetupDidComplete:(id)arg1;
- (void)deviceSetupPeripheralDidTap:(id)arg1;
- (void)deviceSetupBrowser:(id)arg1 didRemovePeripheral:(id)arg2;
- (void)deviceSetupBrowser:(id)arg1 didFindPeripheral:(id)arg2;
- (void)deviceSetupBrowserDidChangeState:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

