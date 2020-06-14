//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface CKDPackageDirectoryPurger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_rootDirectories;
}

+ (void)schedulePeriodicPurgesInDirectory:(id)arg1;
+ (id)sharedPurger;
@property(readonly, nonatomic) NSMutableArray *rootDirectories; // @synthesize rootDirectories=_rootDirectories;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)addRootDirectory:(id)arg1;
- (void)purgeRootDirectory:(id)arg1;
- (void)purgeDirectory:(id)arg1;
- (void)purgeAll;
- (void)registerXPCActivity;
- (id)init;

@end

