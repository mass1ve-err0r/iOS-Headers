//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DCachedLabelBoundsArray : NSObject
{
    NSMutableArray *_elements;
    tvec3_17f03ce0 _offset;
}

@property(nonatomic) tvec3_17f03ce0 offset; // @synthesize offset=_offset;
- (id).cxx_construct;
- (void)enumerateLabelBoundsUsingBlock:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)addLabelBounds:(id)arg1;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

