//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol TSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end

