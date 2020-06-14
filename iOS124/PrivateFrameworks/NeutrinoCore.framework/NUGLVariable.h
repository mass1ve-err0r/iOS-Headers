//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUGLVariable : NSObject
{
    unsigned int _type;
    int _size;
    int _location;
}

@property(readonly) int location; // @synthesize location=_location;
@property(readonly) int size; // @synthesize size=_size;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) unsigned int valueType;
- (_Bool)isEqualToVariable:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2 location:(int)arg3;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2;
- (id)initWithType:(unsigned int)arg1;
- (id)init;

@end

