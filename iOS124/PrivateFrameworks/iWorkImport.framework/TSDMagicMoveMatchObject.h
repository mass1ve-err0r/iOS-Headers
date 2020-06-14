//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TSDRep;

__attribute__((visibility("hidden")))
@interface TSDMagicMoveMatchObject : NSObject
{
    TSDRep *_rep;
    long long _zOrder;
    NSMutableDictionary *_attributes;
    NSString *_stringValue;
    NSString *_name;
    struct CGPoint _position;
    struct _NSRange _stringRange;
}

+ (id)matchObjectWithTextRep:(id)arg1 position:(struct CGPoint)arg2 stringValue:(id)arg3 stringRange:(struct _NSRange)arg4;
+ (id)matchObjectWithRep:(id)arg1 position:(struct CGPoint)arg2;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct _NSRange stringRange; // @synthesize stringRange=_stringRange;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=_rep;
- (_Bool)conflictsWithMatchObject:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRep:(id)arg1 position:(struct CGPoint)arg2 stringValue:(id)arg3 stringRange:(struct _NSRange)arg4;
- (id)init;

@end

