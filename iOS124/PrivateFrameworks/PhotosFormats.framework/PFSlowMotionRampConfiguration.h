//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFSlowMotionRampConfiguration : NSObject
{
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
    unsigned long long _playbackNumIntermediateSteps;
    unsigned long long _exportNumIntermediateSteps;
}

@property(readonly, nonatomic) float exportRampCurveExponent; // @synthesize exportRampCurveExponent=_exportRampCurveExponent;
@property(readonly, nonatomic) float playbackRampCurveExponent; // @synthesize playbackRampCurveExponent=_playbackRampCurveExponent;
@property(readonly, nonatomic) unsigned long long exportNumIntermediateSteps; // @synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps;
@property(readonly, nonatomic) unsigned long long playbackNumIntermediateSteps; // @synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps;
@property(readonly, nonatomic) double volumeSuppressionOutroTime; // @synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime;
@property(readonly, nonatomic) double volumeSuppressionIntroTime; // @synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime;
@property(readonly, nonatomic) double outroTime; // @synthesize outroTime=_outroTime;
@property(readonly, nonatomic) double introTime; // @synthesize introTime=_introTime;
@property(readonly, nonatomic) double rampTime; // @synthesize rampTime=_rampTime;
- (void)computeRampToTargetRate:(float)arg1 forExport:(_Bool)arg2 outTimeSteps:(id *)arg3 outIntermediateRates:(id *)arg4;
- (id)init;
- (id)initForRampDown:(_Bool)arg1;

@end

