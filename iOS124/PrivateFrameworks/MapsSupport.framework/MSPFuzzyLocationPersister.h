//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSPFuzzyLocationPersister : NSObject
{
    NSString *_path;
}

- (void).cxx_destruct;
- (void)removeIfLocationServicesDisabledForMaps;
- (_Bool)removeDictionaryError:(id *)arg1;
- (id)readDictionaryError:(id *)arg1;
- (_Bool)writeDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithPaths:(id)arg1;
- (id)init;

@end

