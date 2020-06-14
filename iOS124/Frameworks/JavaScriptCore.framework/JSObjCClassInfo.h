//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface JSObjCClassInfo : NSObject
{
    Class m_class;
    _Bool m_block;
    struct OpaqueJSClass *m_classRef;
    struct Weak<JSC::JSObject> m_prototype;
    struct Weak<JSC::JSObject> m_constructor;
    struct Weak<JSC::Structure> m_structure;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Structure *)structureInContext:(id)arg1;
- (struct JSObject *)prototypeInContext:(id)arg1;
- (struct JSObject *)constructorInContext:(id)arg1;
- (struct JSObject *)wrapperForObject:(id)arg1 inContext:(id)arg2;
- (pair_bfa3637f)allocateConstructorAndPrototypeInContext:(id)arg1;
- (void)dealloc;
- (id)initForClass:(Class)arg1;

@end

