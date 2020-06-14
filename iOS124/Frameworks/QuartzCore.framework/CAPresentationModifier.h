//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAPresentationModifierGroup, NSString;

@interface CAPresentationModifier : NSObject
{
    void *_impl;
    id _keyPath;
    id _value;
    id _group;
    int _l;
    unsigned int _f;
}

@property(getter=isEnabled) _Bool enabled;
@property(retain) id value;
- (void)write;
- (struct Object *)CA_copyRenderValue;
- (id)debugDescription;
@property(readonly) CAPresentationModifierGroup *group;
@property(readonly, copy) NSString *keyPath;
@property(readonly) _Bool additive;
- (void)dealloc;
- (id)init;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(_Bool)arg3 group:(id)arg4;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(_Bool)arg3;

@end
