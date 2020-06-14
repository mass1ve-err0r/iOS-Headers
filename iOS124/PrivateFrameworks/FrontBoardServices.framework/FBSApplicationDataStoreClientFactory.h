//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FBSApplicationDataStoreRepositoryClient, OS_dispatch_queue;

@interface FBSApplicationDataStoreClientFactory : NSObject
{
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBSApplicationDataStoreRepositoryClient> _sharedClient;
    Class _dataStoreClientClass;
    NSArray *_prefetchedKeys;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *prefetchedKeys; // @synthesize prefetchedKeys=_prefetchedKeys;
- (void).cxx_destruct;
- (void)registerClientClass:(Class)arg1;
- (void)checkin;
- (id)checkout;
- (id)init;

@end

