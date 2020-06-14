//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSUUID;
@protocol HDSampleSaving, HDTaskServer, HDTaskServerObserver;

@protocol HDTaskServerDelegate <NSObject>
- (void)removeTaskServerObserver:(id <HDTaskServerObserver>)arg1;
- (void)removeObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (void)addObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (id <HDTaskServer>)taskServerWithUUID:(NSUUID *)arg1;
- (void)taskServerDidInvalidate:(id <HDTaskServer>)arg1;
- (void)taskServerDidFailToInitializeForUUID:(NSUUID *)arg1;
- (void)taskServerDidFinishInitialization:(id <HDTaskServer>)arg1;

@optional
- (id <HDSampleSaving>)sampleSavingDelegate;
@end

