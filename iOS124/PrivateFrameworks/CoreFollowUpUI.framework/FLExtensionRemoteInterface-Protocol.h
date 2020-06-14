//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUpUI/NSObject-Protocol.h>

@class FLFollowUpAction, FLFollowUpItem;

@protocol FLExtensionRemoteInterface <NSObject>
- (void)processFollowUpItem:(FLFollowUpItem *)arg1 selectedAction:(FLFollowUpAction *)arg2 completion:(void (^)(_Bool))arg3;

@optional
- (void)followUpPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
@end

