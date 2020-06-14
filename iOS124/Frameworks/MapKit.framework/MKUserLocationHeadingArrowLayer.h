//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

#import <MapKit/MKUserLocationHeadingAnimatableIndicator-Protocol.h>
#import <MapKit/MKUserLocationHeadingIndicator-Protocol.h>

@class MKUserLocationView, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator>
{
    double _maxUncertaintyAngleToShowArrow;
    MKUserLocationView *_userLocationView;
    double _headingRadians;
}

@property(nonatomic) double headingRadians; // @synthesize headingRadians=_headingRadians;
@property(readonly, nonatomic) __weak MKUserLocationView *userLocationView; // @synthesize userLocationView=_userLocationView;
- (void).cxx_destruct;
- (double)_tipRadiusWhenVisible:(_Bool)arg1;
- (double)_baseRadiusWhenVisible:(_Bool)arg1;
- (struct CGPoint)_positionWhenVisible:(_Bool)arg1;
- (id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3;
- (struct CGPath *)_pathWhenVisible:(_Bool)arg1;
- (id)_animationToSetVisible:(_Bool)arg1;
- (void)animateToSetVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTintColor:(id)arg1;
- (_Bool)_shouldBeVisibleForAccuracy:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateHeading:(double)arg1;
- (id)initWithUserLocationView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

