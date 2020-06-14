//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLFunctionConstant.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal : MTLFunctionConstant
{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    _Bool _required;
}

- (_Bool)required;
- (unsigned long long)index;
- (unsigned long long)type;
- (id)name;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(_Bool)arg4;

@end

