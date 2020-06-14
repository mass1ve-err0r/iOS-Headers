//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PSDScheduler, PSYSyncSession, PSYSyncSessionUpdate;

@protocol PSDSchedulerObserver <NSObject>

@optional
- (void)scheduler:(PSDScheduler *)arg1 didClearSyncSession:(PSYSyncSession *)arg2 withBlock:(void (^)(void))arg3;
- (void)scheduler:(PSDScheduler *)arg1 didUpdateSyncSessionWithUpdate:(PSYSyncSessionUpdate *)arg2;
- (void)scheduler:(PSDScheduler *)arg1 willStartSyncSession:(PSYSyncSession *)arg2;
@end

