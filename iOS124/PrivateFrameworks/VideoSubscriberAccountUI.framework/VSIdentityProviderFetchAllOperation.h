//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSAuditToken, VSDevice, VSOptional;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation
{
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_subqueue;
    VSDevice *_currentDevice;
}

@property(retain, nonatomic) VSDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) NSOperationQueue *subqueue; // @synthesize subqueue=_subqueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end

