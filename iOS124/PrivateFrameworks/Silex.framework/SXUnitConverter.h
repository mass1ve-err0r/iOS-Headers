//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXUnitConverter : NSObject
{
    double _componentWidth;
    double _parentWidth;
    double _documentGutter;
    double _documentMargin;
    struct CGSize _viewportSize;
}

@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(readonly, nonatomic) double documentMargin; // @synthesize documentMargin=_documentMargin;
@property(readonly, nonatomic) double documentGutter; // @synthesize documentGutter=_documentGutter;
@property(readonly, nonatomic) double parentWidth; // @synthesize parentWidth=_parentWidth;
@property(readonly, nonatomic) double componentWidth; // @synthesize componentWidth=_componentWidth;
- (double)convertParentWidthToPoints:(double)arg1;
- (double)convertDocumentMarginToPoints:(double)arg1;
- (double)convertComponentWidthToPoints:(double)arg1;
- (double)convertColumnGutterToPoints:(double)arg1;
- (double)convertViewportMaxToPoints:(double)arg1;
- (double)convertViewportMinToPoints:(double)arg1;
- (double)convertViewportWidthToPoints:(double)arg1;
- (double)convertViewportHeightToPoints:(double)arg1;
- (double)convertValueToPoints:(struct _SXConvertibleValue)arg1;
- (id)initWithComponentWidth:(double)arg1 parentWidth:(double)arg2 documentGutter:(double)arg3 documentMargin:(double)arg4 viewportSize:(struct CGSize)arg5;

@end

