//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVRoute, MPAVRoutingController, NSArray, NSError, NSString;

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;
- (void)routingController:(MPAVRoutingController *)arg1 volumeControlAvailabilityDidChange:(_Bool)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 shouldHijackRoute:(MPAVRoute *)arg2 alertStyle:(long long)arg3 busyRouteName:(NSString *)arg4 presentingAppName:(NSString *)arg5 completion:(void (^)(_Bool))arg6;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRouteDidChange:(MPAVRoute *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRoutesDidChange:(NSArray *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
@end

