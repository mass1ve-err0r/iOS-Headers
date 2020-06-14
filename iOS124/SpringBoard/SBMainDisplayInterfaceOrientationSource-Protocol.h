//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SBMainDisplayInterfaceOrientationSource <NSObject>
@property(readonly, nonatomic) double orientationSourceLevel;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long activeInterfaceOrientation;

@optional
@property(readonly, copy, nonatomic) NSString *orientationSourceDescription;
@end
