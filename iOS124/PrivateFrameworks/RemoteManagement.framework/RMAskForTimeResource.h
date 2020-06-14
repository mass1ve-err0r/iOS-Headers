//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RMAskForTimeClient, RMAskForTimeRequest;

@interface RMAskForTimeResource : NSObject
{
    int _notificationToken;
    RMAskForTimeClient *_askForTimeClient;
    RMAskForTimeRequest *_request;
    CDUnknownBlockType _changeHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, nonatomic) int notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly, nonatomic) RMAskForTimeRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) RMAskForTimeClient *askForTimeClient; // @synthesize askForTimeClient=_askForTimeClient;
- (void).cxx_destruct;
- (void)cancelOutstandingRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkRequestForAdditionalTimeWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)approveAdditionalTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAdditionalTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(CDUnknownBlockType)arg4;

@end

