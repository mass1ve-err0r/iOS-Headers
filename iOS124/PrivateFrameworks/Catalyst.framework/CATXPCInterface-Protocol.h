//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATMessage;

@protocol CATXPCInterface <NSObject>
- (void)processMessage:(CATMessage *)arg1 completion:(void (^)(void))arg2;
@end

