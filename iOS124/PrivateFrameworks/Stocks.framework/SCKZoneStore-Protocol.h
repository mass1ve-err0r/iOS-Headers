//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKServerChangeToken, NSArray, NSDate, SCKZoneDiff;

@protocol SCKZoneStore
@property(copy, nonatomic) NSArray *pendingCommands;
@property(copy, nonatomic) NSArray *serverRecords;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCKZoneDiff *)arg1;
@end

