//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HKBorderLineView : UIView
{
    long long _edges;
    double _borderWidth;
    UIColor *_borderLineColor;
    struct UIEdgeInsets _borderInsets;
}

+ (void)drawBorderLinesInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 borderEdges:(long long)arg3 borderLineWidth:(double)arg4 borderLineColor:(id)arg5 borderInsets:(struct UIEdgeInsets)arg6;
@property(nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
@property(retain, nonatomic) UIColor *borderLineColor; // @synthesize borderLineColor=_borderLineColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) long long edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_initFields;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

