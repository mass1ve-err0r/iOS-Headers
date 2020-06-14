//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLNamedConstantValue : NSObject
{
    NSString *_name;
    unsigned long long _dataType;
    char *_data;
}

@property(readonly) void *data; // @synthesize data=_data;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)describe;
- (void)dealloc;
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 name:(id)arg3;

@end

