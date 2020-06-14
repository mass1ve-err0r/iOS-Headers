//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@interface SXArticleScrollEvent : SXAnalyticsEvent
{
    double _startPosition;
    double _endPosition;
    double _targetPosition;
    double _velocity;
}

@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double targetPosition; // @synthesize targetPosition=_targetPosition;
@property(nonatomic) double endPosition; // @synthesize endPosition=_endPosition;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;

@end

