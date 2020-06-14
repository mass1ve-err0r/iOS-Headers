//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMGestureManager;

@interface CKRaiseGesture : NSObject
{
    int proximityToken;
    _Bool _enabled;
    _Bool _proximityState;
    long long _gestureState;
    id _target;
    SEL _action;
    CMGestureManager *_gestureManager;
}

+ (_Bool)isRaiseGestureSupported;
+ (_Bool)isRaiseGestureEnabled;
@property(nonatomic) _Bool proximityState; // @synthesize proximityState=_proximityState;
@property(retain, nonatomic) CMGestureManager *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) long long gestureState; // @synthesize gestureState=_gestureState;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)proximityStateDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isRecognized) _Bool recognized;
- (void)setProximityMonitoringEnabled:(_Bool)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end

