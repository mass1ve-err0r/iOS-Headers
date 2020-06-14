//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class CBScalablePipe, CBScalablePipeManager, NSError, NSString;

@protocol CBScalablePipeManagerDelegate <NSObject>
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidDisconnect:(CBScalablePipe *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidConnect:(CBScalablePipe *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didUnregisterEndpoint:(NSString *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didRegisterEndpoint:(NSString *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManagerDidUpdateState:(CBScalablePipeManager *)arg1;
@end

