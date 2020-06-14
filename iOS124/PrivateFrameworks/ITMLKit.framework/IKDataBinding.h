//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface IKDataBinding : NSObject
{
    NSMutableSet *_unresolvedKeys;
    struct NSDictionary *_keyValues;
    NSSet *_dataBoundKeys;
}

@property(readonly, nonatomic) NSSet *dataBoundKeys; // @synthesize dataBoundKeys=_dataBoundKeys;
@property(copy, nonatomic) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
- (void).cxx_destruct;
- (void)markResolvedForKey:(id)arg1;
- (void)setNeedsResolutionForAllKeys;
- (void)setNeedsResolutionForKey:(id)arg1;
- (void)appendKeyValues:(struct NSDictionary *)arg1;
@property(readonly, nonatomic) NSSet *unresolvedKeys;
- (id)initWithKeyValues:(struct NSDictionary *)arg1;

@end

