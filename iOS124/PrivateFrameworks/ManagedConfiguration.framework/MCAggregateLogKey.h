//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCAggregateLogKey : NSObject
{
}

+ (id)bucketSpecificKeys:(unsigned long long)arg1;
+ (id)keysForAllBuckets;
+ (id)debugKeys;
+ (id)keys;
+ (unsigned long long)bucket;
@property(readonly, nonatomic) unsigned long long value;
@property(readonly, nonatomic) NSString *name;

@end

