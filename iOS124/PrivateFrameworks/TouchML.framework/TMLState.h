//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface TMLState : NSObject
{
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
    NSString *_tmlStateName;
    NSString *_tmlStateExtends;
    TMLState *_baseState;
}

+ (id)stateForClass:(Class)arg1 stateName:(id)arg2;
+ (Class)registerState:(id)arg1 forClass:(Class)arg2;
@property(readonly, nonatomic) NSOrderedSet *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
@property(readonly, nonatomic) NSString *tmlStateExtends; // @synthesize tmlStateExtends=_tmlStateExtends;
@property(readonly, nonatomic) NSString *tmlStateName; // @synthesize tmlStateName=_tmlStateName;
- (void).cxx_destruct;
- (void)leaveStateToState:(id)arg1;
- (void)enterStateFromState:(id)arg1;
- (id)tmlIdentifier;
- (void)applyToObject:(id)arg1 ignorePropertyKeys:(id)arg2;
- (void)applyToObject:(id)arg1 fromState:(id)arg2;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithStateName:(id)arg1;
- (id)init;

@end

