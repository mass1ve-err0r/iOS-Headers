//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@protocol IMDMessageHistorySyncTask <NSObject>
- (unsigned long long)syncTaskType;
- (void)startSyncTask:(void (^)(unsigned long long))arg1;
@end

