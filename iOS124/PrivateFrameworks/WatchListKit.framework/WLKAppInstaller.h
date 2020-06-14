//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface WLKAppInstaller : NSObject
{
    NSObject<OS_dispatch_queue> *_installQueue;
    NSMutableSet *_installSessions;
}

+ (id)defaultAppInstaller;
- (void).cxx_destruct;
- (void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installAppForInstallable:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

