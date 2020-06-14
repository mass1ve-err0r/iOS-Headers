//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLImageTable;

@interface PLImageTableSegment : NSObject
{
    PLImageTable *_imageTable;
    unsigned long long _index;
    void *_ptr;
    unsigned long long _length;
    _Bool _dying;
}

- (void *)bytes;
- (void)dealloc;
- (oneway void)release;
- (id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3;
- (id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void *)arg4;

@end

