//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFCameraAdjustmentsSerialization : NSObject
{
}

+ (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
+ (id)_errorWithMessage:(id)arg1 code:(long long)arg2;
+ (_Bool)deserializeDictionary:(id)arg1 toFilters:(id *)arg2 portraitMetadata:(id *)arg3 error:(id *)arg4;
+ (id)serializedDictionaryForFilters:(id)arg1 portraitMetadata:(id)arg2 error:(id *)arg3;

@end

