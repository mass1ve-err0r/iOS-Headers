//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface HMApplicationData : NSObject
{
    NSMutableDictionary *_applicationData;
    NSSet *_allowedObjectClasses;
}

@property(retain, nonatomic) NSSet *allowedObjectClasses; // @synthesize allowedObjectClasses=_allowedObjectClasses;
@property(retain, nonatomic) NSMutableDictionary *applicationData; // @synthesize applicationData=_applicationData;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)isAllowedClassForObject:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)dictionary;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allValues;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (id)init;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2;

@end

