//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class NSError;

@interface MPSubscriptionLeaseExternalErrorUpdateOperation : MPAsyncOperation
{
    NSError *_externalError;
}

@property(copy, nonatomic) NSError *externalError; // @synthesize externalError=_externalError;
- (void).cxx_destruct;
- (void)execute;

@end

