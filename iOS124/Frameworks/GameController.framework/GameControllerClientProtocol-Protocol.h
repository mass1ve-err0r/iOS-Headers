//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@class GCController, NSArray, NSData;

@protocol GameControllerClientProtocol <NSObject>
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(NSData *)arg2;
- (void)removeController:(GCController *)arg1;
- (void)addController:(GCController *)arg1;
- (void)replyConnectedHosts:(NSArray *)arg1;
@end

