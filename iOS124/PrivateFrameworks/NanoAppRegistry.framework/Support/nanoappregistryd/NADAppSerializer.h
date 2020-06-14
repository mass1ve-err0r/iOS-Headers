//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NADAppSerializer : NSObject
{
    NSString *_fileName;
    Class _entityClass;
}

+ (id)applicationSerializer;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (_Bool)setVersion:(unsigned long long)arg1 forApplicationAtURL:(id)arg2;
- (unsigned long long)versionForApplicationAtURL:(id)arg1;
- (id)objectAtDirectory:(id)arg1;
- (_Bool)persistObject:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;
- (id)URLForFileInDirectory:(id)arg1;
- (id)initWithDefaultFileName:(id)arg1 entityClass:(Class)arg2;

@end

