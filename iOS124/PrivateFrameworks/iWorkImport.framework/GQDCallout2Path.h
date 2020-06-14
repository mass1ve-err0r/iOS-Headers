//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDCallout2Path : GQDPath
{
    struct CGSize mSize;
    double mCornerRadius;
    struct CGPoint mTailPosition;
    double mTailSize;
    _Bool mTailAtCenter;
}

- (_Bool)tailAtCenter;
- (double)tailSize;
- (struct CGPoint)tailPosition;
- (double)cornerRadius;
- (struct CGSize)size;
- (struct CGPath *)createBezierPath;
- (struct CGPoint)tailCenter;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

