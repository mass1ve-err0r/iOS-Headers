//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject
{
    NSMutableDictionary *_classMap;
    NSMutableDictionary *_typeMap;
    NSMutableDictionary *_dependentMap;
}

- (void).cxx_destruct;
- (_Bool)isDependentByTagName:(id)arg1;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (Class)elementClassByTagName:(id)arg1;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
- (id)init;

@end
