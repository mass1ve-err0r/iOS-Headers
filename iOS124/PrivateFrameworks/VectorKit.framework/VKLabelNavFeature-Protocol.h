//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol VKLabelNavFeature
@property(nonatomic) _Bool isPicked;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) long long intraRoadPriority;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isOnRoute;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
@end

