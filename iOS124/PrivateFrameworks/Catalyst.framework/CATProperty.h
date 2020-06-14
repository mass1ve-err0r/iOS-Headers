//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CATProperty : NSObject
{
    _Bool _readOnly;
    _Bool _nonAtomic;
    _Bool _weakReference;
    NSString *_name;
    NSString *_instanceVariableName;
    long long _type;
    Class _objectClass;
    long long _association;
    SEL _customGetterSelector;
    SEL _customSetterSelector;
}

+ (id)propertiesForProtocol:(id)arg1;
+ (id)propertiesForClass:(Class)arg1;
+ (void)initialize;
@property(readonly, nonatomic, getter=isWeakReference) _Bool weakReference; // @synthesize weakReference=_weakReference;
@property(readonly, nonatomic) SEL customSetterSelector; // @synthesize customSetterSelector=_customSetterSelector;
@property(readonly, nonatomic) SEL customGetterSelector; // @synthesize customGetterSelector=_customGetterSelector;
@property(readonly, nonatomic) long long association; // @synthesize association=_association;
@property(readonly, nonatomic, getter=isNonAtomic) _Bool nonAtomic; // @synthesize nonAtomic=_nonAtomic;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *instanceVariableName; // @synthesize instanceVariableName=_instanceVariableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;

@end

