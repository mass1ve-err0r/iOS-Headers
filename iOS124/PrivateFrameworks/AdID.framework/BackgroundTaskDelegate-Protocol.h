//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdID/NSObject-Protocol.h>

@class ADBackgroundTaskRequest, NSObject, NSString;
@protocol OS_xpc_object;

@protocol BackgroundTaskDelegate <NSObject>
- (_Bool)runTask:(ADBackgroundTaskRequest *)arg1;

@optional
- (void)checkOnTask:(NSString *)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
@end

