//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface CMBordersProperty : CMProperty
{
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
    int mCustomWidth;
}

+ (_Bool)isStroked:(id)arg1;
- (void).cxx_destruct;
- (id)colorString;
- (id)widthString;
- (id)styleString;
- (id)stringFromColor:(id)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (void)adjustValues;
- (void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3;
- (void)setNoneAtLocation:(int)arg1;
- (_Bool)isNoneAtLocation:(int)arg1;
- (id)initWithOADStroke:(id)arg1;
- (id)init;

@end

