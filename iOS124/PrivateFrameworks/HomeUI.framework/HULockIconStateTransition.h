//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HULockIconStateTransition : NSObject
{
    unsigned long long _fromState;
    unsigned long long _toState;
}

+ (id)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long toState; // @synthesize toState=_toState;
@property(readonly, nonatomic) unsigned long long fromState; // @synthesize fromState=_fromState;

@end

