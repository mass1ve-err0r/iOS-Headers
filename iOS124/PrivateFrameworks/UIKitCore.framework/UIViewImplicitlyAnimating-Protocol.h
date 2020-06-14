//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewAnimating-Protocol.h>

@protocol UITimingCurveProvider;

@protocol UIViewImplicitlyAnimating <UIViewAnimating>

@optional
- (void)continueAnimationWithTimingParameters:(id <UITimingCurveProvider>)arg1 durationFactor:(double)arg2;
- (void)addCompletion:(void (^)(long long))arg1;
- (void)addAnimations:(void (^)(void))arg1;
- (void)addAnimations:(void (^)(void))arg1 delayFactor:(double)arg2;
@end

