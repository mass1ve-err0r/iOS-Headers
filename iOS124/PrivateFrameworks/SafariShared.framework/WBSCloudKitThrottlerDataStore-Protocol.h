//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSData, WBSCloudKitThrottler;

@protocol WBSCloudKitThrottlerDataStore <NSObject>
- (void)setRecordOfPastOperations:(NSData *)arg1 forThrottler:(WBSCloudKitThrottler *)arg2;
- (NSData *)recordOfPastOperationsForThrottler:(WBSCloudKitThrottler *)arg1;
@end

