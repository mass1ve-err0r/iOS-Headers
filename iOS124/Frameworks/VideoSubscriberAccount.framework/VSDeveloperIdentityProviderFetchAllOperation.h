//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation
{
    VSOptional *_result;
    VSDeveloperServiceConnection *_connection;
}

@property(retain, nonatomic) VSDeveloperServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end

