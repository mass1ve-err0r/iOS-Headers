//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadAgentMessage.h"

@interface RefreshRateLimitDownloadAgentMessage : DownloadAgentMessage
{
    long long _rateLimit;
}

+ (id)forPID:(long long)arg1 supervisor:(id)arg2;
+ (id)forAgent:(id)arg1;
@property(readonly, nonatomic) long long rateLimit; // @synthesize rateLimit=_rateLimit;
- (id)__apply__rateLimit:(long long)arg1;

@end

