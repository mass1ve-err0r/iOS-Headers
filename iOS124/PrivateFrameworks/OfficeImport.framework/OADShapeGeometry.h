//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : NSObject
{
    _Bool mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)description;
- (unsigned long long)adjustValueCount;
- (_Bool)hasAdjustValueAtIndex:(unsigned int)arg1;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setIsEscher:(_Bool)arg1;
- (_Bool)isEscher;
- (id)equivalentCustomGeometry;
- (int)type;
- (id)adjustValues;
- (void)dealloc;
- (id)init;

@end

