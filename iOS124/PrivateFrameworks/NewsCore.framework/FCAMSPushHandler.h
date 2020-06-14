//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPushHandler;
@protocol AMSPushHandlerContract;

@interface FCAMSPushHandler : NSObject
{
    id <AMSPushHandlerContract> _contract;
    AMSPushHandler *_handler;
}

@property(retain, nonatomic) AMSPushHandler *handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) id <AMSPushHandlerContract> contract; // @synthesize contract=_contract;
- (void).cxx_destruct;
- (void)handleNotificationResponse:(id)arg1;
- (_Bool)shouldHandleNotificationResponse:(id)arg1;
- (void)handleNotification:(id)arg1;
- (_Bool)shouldHandleNotification:(id)arg1;
- (id)init;

@end

