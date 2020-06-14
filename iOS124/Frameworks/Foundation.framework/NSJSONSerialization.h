//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSJSONSerialization : NSObject
{
    void *reserved[6];
}

+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)isValidJSONObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

