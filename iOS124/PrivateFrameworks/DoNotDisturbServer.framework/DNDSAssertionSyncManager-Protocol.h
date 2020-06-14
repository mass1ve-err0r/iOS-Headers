//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSObservableModeAssertionProvider-Protocol.h>

@class NSDate;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;

@protocol DNDSAssertionSyncManager <DNDSObservableModeAssertionProvider>
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDataSource> dataSource;
- (void)invalidateAllModeAssertionsTakenBeforeDate:(NSDate *)arg1 forReason:(unsigned long long)arg2;
- (void)updateForReason:(unsigned long long)arg1;
- (void)resume;
@end

