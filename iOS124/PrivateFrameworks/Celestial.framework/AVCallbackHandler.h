//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface AVCallbackHandler : NSObject
{
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition *_condition;
    id _params;
}

@property SEL mainThreadAction; // @synthesize mainThreadAction=_mainThreadAction;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
- (_Bool)hasParams;
- (id)waitForCallbackParams;
- (void)setCallbackParams:(id)arg1;
- (void)dealloc;
- (id)init;

@end

