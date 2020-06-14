//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CATState : NSObject
{
    NSMutableDictionary *mTranstionByTriggeringEvent;
    NSString *_name;
    SEL _enterAction;
    SEL _exitAction;
}

+ (id)new;
@property(nonatomic) SEL exitAction; // @synthesize exitAction=_exitAction;
@property(nonatomic) SEL enterAction; // @synthesize enterAction=_enterAction;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)transitionWithTriggeringEvent:(id)arg1;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)init;

@end

