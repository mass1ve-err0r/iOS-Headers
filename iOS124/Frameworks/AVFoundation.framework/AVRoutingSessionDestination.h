//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject
{
    AVRoutingSessionDestinationInternal *_ivars;
}

@property(readonly, nonatomic) _Bool providesExternalVideoPlayback;
@property(readonly, nonatomic) float probability;
@property(readonly, nonatomic) NSArray *outputDeviceDescriptions;
- (void)dealloc;

@end

