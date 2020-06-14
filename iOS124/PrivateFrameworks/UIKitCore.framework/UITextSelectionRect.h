//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject
{
}

+ (_Bool)endIsHorizontal:(id)arg1;
+ (_Bool)startIsHorizontal:(id)arg1;
+ (struct CGRect)endEdgeFromRects:(id)arg1;
+ (id)endRectFromRects:(id)arg1;
+ (struct CGRect)startEdgeFromRects:(id)arg1;
+ (id)startRectFromRects:(id)arg1;
@property(readonly, nonatomic) _Bool isVertical;
@property(readonly, nonatomic) _Bool containsStart;
@property(readonly, nonatomic) _Bool containsEnd;
@property(readonly, nonatomic, getter=_isImpl) UITextSelectionRectImpl *isImpl;
- (id)range;
@property(readonly, nonatomic) long long writingDirection;
@property(readonly, nonatomic) struct CGRect rect;

@end

