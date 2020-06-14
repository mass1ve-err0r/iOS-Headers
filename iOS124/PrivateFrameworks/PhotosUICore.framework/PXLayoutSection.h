//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PXLayoutSection : NSObject
{
    NSMutableDictionary *_geometriesByKind;
    _Bool _accurate;
    unsigned long long _identifier;
    long long _index;
    NSArray *_geometryKinds;
    struct CGRect _frame;
}

@property(retain, nonatomic) NSArray *geometryKinds; // @synthesize geometryKinds=_geometryKinds;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic, getter=isAccurate) _Bool accurate; // @synthesize accurate=_accurate;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize size;
- (void)enumerateGeometriesWithBlock:(CDUnknownBlockType)arg1;
- (id)geometriesWithKind:(long long)arg1;
- (void)setGeometries:(id)arg1 withKind:(long long)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

