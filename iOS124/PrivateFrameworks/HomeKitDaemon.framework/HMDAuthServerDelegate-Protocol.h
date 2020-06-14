//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessoryInfo, NSData, NSError;

@protocol HMDAuthServerDelegate <NSObject>
- (void)didFinishActivation:(NSError *)arg1 context:(id)arg2;
- (void)handleActivationResponse:(NSData *)arg1 context:(id)arg2;
- (void)handlePPIDInfoResponse:(HAPAccessoryInfo *)arg1 context:(id)arg2 error:(NSError *)arg3;
@end

