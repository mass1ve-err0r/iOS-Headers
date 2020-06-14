//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCopying-Protocol.h>

@interface WebSelectionRect : NSObject <NSCopying>
{
    struct CGRect m_rect;
    int m_writingDirection;
    _Bool m_isLineBreak;
    _Bool m_isFirstOnLine;
    _Bool m_isLastOnLine;
    _Bool m_containsStart;
    _Bool m_containsEnd;
    _Bool m_isInFixedPosition;
    _Bool m_isHorizontal;
}

+ (struct CGRect)endEdge:(id)arg1;
+ (struct CGRect)startEdge:(id)arg1;
+ (id)selectionRect;
@property(nonatomic) _Bool isHorizontal; // @synthesize isHorizontal=m_isHorizontal;
@property(nonatomic) _Bool isInFixedPosition; // @synthesize isInFixedPosition=m_isInFixedPosition;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=m_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=m_containsStart;
@property(nonatomic) _Bool isLastOnLine; // @synthesize isLastOnLine=m_isLastOnLine;
@property(nonatomic) _Bool isFirstOnLine; // @synthesize isFirstOnLine=m_isFirstOnLine;
@property(nonatomic) _Bool isLineBreak; // @synthesize isLineBreak=m_isLineBreak;
@property(nonatomic) int writingDirection; // @synthesize writingDirection=m_writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect=m_rect;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

