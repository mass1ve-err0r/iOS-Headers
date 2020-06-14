//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/NSMutableCopying-Protocol.h>

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mDictionary;
}

- (struct __CFDictionary *)p_cfDictionary;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)allValues;
- (id)allKeys;
- (id)arrayOfBoxedKeys;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (_Bool)containsKey:(long long)arg1;
- (id)keyEnumerator;
- (void)removeAllInts;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;
- (void)removeIntForKey:(long long)arg1;
- (long long)intForKey:(long long)arg1;
- (_Bool)intIsPresentForKey:(long long)arg1 outValue:(long long *)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

