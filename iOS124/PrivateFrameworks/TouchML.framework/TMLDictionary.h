//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface TMLDictionary : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)union:(id)arg1;
- (void)set:(id)arg1 value:(id)arg2;
- (id)get:(id)arg1;
@property(readonly, nonatomic) NSArray *keys;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

