//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer
{
    double originalMaximumIntervalBetweenSuccessiveTaps;
    id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;
}

@property(nonatomic) __weak id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; // @synthesize tapDelayDelegate;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

