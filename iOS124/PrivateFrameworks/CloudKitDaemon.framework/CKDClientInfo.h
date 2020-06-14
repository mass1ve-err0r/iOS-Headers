//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDClientInfo : NSObject
{
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct MGNotificationTokenStruct *_hostNotificationToken;
}

+ (id)sharedClientInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hostname;
- (void)_refreshHostname;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

