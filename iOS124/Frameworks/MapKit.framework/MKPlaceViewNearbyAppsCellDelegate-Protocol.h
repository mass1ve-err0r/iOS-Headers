//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceViewNearbyAppsCell, NSNumber, NSString;

@protocol MKPlaceViewNearbyAppsCellDelegate <NSObject>
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg1 showStorePageWithURL:(NSString *)arg2 storeID:(NSNumber *)arg3;
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg1 openAppWithBundleID:(NSString *)arg2 storeID:(NSNumber *)arg3;
@end

