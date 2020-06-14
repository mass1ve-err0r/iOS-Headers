//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKHighlightController.h>

@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController
{
    id <TSKPulseAnimationControllerProtocol> _delegate;
    _Bool _pulsating;
    _Bool _autohide;
    double _duration;
    double _pulseOffset;
}

@property(nonatomic) double pulseOffset; // @synthesize pulseOffset=_pulseOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool autohide; // @synthesize autohide=_autohide;
@property(nonatomic) _Bool pulsating; // @synthesize pulsating=_pulsating;
- (void)startAnimating;
- (_Bool)drawRoundedRect;
- (void)stop;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)disconnect;
- (void)reset;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

