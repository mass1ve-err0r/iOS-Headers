//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_backingDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (id)keyEnumerator;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (void)addObjects:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;

@end

