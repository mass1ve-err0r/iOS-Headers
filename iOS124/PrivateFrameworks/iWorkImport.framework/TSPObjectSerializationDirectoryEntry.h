//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationDirectoryEntry : NSObject
{
    unsigned long long _offset;
    unsigned long long _size;
}

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (id)initWithOffset:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (id)init;

@end

