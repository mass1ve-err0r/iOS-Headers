//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFHashBuilder : NSObject
{
}

+ (unsigned long long)doubleHash:(double)arg1;
+ (unsigned long long)unsignedIntegerHash:(unsigned long long)arg1;
+ (unsigned long long)integerHash:(long long)arg1;
+ (unsigned long long)boolHash:(_Bool)arg1;
+ (unsigned long long)arrayHash:(id)arg1;
+ (unsigned long long)pointerHash:(void *)arg1;
+ (unsigned long long)objectHash:(id)arg1;
+ (unsigned long long)hashWithBlocks:(CDUnknownBlockType)arg1;

@end

