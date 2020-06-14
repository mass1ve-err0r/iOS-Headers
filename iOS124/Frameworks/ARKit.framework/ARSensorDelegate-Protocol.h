//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/NSObject-Protocol.h>

@class NSError;
@protocol ARSensor, ARSensorData;

@protocol ARSensorDelegate <NSObject>
- (void)sensor:(id <ARSensor>)arg1 didFailWithError:(NSError *)arg2;
- (void)sensor:(id <ARSensor>)arg1 didOutputSensorData:(id <ARSensorData>)arg2;

@optional
- (void)sensorDidRestart:(id <ARSensor>)arg1;
- (void)sensorDidPause:(id <ARSensor>)arg1;
- (void)sensorDidStart:(id <ARSensor>)arg1;
@end

