//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (RCAdditions)
+ (id)rc_dictionaryFromJSON:(id)arg1;
+ (id)rc_dictionaryFromJSON:(id)arg1 error:(id *)arg2;
+ (id)rc_dictionaryFromData:(id)arg1 error:(id *)arg2;
- (id)rc_subdictionaryForKeys:(id)arg1;
- (id)rc_dictionaryByTransformingValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)rc_dictionaryByTransformingKeysWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
@end

