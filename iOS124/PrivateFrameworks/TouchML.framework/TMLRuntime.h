//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMLRuntime : NSObject
{
}

+ (id)ensureClass:(id)arg1;
+ (id)ensurePropertyWithKeyPath:(id)arg1 forObject:(id)arg2 writable:(_Bool)arg3;
+ (id)propertyWithKeyPath:(id)arg1 forObject:(id)arg2;
+ (id)propertyWithKeyPath:(id)arg1 inClass:(id)arg2;
+ (id)property:(id)arg1 forClass:(id)arg2;
+ (id)protocolForName:(id)arg1;
+ (id)classForName:(id)arg1;
+ (id)childClassForName:(id)arg1 inClass:(id)arg2;
+ (id)classForObject:(id)arg1;
+ (id)signal:(id)arg1 forObject:(id)arg2;
+ (void)verifyMethod:(id)arg1 withClass:(Class)arg2;
+ (void)verifyMethod:(id)arg1 forProtocol:(id)arg2;
+ (void)registerSignal:(id)arg1 forObject:(id)arg2;
+ (void)registerMethod:(id)arg1 forObject:(id)arg2;
+ (id)property:(id)arg1 forObject:(id)arg2;
+ (void)registerProperty:(id)arg1 forObject:(id)arg2;
+ (void)addProperty:(id)arg1 toClass:(Class)arg2;
+ (void)verifyProperty:(id)arg1 withClass:(Class)arg2;
+ (Class)createClass:(id)arg1;
+ (void)registerProtocol:(id)arg1;
+ (void)registerClass:(id)arg1 className:(id)arg2;
+ (void)registerClass:(id)arg1;
+ (void)makeObject:(id)arg1 implementProtocols:(id)arg2;
+ (id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(CDUnknownBlockType)arg3 parentObject:(id)arg4;
+ (id)createObjectWithIdentifier:(id)arg1 ofClass:(id)arg2 initializer:(CDUnknownBlockType)arg3;
+ (id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(CDUnknownBlockType)arg3;
+ (id)requireModule:(id)arg1;
+ (id)rootClassDescriptor;
+ (void)bootstrap;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end

