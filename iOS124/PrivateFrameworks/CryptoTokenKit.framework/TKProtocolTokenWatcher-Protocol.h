//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TKProtocolTokenWatcher
- (void)removedToken:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)insertedToken:(NSString *)arg1 reply:(void (^)(void))arg2;
@end

