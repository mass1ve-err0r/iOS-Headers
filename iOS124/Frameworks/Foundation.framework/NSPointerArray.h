//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
+ (id)weakObjectsPointerArray;
+ (id)strongObjectsPointerArray;
+ (id)pointerArrayWithWeakObjects;
+ (id)pointerArrayWithStrongObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property unsigned long long count;
- (void)compact;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(void *)arg1;
- (void *)pointerAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;
- (id)allObjects;
- (id)mutableArray;

@end

