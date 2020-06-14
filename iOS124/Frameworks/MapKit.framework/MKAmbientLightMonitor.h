//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject
{
    NSHashTable *_observers;
    _Bool _monitoring;
    long long _ambientLightLevel;
    _Bool _debugLogLux;
    struct __IOHIDEventSystemClient *_client;
    struct deque<double, std::__1::allocator<double>> _runningStatBuffer;
    double _runningStatSum;
    double _lightLevelNoneThreshold;
    double _lightLevelLowThreshold;
    double _lightLevelMediumThreshold;
    unsigned int _runningStatSize;
}

+ (id)sharedAmbientLightMonitor;
@property(nonatomic) _Bool debugLogLux; // @synthesize debugLogLux=_debugLogLux;
@property(readonly, nonatomic) long long ambientLightLevel; // @synthesize ambientLightLevel=_ambientLightLevel;
@property(readonly, nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)stopMonitoringWithObserver:(id)arg1;
- (void)startMonitoringWithObserver:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (double)_addSampleAndComputeMean:(const double *)arg1;
- (void)_updateThresholds;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

