//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray, NSXPCListenerEndpoint, PBItemCollection;

@protocol _DUIClientSessionDestination <_DUIClientSessionCommon>
- (oneway void)dragEnded;
- (oneway void)handOffDroppedItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)performDropWithItemCollection:(PBItemCollection *)arg1 dataProviderEndpoint:(NSXPCListenerEndpoint *)arg2 visibleDroppedItems:(NSArray *)arg3 reply:(void (^)(void))arg4;
- (oneway void)addedItemsWithDetails:(NSArray *)arg1 itemCollection:(PBItemCollection *)arg2;
@end

