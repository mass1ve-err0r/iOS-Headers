//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITimingCurveProvider-Protocol.h>

@class UISpringTimingParameters, _UIViewCubicTimingFunction;

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider>
{
    long long _timingCurveType;
    _UIViewCubicTimingFunction *_timingFunction;
    long long _animationCurve;
    UISpringTimingParameters *_springTimingParameters;
}

@property(retain, nonatomic) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters=_springTimingParameters;
@property(readonly, nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(readonly, nonatomic) _UIViewCubicTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectiveTimingFunction;
- (id)_mediaTimingFunction;
- (void)_setAnimationCurve:(long long)arg1;
@property(readonly, nonatomic) struct CGPoint controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1;
@property(readonly, nonatomic) long long timingCurveType; // @synthesize timingCurveType=_timingCurveType;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
- (id)initWithCustomCurve:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)initWithAnimationCurve:(long long)arg1;
- (id)init;

@end

