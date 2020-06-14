//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSAuthenticationBulletinOperation : VSAsyncOperation
{
    NSURL *_appStoreRoomURL;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy, nonatomic) NSURL *appStoreRoomURL; // @synthesize appStoreRoomURL=_appStoreRoomURL;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithAppStoreRoomURL:(id)arg1;
- (id)init;

@end

