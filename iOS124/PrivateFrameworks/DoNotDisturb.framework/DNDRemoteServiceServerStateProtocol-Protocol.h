//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteServiceServerStateProtocol <NSObject>
- (void)registerForStateUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)queryStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDState *, NSError *))arg2;
@end

