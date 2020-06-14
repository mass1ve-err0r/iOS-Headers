//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol ASVAROnboardingUIUpdateManagerDelegate;

@interface ASVUpdateManager : NSObject
{
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
    id <ASVAROnboardingUIUpdateManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <ASVAROnboardingUIUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawWithTimeDelta:(double)arg1;
- (void)update;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init:(id)arg1 metalLayer:(id)arg2;

@end

