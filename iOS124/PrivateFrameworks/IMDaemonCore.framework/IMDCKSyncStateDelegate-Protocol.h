//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDCKSyncState;

@protocol IMDCKSyncStateDelegate <NSObject>

@optional
- (void)syncStateDidUpdate:(IMDCKSyncState *)arg1;
- (void)syncStateWillUpdate:(IMDCKSyncState *)arg1;
@end

