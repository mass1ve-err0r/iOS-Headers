//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/_MDExtensionContextProtocol-Protocol.h>

@class CSIndexJob;

@protocol _MDRemoteExtensionContextProtocol <_MDExtensionContextProtocol>
- (void)getLastUpdateTimeWithCompletionHandler:(void (^)(double))arg1;
- (void)performJob:(CSIndexJob *)arg1 acknowledgementHandler:(void (^)(NSData *, NSError *))arg2;
@end

