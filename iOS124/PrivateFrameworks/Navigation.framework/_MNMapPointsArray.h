//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointsArray : NSObject
{
    unsigned long long _count;
    CDStruct_2c43369c *_mapPoints;
}

@property(readonly, nonatomic) CDStruct_2c43369c *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
@property(readonly, nonatomic) Matrix_2bdd42a3 *points;

@end

