//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject
{
    struct _NSRange _rowCharRange;
    double _containerWidth;
    NSArray *_rowArray;
    _Bool _collapseBorders;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange)arg1 containerWidth:(double)arg2 rowArray:(id)arg3 collapseBorders:(_Bool)arg4;

@end

