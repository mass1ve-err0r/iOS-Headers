//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CARDNDWatchSyncManager : NSObject
{
}

+ (id)sharedInstance;
- (void)setAutoReplyAudience:(unsigned long long)arg1;
- (void)setAutomaticDNDStatus:(_Bool)arg1;
- (void)_syncDomain;

@end

