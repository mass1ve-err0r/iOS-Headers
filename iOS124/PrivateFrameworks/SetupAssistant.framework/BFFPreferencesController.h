//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BFFPreferencesController : NSObject
{
    NSMutableDictionary *_preferences;
}

+ (id)buddyPreferences;
- (void).cxx_destruct;
- (void)persist;
- (void)reset;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

