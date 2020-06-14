//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect
{
    double _maximumHorizontalTiltAngle;
    double _maximumVerticalTiltAngle;
    double _rotatingSphereRadius;
}

@property(nonatomic) double rotatingSphereRadius; // @synthesize rotatingSphereRadius=_rotatingSphereRadius;
@property(nonatomic) double maximumVerticalTiltAngle; // @synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle;
@property(nonatomic) double maximumHorizontalTiltAngle; // @synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;

@end

