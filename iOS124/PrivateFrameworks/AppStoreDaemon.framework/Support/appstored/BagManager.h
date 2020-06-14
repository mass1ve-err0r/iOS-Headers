//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSVFairPlaySAPSession;
@protocol OS_dispatch_queue;

@interface BagManager : NSObject
{
    _Bool _loaded;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    SSVFairPlaySAPSession *_sapSession;
    _Bool _usingNewBagForMescal;
}

+ (id)networkConstraintsForDownloadPolicy:(id)arg1 forceReload:(_Bool)arg2;
+ (id)platformContext;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setup;
- (void)_handleBagLoadNotification:(id)arg1;
- (_Bool)useNewBagForMescal;
- (id)sharedSAPSession;
- (void)refreshSAPSession;
- (id)init;

@end

