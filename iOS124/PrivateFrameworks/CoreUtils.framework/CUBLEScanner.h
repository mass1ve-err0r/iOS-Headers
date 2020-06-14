//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CUSystemMonitor, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUBLEScanner : NSObject <CBCentralManagerDelegate>
{
    _Bool _activateCalled;
    CBCentralManager *_centralManager;
    _Bool _changesPending;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    int _rssiThreshold;
    NSDictionary *_scanParametersCurrent;
    _Bool _scannerStartCalled;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory *_ucat;
    int _bluetoothState;
    unsigned int _changeFlags;
    unsigned int _scanFlags;
    int _scanRate;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property(nonatomic) int scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(nonatomic) int bluetoothState; // @synthesize bluetoothState=_bluetoothState;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_updateScanRules:(id *)arg1 payloadType:(unsigned char)arg2 rssiThreshold:(int)arg3;
- (void)_stopScanIfNeededWithReason:(const char *)arg1;
- (_Bool)_shouldScan;
- (id)_scanParametersSummary:(id)arg1;
- (id)_scanParameters;
- (void)_update;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
@property int rssiThreshold;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

