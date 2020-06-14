//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownAudioFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpAudioFeedback;
}

+ (id)latchingOffConfiguration;
+ (id)latchingOnConfiguration;
+ (id)defaultConfiguration;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback; // @synthesize clickDownFeedback=_clickDownFeedback;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback; // @synthesize clickUpAudioFeedback=_clickUpAudioFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback; // @synthesize clickUpFeedback=_clickUpFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback; // @synthesize clickDownAudioFeedback=_clickDownAudioFeedback;
- (void)setclickDownFeedback:(id)arg1;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end

