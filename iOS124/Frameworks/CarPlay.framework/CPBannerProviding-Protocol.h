//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPManeuver, CPNavigationAlert, CPTravelEstimates;

@protocol CPBannerProviding <NSObject>
- (void)postBannerForNavigationAlert:(CPNavigationAlert *)arg1;
- (void)postBannerForManeuver:(CPManeuver *)arg1 travelEstimates:(CPTravelEstimates *)arg2;
@end

