//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSDictionary;

@interface ML3ExportItem : NSObject
{
    NSDictionary *_properties;
    long long _persistentId;
    ML3MusicLibrary *_library;
    Class _entityClass;
}

+ (unsigned int *)allExportPropertyKeysForEntityClass:(Class)arg1 returnedCount:(unsigned int *)arg2;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) long long persistentId; // @synthesize persistentId=_persistentId;
- (void).cxx_destruct;
- (id)_allExportPropertyNames;
- (id)_propertyNamesFromKeys:(unsigned int *)arg1 numKeys:(unsigned int)arg2;
- (id)_propertyNameForKey:(unsigned int)arg1;
- (id)exportData;
- (unsigned int *)propertyKeysToExport:(unsigned int *)arg1;
- (_Bool)isValid;
- (_Bool)hasValueForProperty:(unsigned int)arg1;
- (id)stringValueForProperty:(unsigned int)arg1;
- (id)dataValueForProperty:(unsigned int)arg1;
- (long long)longlongValueForProperty:(unsigned int)arg1;
- (int)longValueForProperty:(unsigned int)arg1;
- (short)shortValueForProperty:(unsigned int)arg1;
- (BOOL)charValueForProperty:(unsigned int)arg1;
- (id)valueForProperty:(unsigned int)arg1;
- (id)description;
- (id)initWithPersistentId:(long long)arg1 entityClass:(id)arg2 properties:(id)arg3 library:(id)arg4;
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 propertyKeysToExport:(unsigned int *)arg3 numKeys:(unsigned int)arg4 library:(id)arg5;
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 library:(id)arg3;

@end

