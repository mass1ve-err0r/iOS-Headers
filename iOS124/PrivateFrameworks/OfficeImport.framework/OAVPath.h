//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVPath : NSObject
{
}

+ (void)writePath:(id)arg1 toString:(id)arg2;
+ (void)readPath:(id)arg1 toGeometry:(id)arg2;
+ (struct EshComputedValue)parseParam:(const char **)arg1 first:(_Bool)arg2;
+ (int)parseCommand:(const char **)arg1;

@end

