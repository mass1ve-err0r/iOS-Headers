//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSString, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDLineEnd : NSObject <TSSPropertyValueArchiving, NSCopying, TSDMixing>
{
    TSUBezierPath *_path;
    TSUBezierPath *_wrapPath;
    struct CGPoint _endPoint;
    _Bool _isFilled;
    NSString *_identifier;
    int _lineJoin;
}

+ (id)lineEndWithPath:(const struct CGPath *)arg1 wrapPath:(const struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5;
+ (id)lineEndWithPath:(const struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithType:(int)arg1;
+ (id)none;
+ (id)line;
+ (id)invertedArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)filledSquare;
+ (id)filledArrow;
+ (id)openArrow;
+ (id)filledDiamond;
+ (id)filledCircle;
+ (id)simpleArrow;
+ (id)instanceWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(readonly, nonatomic) _Bool isFilled; // @synthesize isFilled=_isFilled;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, copy, nonatomic) TSUBezierPath *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (double)scaleForStrokeWidth:(double)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)description;
@property(readonly, nonatomic) _Bool isNone;
@property(readonly, copy, nonatomic) TSUBezierPath *wrapPath;
- (struct CGImage *)newLineEndImageOnRight:(_Bool)arg1 forContentsScale:(double)arg2 withSize:(struct CGSize)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPath:(const struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;
- (id)initWithPath:(const struct CGPath *)arg1 wrapPath:(const struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (id)initWithBezierPath:(id)arg1 wrapPath:(id)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (void)saveToArchive:(struct LineEndArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;

@end

